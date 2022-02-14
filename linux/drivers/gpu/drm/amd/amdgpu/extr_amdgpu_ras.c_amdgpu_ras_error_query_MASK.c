
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {int block; } ;
struct ras_query_if {TYPE_7__ head; int ce_count; int ue_count; } ;
struct TYPE_13__ {int ue_count; int ce_count; } ;
struct ras_manager {TYPE_6__ err_data; } ;
struct ras_err_data {scalar_t__ ue_count; scalar_t__ ce_count; int * member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_11__ {TYPE_3__* funcs; } ;
struct TYPE_9__ {TYPE_1__* funcs; } ;
struct amdgpu_device {int dev; TYPE_5__* mmhub_funcs; TYPE_4__ gfx; TYPE_2__ umc; } ;
struct TYPE_12__ {int (* query_ras_error_count ) (struct amdgpu_device*,struct ras_err_data*) ;} ;
struct TYPE_10__ {int (* query_ras_error_count ) (struct amdgpu_device*,struct ras_err_data*) ;} ;
struct TYPE_8__ {int (* query_ras_error_address ) (struct amdgpu_device*,struct ras_err_data*) ;int (* query_ras_error_count ) (struct amdgpu_device*,struct ras_err_data*) ;} ;





 int VAR_0 ;
 struct ras_manager* FUNC_0 (struct amdgpu_device*,TYPE_7__*) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct amdgpu_device*,struct ras_err_data*) ;
 int FUNC_4 (struct amdgpu_device*,struct ras_err_data*) ;
 int FUNC_5 (struct amdgpu_device*,struct ras_err_data*) ;
 int FUNC_6 (struct amdgpu_device*,struct ras_err_data*) ;

int FUNC_7(struct amdgpu_device *VAR_1,
  struct ras_query_if *VAR_2)
{
 struct ras_manager *VAR_3 = FUNC_0(VAR_1, &VAR_2->head);
 struct ras_err_data VAR_4 = {0, 0, 0, ((void*)0)};

 if (!VAR_3)
  return -VAR_0;

 switch (VAR_2->head.block) {
 case 128:
  if (VAR_1->umc.funcs->query_ras_error_count)
   VAR_1->umc.funcs->query_ras_error_count(VAR_1, &VAR_4);



  if (VAR_1->umc.funcs->query_ras_error_address)
   VAR_1->umc.funcs->query_ras_error_address(VAR_1, &VAR_4);
  break;
 case 130:
  if (VAR_1->gfx.funcs->query_ras_error_count)
   VAR_1->gfx.funcs->query_ras_error_count(VAR_1, &VAR_4);
  break;
 case 129:
  if (VAR_1->mmhub_funcs->query_ras_error_count)
   VAR_1->mmhub_funcs->query_ras_error_count(VAR_1, &VAR_4);
  break;
 default:
  break;
 }

 VAR_3->err_data.ue_count += VAR_4.ue_count;
 VAR_3->err_data.ce_count += VAR_4.ce_count;

 VAR_2->ue_count = VAR_3->err_data.ue_count;
 VAR_2->ce_count = VAR_3->err_data.ce_count;

 if (VAR_4.ce_count)
  FUNC_1(VAR_1->dev, "%ld correctable errors detected in %s block\n",
    VAR_3->err_data.ce_count, FUNC_2(VAR_2->head.block));
 if (VAR_4.ue_count)
  FUNC_1(VAR_1->dev, "%ld uncorrectable errors detected in %s block\n",
    VAR_3->err_data.ue_count, FUNC_2(VAR_2->head.block));

 return 0;
}
