
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_children_answer {int children_num; int children; } ;
struct node {int dummy; } ;
struct connection {int dummy; } ;
struct TYPE_3__ {int children_received; } ;
struct TYPE_4__ {TYPE_1__ structured; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,char*,int,int,...) ;

int FUNC_3 (struct connection *VAR_4, struct rpc_children_answer *VAR_5, int VAR_6) {
  FUNC_2 (2, "rpc_execute_children_answer: len = %d, children_num = %d\n", VAR_6, VAR_5->children_num);
  if (VAR_6 != sizeof (struct rpc_children_answer) + sizeof (struct node) * VAR_5->children_num) {
    return 0;
  }
  FUNC_2 (6, "%p %lld %d\n", VAR_0, VAR_2, VAR_5->children_num);
  VAR_3->structured.children_received++;
  FUNC_0 ();
  FUNC_1 (VAR_5->children, (VAR_5->children_num > VAR_1 ? VAR_1 : VAR_5->children_num));
  return 0;
}
