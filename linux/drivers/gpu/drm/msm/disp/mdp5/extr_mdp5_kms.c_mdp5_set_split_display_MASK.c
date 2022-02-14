
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_kms {int dummy; } ;
struct drm_encoder {int dummy; } ;


 int FUNC_0 (struct drm_encoder*,struct drm_encoder*) ;
 int FUNC_1 (struct drm_encoder*,struct drm_encoder*) ;

__attribute__((used)) static int FUNC_2(struct msm_kms *VAR_0,
  struct drm_encoder *VAR_1,
  struct drm_encoder *VAR_2,
  bool VAR_3)
{
 if (VAR_3)
  return FUNC_0(VAR_1,
       VAR_2);
 else
  return FUNC_1(VAR_1,
         VAR_2);
}
