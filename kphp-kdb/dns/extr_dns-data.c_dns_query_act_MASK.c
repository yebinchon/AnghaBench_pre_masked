
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; } ;
struct TYPE_8__ {int record_start; int wptr; } ;
struct TYPE_9__ {int truncated; TYPE_1__ header; TYPE_2__ Out; int * q; } ;
typedef TYPE_3__ dns_response_t ;
typedef int dns_query_t ;


 int FUNC_0 (TYPE_3__*,unsigned char*,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;

int FUNC_2 (dns_query_t *VAR_1, dns_response_t *VAR_2, unsigned char *VAR_3, int VAR_4) {
  VAR_2->truncated = 0;
  VAR_2->q = VAR_1;
  int VAR_5 = FUNC_0 (VAR_2, VAR_3, VAR_4);
  if (VAR_5 == -2) {
    VAR_2->Out.wptr = VAR_2->Out.record_start;
    VAR_2->header.flags |= VAR_0;
    VAR_2->truncated = 1;
    VAR_5 = FUNC_1 (VAR_2);
  }
  return VAR_5;
}
