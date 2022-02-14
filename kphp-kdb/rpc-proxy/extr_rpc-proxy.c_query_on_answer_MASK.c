
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* on_answer ) (void**,void**) ;} ;
struct rpc_query {TYPE_1__ type; int ev; } ;


 int FUNC_0 (struct rpc_query*) ;
 int FUNC_1 (struct rpc_query*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void**,void**) ;

void FUNC_4 (struct rpc_query *VAR_0) {
  FUNC_2 (&VAR_0->ev);
  int VAR_1 = 0;
  if (VAR_0->type.on_answer) {
    VAR_1 = (*VAR_0->type.on_answer) (((void **)VAR_0->type.on_answer) + 1, (void **)&VAR_0);
  } else {
    FUNC_0 (VAR_0);
  }
  if (VAR_1 <= 0) {
    FUNC_1 (VAR_0);
  }
}
