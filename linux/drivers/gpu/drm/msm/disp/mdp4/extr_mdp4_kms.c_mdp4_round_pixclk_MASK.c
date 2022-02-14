
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_kms {int dummy; } ;
struct drm_encoder {int encoder_type; } ;





 long FUNC_0 (struct drm_encoder*,unsigned long) ;

__attribute__((used)) static long FUNC_1(struct msm_kms *VAR_0, unsigned long VAR_1,
  struct drm_encoder *VAR_2)
{

 switch (VAR_2->encoder_type) {
 case 128:
  return FUNC_0(VAR_2, VAR_1);
 case 129:
 case 130:
 default:
  return VAR_1;
 }
}
