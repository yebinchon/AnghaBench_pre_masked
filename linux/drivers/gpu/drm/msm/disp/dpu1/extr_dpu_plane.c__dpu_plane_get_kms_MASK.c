
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_drm_private {int kms; } ;
struct drm_plane {TYPE_1__* dev; } ;
struct dpu_kms {int dummy; } ;
struct TYPE_2__ {struct msm_drm_private* dev_private; } ;


 struct dpu_kms* FUNC_0 (int ) ;

__attribute__((used)) static struct dpu_kms *FUNC_1(struct drm_plane *VAR_0)
{
 struct msm_drm_private *VAR_1 = VAR_0->dev->dev_private;

 return FUNC_0(VAR_1->kms);
}
