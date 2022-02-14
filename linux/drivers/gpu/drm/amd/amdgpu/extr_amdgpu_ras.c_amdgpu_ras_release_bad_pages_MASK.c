
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ras_err_handler_data {int last_reserved; TYPE_1__* bps; } ;
struct amdgpu_ras {int recovery_lock; struct ras_err_handler_data* eh_data; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_bo {int dummy; } ;
struct TYPE_2__ {struct amdgpu_bo* bo; } ;


 struct amdgpu_ras* FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*,struct amdgpu_bo**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_0)
{
 struct amdgpu_ras *VAR_1 = FUNC_0(VAR_0);
 struct ras_err_handler_data *VAR_2;
 struct amdgpu_bo *VAR_3;
 int VAR_4;

 if (!VAR_1 || !VAR_1->eh_data)
  return 0;

 FUNC_2(&VAR_1->recovery_lock);
 VAR_2 = VAR_1->eh_data;
 if (!VAR_2)
  goto out;

 for (VAR_4 = VAR_2->last_reserved - 1; VAR_4 >= 0; VAR_4--) {
  VAR_3 = VAR_2->bps[VAR_4].bo;

  FUNC_1(VAR_0, &VAR_3);

  VAR_2->bps[VAR_4].bo = VAR_3;
  VAR_2->last_reserved = VAR_4;
 }
out:
 FUNC_3(&VAR_1->recovery_lock);
 return 0;
}
