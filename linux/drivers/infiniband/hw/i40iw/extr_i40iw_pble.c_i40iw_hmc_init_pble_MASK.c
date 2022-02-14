
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct i40iw_sc_dev {struct i40iw_hmc_info* hmc_info; } ;
struct TYPE_4__ {int pool; int clist; int pool_shift; } ;
struct i40iw_hmc_pble_rsrc {int fpm_base_addr; int next_fpm_addr; TYPE_2__ pinfo; scalar_t__ unallocated_pble; } ;
struct i40iw_hmc_info {TYPE_1__* hmc_obj; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_3__ {int base; scalar_t__ cnt; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct i40iw_sc_dev*,struct i40iw_hmc_pble_rsrc*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct i40iw_sc_dev*,struct i40iw_hmc_pble_rsrc*) ;

enum i40iw_status_code FUNC_4(struct i40iw_sc_dev *VAR_4,
        struct i40iw_hmc_pble_rsrc *VAR_5)
{
 struct i40iw_hmc_info *VAR_6;
 u32 VAR_7 = 0;

 VAR_6 = VAR_4->hmc_info;
 VAR_5->fpm_base_addr = VAR_6->hmc_obj[VAR_1].base;

 if (VAR_5->fpm_base_addr & 0xfff)
  VAR_7 = (VAR_2 - (VAR_5->fpm_base_addr & 0xfff)) >> 3;

 VAR_5->unallocated_pble =
     VAR_6->hmc_obj[VAR_1].cnt - VAR_7;
 VAR_5->next_fpm_addr = VAR_5->fpm_base_addr + (VAR_7 << 3);

 VAR_5->pinfo.pool_shift = VAR_3;
 VAR_5->pinfo.pool = FUNC_2(VAR_5->pinfo.pool_shift, -1);
 FUNC_0(&VAR_5->pinfo.clist);
 if (!VAR_5->pinfo.pool)
  goto error;

 if (FUNC_1(VAR_4, VAR_5))
  goto error;

 return 0;

 error:FUNC_3(VAR_4, VAR_5);
 return VAR_0;
}
