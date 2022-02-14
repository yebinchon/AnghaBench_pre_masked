
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_query {scalar_t__ extra_free; scalar_t__ extra; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;

void FUNC_1 (struct rpc_query *VAR_1) {
  if (VAR_1->extra) {
    VAR_0 --;
  }
  FUNC_0 (VAR_1->extra);
  VAR_1->extra = 0;
  VAR_1->extra_free = 0;
}
