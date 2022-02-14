
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {scalar_t__ gpu_cx; scalar_t__ gpu_reg; struct drm_device* dev; } ;
struct drm_device {int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct msm_gpu *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 int VAR_2 = 0;

 if (VAR_0->gpu_reg) {
  VAR_2 = FUNC_1(VAR_0->gpu_reg);
  if (VAR_2) {
   FUNC_0(VAR_1->dev, "failed to enable 'gpu_reg': %d\n", VAR_2);
   return VAR_2;
  }
 }

 if (VAR_0->gpu_cx) {
  VAR_2 = FUNC_1(VAR_0->gpu_cx);
  if (VAR_2) {
   FUNC_0(VAR_1->dev, "failed to enable 'gpu_cx': %d\n", VAR_2);
   return VAR_2;
  }
 }

 return 0;
}
