
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_query {scalar_t__ qid; int (* extra_free ) (struct rpc_query*) ;int answer_len; scalar_t__ answer; } ;


 int FUNC_0 (struct rpc_query*) ;
 int FUNC_1 (struct rpc_query*) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3 (struct rpc_query *VAR_1) {

  if (VAR_1->answer) {
    FUNC_2 (VAR_1->answer, VAR_1->answer_len);
  }
  FUNC_0 (VAR_1);
  if (VAR_1->extra_free) {
    VAR_1->extra_free (VAR_1);
  }
  VAR_1->qid = 0;

  VAR_0 --;

}
