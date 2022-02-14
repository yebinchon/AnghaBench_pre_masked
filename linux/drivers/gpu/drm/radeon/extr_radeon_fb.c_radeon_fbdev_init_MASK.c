
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct radeon_fbdev {int helper; struct radeon_device* rdev; } ;
struct TYPE_9__ {struct radeon_fbdev* rfbdev; } ;
struct TYPE_8__ {int real_vram_size; } ;
struct radeon_device {TYPE_4__* ddev; TYPE_3__ mode_info; TYPE_2__ mc; } ;
struct TYPE_7__ {int connector_list; } ;
struct TYPE_10__ {TYPE_1__ mode_config; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*,int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_4__*,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (struct radeon_fbdev*) ;
 struct radeon_fbdev* FUNC_8 (int,int ) ;
 scalar_t__ FUNC_9 (int *) ;
 int VAR_3 ;

int FUNC_10(struct radeon_device *VAR_4)
{
 struct radeon_fbdev *VAR_5;
 int VAR_6 = 32;
 int VAR_7;


 if (FUNC_9(&VAR_4->ddev->mode_config.connector_list))
  return 0;


 if (VAR_4->mc.real_vram_size <= (8*1024*1024))
  VAR_6 = 8;
 else if (FUNC_0(VAR_4) ||
   VAR_4->mc.real_vram_size <= (32*1024*1024))
  VAR_6 = 16;

 VAR_5 = FUNC_8(sizeof(struct radeon_fbdev), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->rdev = VAR_4;
 VAR_4->mode_info.rfbdev = VAR_5;

 FUNC_4(VAR_4->ddev, &VAR_5->helper,
         &VAR_3);

 VAR_7 = FUNC_2(VAR_4->ddev, &VAR_5->helper,
     VAR_2);
 if (VAR_7)
  goto free;

 VAR_7 = FUNC_5(&VAR_5->helper);
 if (VAR_7)
  goto fini;


 FUNC_6(VAR_4->ddev);

 VAR_7 = FUNC_3(&VAR_5->helper, VAR_6);
 if (VAR_7)
  goto fini;

 return 0;

fini:
 FUNC_1(&VAR_5->helper);
free:
 FUNC_7(VAR_5);
 return VAR_7;
}
