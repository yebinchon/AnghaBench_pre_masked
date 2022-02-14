
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct i40iw_pble_info {int cnt; scalar_t__ addr; } ;
struct i40iw_pble_level2 {scalar_t__ leaf_cnt; struct i40iw_pble_info* leaf; struct i40iw_pble_info root; } ;
struct i40iw_pble_alloc {struct i40iw_pble_level2 level2; } ;
struct TYPE_2__ {struct gen_pool* pool; } ;
struct i40iw_hmc_pble_rsrc {TYPE_1__ pinfo; } ;
struct gen_pool {int dummy; } ;


 int FUNC_0 (struct gen_pool*,scalar_t__,int) ;
 int FUNC_1 (struct i40iw_pble_info*) ;

__attribute__((used)) static void FUNC_2(struct i40iw_hmc_pble_rsrc *VAR_0,
        struct i40iw_pble_alloc *VAR_1)
{
 u32 VAR_2;
 struct gen_pool *VAR_3;
 struct i40iw_pble_level2 *VAR_4 = &VAR_1->level2;
 struct i40iw_pble_info *VAR_5 = &VAR_4->root;
 struct i40iw_pble_info *VAR_6 = VAR_4->leaf;

 VAR_3 = VAR_0->pinfo.pool;

 for (VAR_2 = 0; VAR_2 < VAR_4->leaf_cnt; VAR_2++, VAR_6++) {
  if (VAR_6->addr)
   FUNC_0(VAR_3, VAR_6->addr, (VAR_6->cnt << 3));
  else
   break;
 }

 if (VAR_5->addr)
  FUNC_0(VAR_3, VAR_5->addr, (VAR_5->cnt << 3));

 FUNC_1(VAR_4->leaf);
 VAR_4->leaf = ((void*)0);
}
