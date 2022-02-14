
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msm_drm_private {int kms; } ;
struct drm_encoder {TYPE_2__* dev; } ;
struct dpu_kms {TYPE_1__* pdev; } ;
struct dpu_encoder_virt {int cur_master; } ;
struct TYPE_4__ {struct msm_drm_private* dev_private; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_encoder*) ;
 int FUNC_2 (struct drm_encoder*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct dpu_encoder_virt* FUNC_5 (struct drm_encoder*) ;
 struct dpu_kms* FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static void FUNC_8(struct drm_encoder *VAR_0,
  bool VAR_1)
{
 struct msm_drm_private *VAR_2;
 struct dpu_kms *VAR_3;
 struct dpu_encoder_virt *VAR_4;

 VAR_4 = FUNC_5(VAR_0);
 VAR_2 = VAR_0->dev->dev_private;
 VAR_3 = FUNC_6(VAR_2->kms);

 FUNC_7(FUNC_1(VAR_0), VAR_1);

 if (!VAR_4->cur_master) {
  FUNC_0("encoder master not set\n");
  return;
 }

 if (VAR_1) {

  FUNC_3(&VAR_3->pdev->dev);


  FUNC_2(VAR_0, 1);

 } else {

  FUNC_2(VAR_0, 0);


  FUNC_4(&VAR_3->pdev->dev);
 }

}
