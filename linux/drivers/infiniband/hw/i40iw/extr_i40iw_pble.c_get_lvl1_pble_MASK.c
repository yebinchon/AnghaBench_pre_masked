
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct i40iw_sc_dev {int dummy; } ;
struct i40iw_pble_info {unsigned long addr; int cnt; int idx; } ;
struct i40iw_pble_alloc {int total_cnt; int level; struct i40iw_pble_info level1; } ;
struct TYPE_2__ {struct gen_pool* pool; } ;
struct i40iw_hmc_pble_rsrc {int stats_lvl1; TYPE_1__ pinfo; } ;
struct gen_pool {int dummy; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i40iw_hmc_pble_rsrc*,int ) ;
 scalar_t__ FUNC_1 (struct gen_pool*,int) ;
 scalar_t__ FUNC_2 (struct gen_pool*,unsigned long) ;

__attribute__((used)) static enum i40iw_status_code FUNC_3(struct i40iw_sc_dev *VAR_2,
         struct i40iw_hmc_pble_rsrc *VAR_3,
         struct i40iw_pble_alloc *VAR_4)
{
 u64 *VAR_5;
 struct gen_pool *VAR_6;
 struct i40iw_pble_info *VAR_7 = &VAR_4->level1;

 VAR_6 = VAR_3->pinfo.pool;
 VAR_5 = (u64 *)FUNC_1(VAR_6, (VAR_4->total_cnt << 3));

 if (!VAR_5)
  return VAR_0;

 VAR_4->level = VAR_1;
 VAR_7->addr = (unsigned long)VAR_5;
 VAR_7->idx = FUNC_0(VAR_3, (u64)FUNC_2(VAR_6,
          (unsigned long)VAR_5));
 VAR_7->cnt = VAR_4->total_cnt;
 VAR_3->stats_lvl1++;
 return 0;
}
