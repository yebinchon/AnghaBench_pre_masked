
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i40iw_sc_dev {TYPE_1__* hmc_ops; } ;
struct i40iw_hmc_info {TYPE_2__* hmc_obj; } ;
struct i40iw_hmc_del_obj_info {int rsrc_type; int is_pf; int count; struct i40iw_hmc_info* hmc_info; } ;
typedef int info ;
typedef enum i40iw_hmc_rsrc_type { ____Placeholder_i40iw_hmc_rsrc_type } i40iw_hmc_rsrc_type ;
struct TYPE_4__ {int cnt; } ;
struct TYPE_3__ {scalar_t__ (* del_hmc_object ) (struct i40iw_sc_dev*,struct i40iw_hmc_del_obj_info*,int) ;} ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct i40iw_hmc_del_obj_info*,int ,int) ;
 scalar_t__ FUNC_2 (struct i40iw_sc_dev*,struct i40iw_hmc_del_obj_info*,int) ;

__attribute__((used)) static void FUNC_3(struct i40iw_sc_dev *VAR_0,
      enum i40iw_hmc_rsrc_type VAR_1,
      struct i40iw_hmc_info *VAR_2,
      bool VAR_3,
      bool VAR_4)
{
 struct i40iw_hmc_del_obj_info VAR_5;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.hmc_info = VAR_2;
 VAR_5.rsrc_type = VAR_1;
 VAR_5.count = VAR_2->hmc_obj[VAR_1].cnt;
 VAR_5.is_pf = VAR_3;
 if (VAR_0->hmc_ops->del_hmc_object(VAR_0, &VAR_5, VAR_4))
  FUNC_0("del obj of type %d failed\n", VAR_1);
}
