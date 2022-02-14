
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fsl_dcu_drm_device {int dev; TYPE_2__* soc; } ;
struct drm_plane {TYPE_1__* dev; } ;
struct TYPE_4__ {unsigned int total_layer; } ;
struct TYPE_3__ {struct fsl_dcu_drm_device* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 unsigned int FUNC_1 (struct drm_plane*) ;

__attribute__((used)) static int FUNC_2(struct drm_plane *VAR_1)
{
 struct fsl_dcu_drm_device *VAR_2 = VAR_1->dev->dev_private;
 unsigned int VAR_3 = VAR_2->soc->total_layer;
 unsigned int VAR_4;

 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4 < VAR_3)
  return VAR_3 - VAR_4 - 1;

 FUNC_0(VAR_2->dev, "No more layer left\n");
 return -VAR_0;
}
