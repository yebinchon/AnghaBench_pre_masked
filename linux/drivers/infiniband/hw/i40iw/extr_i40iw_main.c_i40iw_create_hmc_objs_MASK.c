
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i40iw_sc_dev {TYPE_3__* hmc_info; int hmc_fn_id; int cqp; TYPE_2__* cqp_misc_ops; } ;
struct i40iw_hmc_create_obj_info {int is_pf; size_t rsrc_type; scalar_t__ add_sd_cnt; int count; int entry_type; TYPE_3__* hmc_info; } ;
struct i40iw_device {int sd_type; struct i40iw_sc_dev sc_dev; } ;
typedef int info ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_6__ {TYPE_1__* hmc_obj; } ;
struct TYPE_5__ {int (* static_hmc_pages_allocated ) (int ,int ,int ,int,int) ;} ;
struct TYPE_4__ {int cnt; } ;


 int VAR_0 ;
 int FUNC_0 (struct i40iw_sc_dev*,size_t,TYPE_3__*,int,int) ;
 int FUNC_1 (struct i40iw_sc_dev*,struct i40iw_hmc_create_obj_info*) ;
 int FUNC_2 (char*,size_t,int) ;
 size_t* VAR_1 ;
 int FUNC_3 (struct i40iw_hmc_create_obj_info*,int ,int) ;
 int FUNC_4 (int ,int ,int ,int,int) ;

__attribute__((used)) static enum i40iw_status_code FUNC_5(struct i40iw_device *VAR_2,
          bool VAR_3)
{
 struct i40iw_sc_dev *VAR_4 = &VAR_2->sc_dev;
 struct i40iw_hmc_create_obj_info VAR_5;
 enum i40iw_status_code VAR_6;
 int VAR_7;

 FUNC_3(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.hmc_info = VAR_4->hmc_info;
 VAR_5.is_pf = VAR_3;
 VAR_5.entry_type = VAR_2->sd_type;
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_5.rsrc_type = VAR_1[VAR_7];
  VAR_5.count = VAR_4->hmc_info->hmc_obj[VAR_5.rsrc_type].cnt;
  VAR_5.add_sd_cnt = 0;
  VAR_6 = FUNC_1(VAR_4, &VAR_5);
  if (VAR_6) {
   FUNC_2("create obj type %d status = %d\n",
         VAR_1[VAR_7], VAR_6);
   break;
  }
 }
 if (!VAR_6)
  return (VAR_4->cqp_misc_ops->static_hmc_pages_allocated(VAR_4->cqp, 0,
              VAR_4->hmc_fn_id,
              1, 1));

 while (VAR_7) {
  VAR_7--;

  FUNC_0(VAR_4,
          VAR_1[VAR_7],
          VAR_4->hmc_info,
          VAR_3,
          0);
 }
 return VAR_6;
}
