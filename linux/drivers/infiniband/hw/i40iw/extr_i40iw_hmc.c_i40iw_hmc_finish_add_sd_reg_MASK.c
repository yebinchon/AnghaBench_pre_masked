
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i40iw_sc_dev {int dummy; } ;
struct i40iw_hmc_create_obj_info {scalar_t__ start_idx; size_t rsrc_type; scalar_t__ count; int add_sd_cnt; TYPE_2__* hmc_info; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_4__ {int * sd_indexes; TYPE_1__* hmc_obj; } ;
struct TYPE_3__ {scalar_t__ cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i40iw_sc_dev*,TYPE_2__*,int ,int ,int) ;

__attribute__((used)) static enum i40iw_status_code FUNC_1(struct i40iw_sc_dev *VAR_2,
         struct i40iw_hmc_create_obj_info *VAR_3)
{
 if (VAR_3->start_idx >= VAR_3->hmc_info->hmc_obj[VAR_3->rsrc_type].cnt)
  return VAR_1;

 if ((VAR_3->start_idx + VAR_3->count) >
   VAR_3->hmc_info->hmc_obj[VAR_3->rsrc_type].cnt)
  return VAR_0;

 if (!VAR_3->add_sd_cnt)
  return 0;

 return FUNC_0(VAR_2, VAR_3->hmc_info,
    VAR_3->hmc_info->sd_indexes[0],
    VAR_3->add_sd_cnt, 1);
}
