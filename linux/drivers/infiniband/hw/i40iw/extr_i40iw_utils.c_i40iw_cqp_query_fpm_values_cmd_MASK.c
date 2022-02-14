
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct i40iw_sc_dev {int cqp; scalar_t__ back_dev; } ;
struct i40iw_dma_mem {int va; int pa; } ;
struct i40iw_device {int cqp; } ;
struct TYPE_4__ {uintptr_t scratch; int hmc_fn_id; int fpm_values_va; int fpm_values_pa; int cqp; } ;
struct TYPE_5__ {TYPE_1__ query_fpm_values; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
struct cqp_commands_info {int post_sq; TYPE_3__ in; int cqp_cmd; } ;
struct i40iw_cqp_request {int * param; struct cqp_commands_info info; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 struct i40iw_cqp_request* FUNC_0 (int *,int) ;
 int FUNC_1 (struct i40iw_device*,struct i40iw_cqp_request*) ;
 int FUNC_2 (char*) ;

enum i40iw_status_code FUNC_3(struct i40iw_sc_dev *VAR_2,
            struct i40iw_dma_mem *VAR_3,
            u8 VAR_4)
{
 enum i40iw_status_code VAR_5;
 struct i40iw_cqp_request *VAR_6;
 struct cqp_commands_info *VAR_7;
 struct i40iw_device *VAR_8 = (struct i40iw_device *)VAR_2->back_dev;

 VAR_6 = FUNC_0(&VAR_8->cqp, 1);
 if (!VAR_6)
  return VAR_0;
 VAR_7 = &VAR_6->info;
 VAR_6->param = ((void*)0);
 VAR_7->in.u.query_fpm_values.cqp = VAR_2->cqp;
 VAR_7->in.u.query_fpm_values.fpm_values_pa = VAR_3->pa;
 VAR_7->in.u.query_fpm_values.fpm_values_va = VAR_3->va;
 VAR_7->in.u.query_fpm_values.hmc_fn_id = VAR_4;
 VAR_7->cqp_cmd = VAR_1;
 VAR_7->post_sq = 1;
 VAR_7->in.u.query_fpm_values.scratch = (uintptr_t)VAR_6;
 VAR_5 = FUNC_1(VAR_8, VAR_6);
 if (VAR_5)
  FUNC_2("CQP-OP Query FPM fail");
 return VAR_5;
}
