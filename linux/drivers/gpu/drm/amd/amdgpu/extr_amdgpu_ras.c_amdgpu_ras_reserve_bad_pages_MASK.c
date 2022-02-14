
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct ras_err_handler_data {int last_reserved; int count; TYPE_1__* bps; } ;
struct amdgpu_ras {int recovery_lock; struct ras_err_handler_data* eh_data; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_bo {int dummy; } ;
struct TYPE_2__ {int bp; struct amdgpu_bo* bo; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct amdgpu_ras* FUNC_1 (struct amdgpu_device*) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*,int,int ,struct amdgpu_bo**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct amdgpu_device *VAR_2)
{
 struct amdgpu_ras *VAR_3 = FUNC_1(VAR_2);
 struct ras_err_handler_data *VAR_4;
 uint64_t VAR_5;
 struct amdgpu_bo *VAR_6;
 int VAR_7;

 if (!VAR_3 || !VAR_3->eh_data)
  return 0;

 FUNC_3(&VAR_3->recovery_lock);
 VAR_4 = VAR_3->eh_data;
 if (!VAR_4)
  goto out;

 for (VAR_7 = VAR_4->last_reserved; VAR_7 < VAR_4->count; VAR_7++) {
  VAR_5 = VAR_4->bps[VAR_7].bp;

  if (FUNC_2(VAR_2, VAR_5 << VAR_0,
     VAR_1, &VAR_6))
   FUNC_0("RAS ERROR: reserve vram %llx fail\n", VAR_5);

  VAR_4->bps[VAR_7].bo = VAR_6;
  VAR_4->last_reserved = VAR_7 + 1;
 }
out:
 FUNC_4(&VAR_3->recovery_lock);
 return 0;
}
