
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* on_free ) (void**,void**) ;} ;
struct rpc_query {TYPE_1__ type; } ;


 int FUNC_0 (struct rpc_query*) ;
 int FUNC_1 (void**,void**) ;

void FUNC_2 (struct rpc_query *VAR_0) {
  if (VAR_0->type.on_free) {
    (*VAR_0->type.on_free) (((void **)VAR_0->type.on_free) + 1, (void **)&VAR_0);
  } else {
    FUNC_0 (VAR_0);
  }
}
