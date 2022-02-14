
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int avail_out; int wptr; } ;
typedef TYPE_1__ dns_write_iterator_t ;



__attribute__((used)) static int FUNC_0 (dns_write_iterator_t *VAR_0, int VAR_1) {
  if (VAR_0->avail_out < VAR_1) {
    return -1;
  }
  VAR_0->wptr += VAR_1;
  VAR_0->avail_out -= VAR_1;
  return 0;
}
