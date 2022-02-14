
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct msm_kms {int dummy; } ;
struct msm_drm_private {unsigned int num_crtcs; int * crtcs; } ;
struct mdp_kms {int dummy; } ;
struct mdp5_kms {struct drm_device* dev; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct drm_device*,unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mdp5_kms*,int ) ;
 int FUNC_4 (struct mdp5_kms*,int ,int) ;
 int FUNC_5 (struct mdp_kms*,int) ;
 struct mdp5_kms* FUNC_6 (struct mdp_kms*) ;
 struct mdp_kms* FUNC_7 (struct msm_kms*) ;

irqreturn_t FUNC_8(struct msm_kms *VAR_4)
{
 struct mdp_kms *VAR_5 = FUNC_7(VAR_4);
 struct mdp5_kms *VAR_6 = FUNC_6(VAR_5);
 struct drm_device *VAR_7 = VAR_6->dev;
 struct msm_drm_private *VAR_8 = VAR_7->dev_private;
 unsigned int VAR_9;
 uint32_t VAR_10, VAR_11;

 VAR_11 = FUNC_3(VAR_6, VAR_2);
 VAR_10 = FUNC_3(VAR_6, VAR_3) & VAR_11;
 FUNC_4(VAR_6, VAR_1, VAR_10);

 FUNC_0("status=%08x", VAR_10);

 FUNC_5(VAR_5, VAR_10);

 for (VAR_9 = 0; VAR_9 < VAR_8->num_crtcs; VAR_9++)
  if (VAR_10 & FUNC_2(VAR_8->crtcs[VAR_9]))
   FUNC_1(VAR_7, VAR_9);

 return VAR_0;
}
