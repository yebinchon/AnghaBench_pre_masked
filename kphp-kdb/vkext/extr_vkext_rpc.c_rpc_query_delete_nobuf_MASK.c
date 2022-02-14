
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_query {scalar_t__ qid; int (* extra_free ) (struct rpc_query*) ;} ;


 int FUNC_0 (struct rpc_query*) ;
 int FUNC_1 (struct rpc_query*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2 (struct rpc_query *VAR_1) {


  FUNC_0 (VAR_1);
  if (VAR_1->extra_free) {
    VAR_1->extra_free (VAR_1);
  }
  VAR_1->qid = 0;
  VAR_0 --;
}
