
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct i40iw_pble_info {int cnt; void* idx; void* addr; } ;
struct i40iw_pble_level2 {int leaf_cnt; struct i40iw_pble_info* leaf; struct i40iw_pble_info root; } ;
struct i40iw_pble_alloc {int total_cnt; int level; struct i40iw_pble_level2 level2; } ;
struct i40iw_hmc_pble_rsrc {int stats_lvl2; } ;
struct gen_pool {int dummy; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct i40iw_hmc_pble_rsrc*,scalar_t__) ;
 int FUNC_1 (struct i40iw_hmc_pble_rsrc*,struct i40iw_pble_alloc*) ;
 void* FUNC_2 (struct gen_pool*,int) ;
 scalar_t__ FUNC_3 (struct gen_pool*,void*) ;
 int FUNC_4 (struct i40iw_pble_info*) ;
 struct i40iw_pble_info* FUNC_5 (int,int ) ;

__attribute__((used)) static enum i40iw_status_code FUNC_6(struct i40iw_hmc_pble_rsrc *VAR_4,
         struct i40iw_pble_alloc *VAR_5,
         struct gen_pool *VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9, VAR_10;
 u32 VAR_11 = VAR_3;
 u64 *VAR_12;
 struct i40iw_pble_level2 *VAR_13 = &VAR_5->level2;
 struct i40iw_pble_info *VAR_14 = &VAR_13->root;
 struct i40iw_pble_info *VAR_15;


 VAR_7 = VAR_5->total_cnt >> 9;
 VAR_8 = VAR_5->total_cnt % VAR_3;
 VAR_9 = (VAR_8 == 0) ? VAR_7 : VAR_7 + 1;
 VAR_13->leaf_cnt = VAR_9;

 VAR_15 = FUNC_5((sizeof(*VAR_15) * VAR_9), VAR_0);
 if (!VAR_15)
  return VAR_1;
 VAR_13->leaf = VAR_15;

 VAR_14->addr = FUNC_2(VAR_6, (VAR_9 << 3));
 if (!VAR_14->addr) {
  FUNC_4(VAR_13->leaf);
  VAR_13->leaf = ((void*)0);
  return VAR_1;
 }
 VAR_14->idx = FUNC_0(VAR_4,
          (u64)FUNC_3(VAR_6, VAR_14->addr));
 VAR_14->cnt = VAR_9;
 VAR_12 = (u64 *)VAR_14->addr;
 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++, VAR_15++) {
  VAR_11 = (VAR_8 && ((VAR_10 + 1) == VAR_9)) ? VAR_8 : VAR_3;
  VAR_15->addr = FUNC_2(VAR_6, (VAR_11 << 3));
  if (!VAR_15->addr)
   goto error;
  VAR_15->idx = FUNC_0(VAR_4, (u64)FUNC_3(VAR_6, VAR_15->addr));

  VAR_15->cnt = VAR_11;
  *VAR_12 = (u64)VAR_15->idx;
  VAR_12++;
 }
 VAR_5->level = VAR_2;
 VAR_4->stats_lvl2++;
 return 0;
 error:
 FUNC_1(VAR_4, VAR_5);
 return VAR_1;
}
