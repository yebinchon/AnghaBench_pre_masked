
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
struct drm_mode_config {int gamma_lut_size_property; int gamma_lut_property; int ctm_property; int degamma_lut_size_property; int degamma_lut_property; } ;
struct drm_device {struct drm_mode_config mode_config; } ;
struct drm_crtc {int base; struct drm_device* dev; } ;


 int FUNC_0 (int *,int ,scalar_t__) ;

void FUNC_1(struct drm_crtc *VAR_0,
    uint VAR_1,
    bool VAR_2,
    uint VAR_3)
{
 struct drm_device *VAR_4 = VAR_0->dev;
 struct drm_mode_config *VAR_5 = &VAR_4->mode_config;

 if (VAR_1) {
  FUNC_0(&VAR_0->base,
        VAR_5->degamma_lut_property, 0);
  FUNC_0(&VAR_0->base,
        VAR_5->degamma_lut_size_property,
        VAR_1);
 }

 if (VAR_2)
  FUNC_0(&VAR_0->base,
        VAR_5->ctm_property, 0);

 if (VAR_3) {
  FUNC_0(&VAR_0->base,
        VAR_5->gamma_lut_property, 0);
  FUNC_0(&VAR_0->base,
        VAR_5->gamma_lut_size_property,
        VAR_3);
 }
}
