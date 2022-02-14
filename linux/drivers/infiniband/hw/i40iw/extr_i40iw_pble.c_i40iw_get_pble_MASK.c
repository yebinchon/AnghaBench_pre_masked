
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i40iw_sc_dev {int dummy; } ;
struct i40iw_pble_alloc {int total_cnt; int level; } ;
struct TYPE_2__ {struct gen_pool* pool; } ;
struct i40iw_hmc_pble_rsrc {int stats_alloc_fail; int stats_alloc_ok; TYPE_1__ pinfo; } ;
struct gen_pool {int dummy; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int FUNC_0 (struct i40iw_sc_dev*,struct i40iw_hmc_pble_rsrc*) ;
 int FUNC_1 (struct i40iw_sc_dev*,struct i40iw_hmc_pble_rsrc*,struct i40iw_pble_alloc*,struct gen_pool*) ;

enum i40iw_status_code FUNC_2(struct i40iw_sc_dev *VAR_1,
          struct i40iw_hmc_pble_rsrc *VAR_2,
          struct i40iw_pble_alloc *VAR_3,
          u32 VAR_4)
{
 struct gen_pool *VAR_5;
 enum i40iw_status_code VAR_6 = 0;
 u32 VAR_7 = 0;
 int VAR_8;

 VAR_5 = VAR_2->pinfo.pool;
 VAR_3->total_cnt = VAR_4;
 VAR_3->level = VAR_0;

 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_5);
 if (!VAR_6)
  goto exit;
 VAR_7 = (VAR_3->total_cnt >> 18) + 1;
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  VAR_6 = FUNC_0(VAR_1, VAR_2);
  if (VAR_6)
   break;
  VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_5);
  if (!VAR_6)
   break;
 }
exit:
 if (!VAR_6)
  VAR_2->stats_alloc_ok++;
 else
  VAR_2->stats_alloc_fail++;

 return VAR_6;
}
