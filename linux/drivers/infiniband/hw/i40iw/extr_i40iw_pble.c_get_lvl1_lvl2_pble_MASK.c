
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_sc_dev {int dummy; } ;
struct i40iw_pble_alloc {scalar_t__ total_cnt; } ;
struct i40iw_hmc_pble_rsrc {int dummy; } ;
struct gen_pool {int dummy; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct i40iw_sc_dev*,struct i40iw_hmc_pble_rsrc*,struct i40iw_pble_alloc*) ;
 int FUNC_1 (struct i40iw_hmc_pble_rsrc*,struct i40iw_pble_alloc*,struct gen_pool*) ;

__attribute__((used)) static inline enum i40iw_status_code FUNC_2(struct i40iw_sc_dev *VAR_1,
       struct i40iw_hmc_pble_rsrc *VAR_2,
       struct i40iw_pble_alloc *VAR_3,
       struct gen_pool *VAR_4)
{
 enum i40iw_status_code VAR_5 = 0;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_5 && (VAR_3->total_cnt > VAR_0))
  VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
 return VAR_5;
}
