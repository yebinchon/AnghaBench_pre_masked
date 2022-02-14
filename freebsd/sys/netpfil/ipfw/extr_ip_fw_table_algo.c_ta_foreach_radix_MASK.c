
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int walktree_f_t ;
typedef int ta_foreach_f ;
struct table_info {scalar_t__ xstate; scalar_t__ state; } ;
struct radix_node_head {int rh; int (* rnh_walktree ) (int *,int *,void*) ;} ;


 int FUNC_0 (int *,int *,void*) ;
 int FUNC_1 (int *,int *,void*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, struct table_info *VAR_1, ta_foreach_f *VAR_2,
    void *VAR_3)
{
 struct radix_node_head *VAR_4;

 VAR_4 = (struct radix_node_head *)(VAR_1->state);
 VAR_4->rnh_walktree(&VAR_4->rh, (walktree_f_t *)VAR_2, VAR_3);

 VAR_4 = (struct radix_node_head *)(VAR_1->xstate);
 VAR_4->rnh_walktree(&VAR_4->rh, (walktree_f_t *)VAR_2, VAR_3);
}
