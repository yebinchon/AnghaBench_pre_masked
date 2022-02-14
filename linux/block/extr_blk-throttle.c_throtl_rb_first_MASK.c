
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_service_queue {int pending_tree; int nr_pending; } ;
struct throtl_grp {int dummy; } ;
struct rb_node {int dummy; } ;


 int FUNC_0 (int) ;
 struct throtl_grp* FUNC_1 (struct rb_node*) ;
 struct rb_node* FUNC_2 (int *) ;

__attribute__((used)) static struct throtl_grp *
FUNC_3(struct throtl_service_queue *VAR_0)
{
 struct rb_node *VAR_1;

 if (!VAR_0->nr_pending)
  return ((void*)0);

 VAR_1 = FUNC_2(&VAR_0->pending_tree);
 FUNC_0(!VAR_1);
 if (!VAR_1)
  return ((void*)0);
 return FUNC_1(VAR_1);
}
