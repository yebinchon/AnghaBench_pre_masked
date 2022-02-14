
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_get_file_data {int dummy; } ;
struct rpc_forward_query {struct rpc_forward_query* next; struct rpc_forward_query* prev; scalar_t__ deadline; struct rpc_get_file_data* L; } ;


 scalar_t__ VAR_0 ;
 struct rpc_forward_query VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int,char*,struct rpc_get_file_data*) ;
 struct rpc_forward_query* FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3 (struct rpc_get_file_data *VAR_2) {
  FUNC_1 (3, "create_new_forward_query (%p)\n", VAR_2);
  struct rpc_forward_query *VAR_3 = FUNC_2 (sizeof (struct rpc_forward_query));
  VAR_3->L = VAR_2;
  VAR_3->deadline = FUNC_0 () + VAR_0;
  struct rpc_forward_query *VAR_4 = &VAR_1, *VAR_5 = VAR_1.prev;
  VAR_5->next = VAR_3; VAR_3->prev = VAR_5;
  VAR_4->prev = VAR_3; VAR_3->next = VAR_4;
}
