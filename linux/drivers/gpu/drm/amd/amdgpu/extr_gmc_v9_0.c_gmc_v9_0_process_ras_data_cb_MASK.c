
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ras_err_data {scalar_t__ ue_count; } ;
struct amdgpu_iv_entry {int dummy; } ;
struct TYPE_5__ {TYPE_3__* funcs; } ;
struct TYPE_4__ {int dev; } ;
struct amdgpu_device {TYPE_2__ umc; TYPE_1__ kfd; } ;
struct TYPE_6__ {int (* query_ras_error_address ) (struct amdgpu_device*,struct ras_err_data*) ;int (* query_ras_error_count ) (struct amdgpu_device*,struct ras_err_data*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct amdgpu_device*,struct ras_err_data*) ;
 int FUNC_3 (struct amdgpu_device*,struct ras_err_data*) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_1,
  struct ras_err_data *VAR_2,
  struct amdgpu_iv_entry *VAR_3)
{
 FUNC_1(VAR_1->kfd.dev);
 if (VAR_1->umc.funcs->query_ras_error_count)
  VAR_1->umc.funcs->query_ras_error_count(VAR_1, VAR_2);



 if (VAR_1->umc.funcs->query_ras_error_address)
  VAR_1->umc.funcs->query_ras_error_address(VAR_1, VAR_2);


 if (VAR_2->ue_count)
  FUNC_0(VAR_1, 0);

 return VAR_0;
}
