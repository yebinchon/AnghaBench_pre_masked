
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_drm_private {scalar_t__* dsi; int num_encoders; struct drm_encoder** encoders; } ;
struct drm_encoder {int dummy; } ;
struct drm_device {int dummy; } ;
struct dpu_kms {int dummy; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (struct drm_encoder*) ;
 struct drm_encoder* FUNC_4 (struct drm_device*,int ) ;
 int FUNC_5 (scalar_t__,struct drm_device*,struct drm_encoder*) ;

__attribute__((used)) static int FUNC_6(struct drm_device *VAR_1,
        struct msm_drm_private *VAR_2,
        struct dpu_kms *VAR_3)
{
 struct drm_encoder *VAR_4 = ((void*)0);
 int VAR_5, VAR_6 = 0;

 if (!(VAR_2->dsi[0] || VAR_2->dsi[1]))
  return VAR_6;


 VAR_4 = FUNC_4(VAR_1, VAR_0);
 if (FUNC_2(VAR_4)) {
  FUNC_1("encoder init failed for dsi display\n");
  return FUNC_3(VAR_4);
 }

 VAR_2->encoders[VAR_2->num_encoders++] = VAR_4;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2->dsi); VAR_5++) {
  if (!VAR_2->dsi[VAR_5])
   continue;

  VAR_6 = FUNC_5(VAR_2->dsi[VAR_5], VAR_1, VAR_4);
  if (VAR_6) {
   FUNC_1("modeset_init failed for dsi[%d], rc = %d\n",
    VAR_5, VAR_6);
   break;
  }
 }

 return VAR_6;
}
