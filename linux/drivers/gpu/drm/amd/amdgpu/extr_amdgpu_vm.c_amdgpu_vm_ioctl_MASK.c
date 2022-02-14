
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int op; } ;
union drm_amdgpu_vm {TYPE_1__ in; } ;
struct drm_file {struct amdgpu_fpriv* driver_priv; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct amdgpu_fpriv {int vm; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,int *,int ) ;
 int FUNC_1 (struct amdgpu_device*,int *,int ) ;

int FUNC_2(struct drm_device *VAR_2, void *VAR_3, struct drm_file *VAR_4)
{
 union drm_amdgpu_vm *VAR_5 = VAR_3;
 struct amdgpu_device *VAR_6 = VAR_2->dev_private;
 struct amdgpu_fpriv *VAR_7 = VAR_4->driver_priv;
 int VAR_8;

 switch (VAR_5->in.op) {
 case 129:

  VAR_8 = FUNC_0(VAR_6, &VAR_7->vm, VAR_0);
  if (VAR_8)
   return VAR_8;
  break;
 case 128:
  FUNC_1(VAR_6, &VAR_7->vm, VAR_0);
  break;
 default:
  return -VAR_1;
 }

 return 0;
}
