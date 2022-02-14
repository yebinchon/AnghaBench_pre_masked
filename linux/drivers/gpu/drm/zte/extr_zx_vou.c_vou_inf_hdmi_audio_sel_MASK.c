
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_vou_hw {scalar_t__ vouctl; } ;
struct zx_crtc {struct zx_vou_hw* vou; } ;
struct drm_crtc {int dummy; } ;
typedef enum vou_inf_hdmi_audio { ____Placeholder_vou_inf_hdmi_audio } vou_inf_hdmi_audio ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct zx_crtc* FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (scalar_t__,int ,int) ;

void FUNC_2(struct drm_crtc *VAR_2,
       enum vou_inf_hdmi_audio VAR_3)
{
 struct zx_crtc *VAR_4 = FUNC_0(VAR_2);
 struct zx_vou_hw *VAR_5 = VAR_4->vou;

 FUNC_1(VAR_5->vouctl + VAR_1, VAR_0, VAR_3);
}
