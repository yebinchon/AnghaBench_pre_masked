
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_children_answer_old {int children_num; int children; } ;
struct node {int dummy; } ;
struct connection {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (long long) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct rpc_children_answer_old*,int,struct connection*,int ) ;
 int FUNC_4 (struct rpc_children_answer_old*,struct connection*) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_5 (struct connection *VAR_5, long long VAR_6) {
  if (VAR_4 >= 2) {
    FUNC_0 (VAR_3, "rpc_send_children_old\n");
  }
  int VAR_7 = FUNC_1 (VAR_6);
  if (VAR_7 < 0) {
    return 0;
  }
  struct rpc_children_answer_old *VAR_8 = (struct rpc_children_answer_old *)VAR_0;
  FUNC_3 (VAR_8, sizeof (struct rpc_children_answer_old) + VAR_7 * sizeof (struct node), VAR_5, VAR_1);
  FUNC_2 (VAR_8->children, VAR_2, VAR_7 * sizeof (struct node));
  VAR_8->children_num = VAR_7;
  return FUNC_4 (VAR_8, VAR_5);
}
