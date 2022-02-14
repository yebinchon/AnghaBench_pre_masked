
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_service_queue {int nr_pending; int pending_tree; } ;
struct rb_node {int dummy; } ;


 int FUNC_0 (struct rb_node*) ;
 int FUNC_1 (struct rb_node*,int *) ;

__attribute__((used)) static void FUNC_2(struct rb_node *VAR_0,
       struct throtl_service_queue *VAR_1)
{
 FUNC_1(VAR_0, &VAR_1->pending_tree);
 FUNC_0(VAR_0);
 --VAR_1->nr_pending;
}
