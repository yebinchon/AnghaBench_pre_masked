
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_info {scalar_t__ xstate; scalar_t__ state; } ;
struct radix_node_head {int rh; int (* rnh_walktree ) (int *,int ,struct radix_node_head*) ;} ;
struct radix_cfg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct radix_cfg*,int ) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int *,int ,struct radix_node_head*) ;
 int FUNC_3 (int *,int ,struct radix_node_head*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2, struct table_info *VAR_3)
{
 struct radix_cfg *VAR_4;
 struct radix_node_head *VAR_5;

 VAR_4 = (struct radix_cfg *)VAR_2;

 VAR_5 = (struct radix_node_head *)(VAR_3->state);
 VAR_5->rnh_walktree(&VAR_5->rh, VAR_1, VAR_5);
 FUNC_1(&VAR_3->state);

 VAR_5 = (struct radix_node_head *)(VAR_3->xstate);
 VAR_5->rnh_walktree(&VAR_5->rh, VAR_1, VAR_5);
 FUNC_1(&VAR_3->xstate);

 FUNC_0(VAR_4, VAR_0);
}
