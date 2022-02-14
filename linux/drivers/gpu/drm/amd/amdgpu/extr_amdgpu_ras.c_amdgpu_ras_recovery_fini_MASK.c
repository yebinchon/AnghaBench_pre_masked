
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ras_err_handler_data {struct ras_err_handler_data* bps; } ;
struct amdgpu_ras {int recovery_lock; struct ras_err_handler_data* eh_data; int recovery_work; } ;
struct amdgpu_device {int dummy; } ;


 struct amdgpu_ras* FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ras_err_handler_data*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_device *VAR_0)
{
 struct amdgpu_ras *VAR_1 = FUNC_0(VAR_0);
 struct ras_err_handler_data *VAR_2 = VAR_1->eh_data;

 FUNC_3(&VAR_1->recovery_work);
 FUNC_2(VAR_0);
 FUNC_1(VAR_0);

 FUNC_5(&VAR_1->recovery_lock);
 VAR_1->eh_data = ((void*)0);
 FUNC_4(VAR_2->bps);
 FUNC_4(VAR_2);
 FUNC_6(&VAR_1->recovery_lock);

 return 0;
}
