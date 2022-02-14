
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msm_kms {int irq; } ;
struct msm_drm_private {int kms; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;
struct dpu_kms {struct msm_kms base; TYPE_1__* pdev; } ;
struct TYPE_4__ {int of_node; } ;
struct TYPE_3__ {TYPE_2__ dev; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 struct msm_kms* FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 struct dpu_kms* FUNC_3 (int ) ;

struct msm_kms *FUNC_4(struct drm_device *VAR_1)
{
 struct msm_drm_private *VAR_2;
 struct dpu_kms *VAR_3;
 int VAR_4;

 if (!VAR_1 || !VAR_1->dev_private) {
  FUNC_0("drm device node invalid\n");
  return FUNC_1(-VAR_0);
 }

 VAR_2 = VAR_1->dev_private;
 VAR_3 = FUNC_3(VAR_2->kms);

 VAR_4 = FUNC_2(VAR_3->pdev->dev.of_node, 0);
 if (VAR_4 < 0) {
  FUNC_0("failed to get irq: %d\n", VAR_4);
  return FUNC_1(VAR_4);
 }
 VAR_3->base.irq = VAR_4;

 return &VAR_3->base;
}
