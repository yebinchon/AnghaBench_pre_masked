
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ras_manager {int dummy; } ;
struct amdgpu_ras {int supported; int hw_supported; int flags; int head; scalar_t__ features; struct ras_manager* objs; } ;
struct TYPE_4__ {TYPE_1__* funcs; } ;
struct amdgpu_device {TYPE_2__ umc; } ;
struct TYPE_3__ {int (* ras_init ) (struct amdgpu_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct amdgpu_device*,int *,int *) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*) ;
 struct amdgpu_ras* FUNC_4 (struct amdgpu_device*) ;
 int VAR_7 ;
 int FUNC_5 (struct amdgpu_device*) ;
 scalar_t__ FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct amdgpu_device*,struct amdgpu_ras*) ;
 int FUNC_8 (struct amdgpu_ras*) ;
 struct amdgpu_ras* FUNC_9 (int,int) ;
 int FUNC_10 (struct amdgpu_device*) ;

int FUNC_11(struct amdgpu_device *VAR_8)
{
 struct amdgpu_ras *VAR_9 = FUNC_4(VAR_8);

 if (VAR_9)
  return 0;

 VAR_9 = FUNC_9(sizeof(struct amdgpu_ras) +
   sizeof(struct ras_manager) * VAR_0,
   VAR_4|VAR_6);
 if (!VAR_9)
  return -VAR_3;

 VAR_9->objs = (struct ras_manager *)(VAR_9 + 1);

 FUNC_7(VAR_8, VAR_9);

 FUNC_2(VAR_8, &VAR_9->hw_supported,
   &VAR_9->supported);
 if (!VAR_9->hw_supported) {
  FUNC_7(VAR_8, ((void*)0));
  FUNC_8(VAR_9);
  return 0;
 }

 VAR_9->features = 0;
 FUNC_1(&VAR_9->head);

 VAR_9->flags = VAR_5;

 if (FUNC_6(VAR_8))
  goto recovery_out;

 VAR_7 &= VAR_1;

 if (FUNC_3(VAR_8))
  goto fs_out;


 if (VAR_8->umc.funcs->ras_init)
  VAR_8->umc.funcs->ras_init(VAR_8);

 FUNC_0("RAS INFO: ras initialized successfully, "
   "hardware ability[%x] ras_mask[%x]\n",
   VAR_9->hw_supported, VAR_9->supported);
 return 0;
fs_out:
 FUNC_5(VAR_8);
recovery_out:
 FUNC_7(VAR_8, ((void*)0));
 FUNC_8(VAR_9);

 return -VAR_2;
}
