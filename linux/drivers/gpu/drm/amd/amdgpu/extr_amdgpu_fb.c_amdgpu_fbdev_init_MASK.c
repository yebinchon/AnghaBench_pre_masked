
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct amdgpu_fbdev {int helper; struct amdgpu_device* adev; } ;
struct TYPE_9__ {struct amdgpu_fbdev* rfbdev; int mode_config_initialized; } ;
struct TYPE_8__ {int real_vram_size; } ;
struct amdgpu_device {TYPE_4__* ddev; TYPE_3__ mode_info; TYPE_2__ gmc; } ;
struct TYPE_7__ {int connector_list; } ;
struct TYPE_10__ {TYPE_1__ mode_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*,int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_4__*,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (struct amdgpu_fbdev*) ;
 struct amdgpu_fbdev* FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (int *) ;

int FUNC_9(struct amdgpu_device *VAR_4)
{
 struct amdgpu_fbdev *VAR_5;
 int VAR_6 = 32;
 int VAR_7;


 if (!VAR_4->mode_info.mode_config_initialized)
  return 0;


 if (FUNC_8(&VAR_4->ddev->mode_config.connector_list))
  return 0;


 if (VAR_4->gmc.real_vram_size <= (32*1024*1024))
  VAR_6 = 8;

 VAR_5 = FUNC_7(sizeof(struct amdgpu_fbdev), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_5->adev = VAR_4;
 VAR_4->mode_info.rfbdev = VAR_5;

 FUNC_3(VAR_4->ddev, &VAR_5->helper,
   &VAR_3);

 VAR_7 = FUNC_1(VAR_4->ddev, &VAR_5->helper,
     VAR_0);
 if (VAR_7) {
  FUNC_6(VAR_5);
  return VAR_7;
 }

 FUNC_4(&VAR_5->helper);


 if (!FUNC_0(VAR_4))
  FUNC_5(VAR_4->ddev);

 FUNC_2(&VAR_5->helper, VAR_6);
 return 0;
}
