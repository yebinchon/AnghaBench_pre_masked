
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int avail_in; scalar_t__* rptr; } ;
typedef TYPE_1__ dns_read_iterator_t ;



__attribute__((used)) static int FUNC_0 (dns_read_iterator_t *VAR_0, unsigned short *VAR_1) {
  if (VAR_0->avail_in < 2) {
    return -1;
  }
  *VAR_1 = (((int) VAR_0->rptr[0]) << 8) + (int) VAR_0->rptr[1];
  VAR_0->avail_in -= 2;
  VAR_0->rptr += 2;
  return 0;
}
