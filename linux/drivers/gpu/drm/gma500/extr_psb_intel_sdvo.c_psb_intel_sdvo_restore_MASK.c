
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psb_intel_sdvo {int saveSDVO; int sdvo_reg; } ;
struct drm_encoder {struct drm_crtc* crtc; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {int y; int x; int mode; } ;
struct drm_connector {scalar_t__ status; struct drm_device* dev; } ;
struct TYPE_2__ {struct drm_encoder base; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct drm_crtc*,int *,int ,int ,int *) ;
 TYPE_1__* FUNC_2 (struct drm_connector*) ;
 struct psb_intel_sdvo* FUNC_3 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_4(struct drm_connector *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;
 struct drm_encoder *VAR_3 = &FUNC_2(VAR_1)->base;
 struct psb_intel_sdvo *VAR_4 = FUNC_3(VAR_3);
 struct drm_crtc *VAR_5 = VAR_3->crtc;

 FUNC_0(VAR_4->sdvo_reg, VAR_4->saveSDVO);



 if (VAR_1->status == VAR_0)
  FUNC_1(VAR_5, &VAR_5->mode, VAR_5->x, VAR_5->y,
      ((void*)0));
}
