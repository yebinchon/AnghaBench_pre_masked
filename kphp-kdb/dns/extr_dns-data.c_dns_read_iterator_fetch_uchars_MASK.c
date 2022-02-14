
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int avail_in; int rptr; } ;
typedef TYPE_1__ dns_read_iterator_t ;


 int FUNC_0 (unsigned char*,int,int) ;

__attribute__((used)) static int FUNC_1 (dns_read_iterator_t *VAR_0, int VAR_1, unsigned char *VAR_2) {
  if (VAR_0->avail_in < VAR_1) {
    return -1;
  }
  FUNC_0 (VAR_2, VAR_0->rptr, VAR_1);
  VAR_0->avail_in -= VAR_1;
  VAR_0->rptr += VAR_1;
  return 0;
}
