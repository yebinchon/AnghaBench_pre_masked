
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* start; unsigned char* rptr; int ilen; int avail_in; } ;
typedef TYPE_1__ dns_read_iterator_t ;



__attribute__((used)) static void FUNC_0 (dns_read_iterator_t *VAR_0, unsigned char *VAR_1, int VAR_2) {
  VAR_0->start = VAR_0->rptr = VAR_1;
  VAR_0->ilen = VAR_0->avail_in = VAR_2;
}
