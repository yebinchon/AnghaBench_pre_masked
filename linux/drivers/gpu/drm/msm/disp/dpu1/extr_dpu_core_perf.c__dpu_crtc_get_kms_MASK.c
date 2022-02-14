
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_drm_private {int kms; } ;
struct drm_crtc {TYPE_1__* dev; } ;
struct dpu_kms {int dummy; } ;
struct TYPE_2__ {struct msm_drm_private* dev_private; } ;


 int FUNC_0 (char*) ;
 struct dpu_kms* FUNC_1 (int ) ;

__attribute__((used)) static struct dpu_kms *FUNC_2(struct drm_crtc *VAR_0)
{
 struct msm_drm_private *VAR_1;

 if (!VAR_0->dev || !VAR_0->dev->dev_private) {
  FUNC_0("invalid device\n");
  return ((void*)0);
 }

 VAR_1 = VAR_0->dev->dev_private;
 if (!VAR_1 || !VAR_1->kms) {
  FUNC_0("invalid kms\n");
  return ((void*)0);
 }

 return FUNC_1(VAR_1->kms);
}
