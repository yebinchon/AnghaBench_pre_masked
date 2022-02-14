
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct rockchip_dp_device {int grfclk; TYPE_2__* dev; TYPE_1__* data; int grf; } ;
struct drm_encoder {int dummy; } ;
struct drm_crtc_state {scalar_t__ self_refresh_active; } ;
struct drm_crtc {int dummy; } ;
struct drm_atomic_state {int dummy; } ;
struct TYPE_5__ {int of_node; } ;
struct TYPE_4__ {int lcdsel_grf_reg; int lcdsel_big; int lcdsel_lit; } ;


 int FUNC_0 (TYPE_2__*,char*,char*) ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct drm_crtc_state* FUNC_4 (struct drm_atomic_state*,struct drm_crtc*) ;
 int FUNC_5 (int ,struct drm_encoder*) ;
 int FUNC_6 (int ,int ,int ) ;
 struct drm_crtc* FUNC_7 (struct drm_encoder*,struct drm_atomic_state*) ;
 struct rockchip_dp_device* FUNC_8 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_9(struct drm_encoder *VAR_0,
        struct drm_atomic_state *VAR_1)
{
 struct rockchip_dp_device *VAR_2 = FUNC_8(VAR_0);
 struct drm_crtc *VAR_3;
 struct drm_crtc_state *VAR_4;
 int VAR_5;
 u32 VAR_6;

 VAR_3 = FUNC_7(VAR_0, VAR_1);
 if (!VAR_3)
  return;

 VAR_4 = FUNC_4(VAR_1, VAR_3);

 if (VAR_4 && VAR_4->self_refresh_active)
  return;

 VAR_5 = FUNC_5(VAR_2->dev->of_node, VAR_0);
 if (VAR_5 < 0)
  return;

 if (VAR_5)
  VAR_6 = VAR_2->data->lcdsel_lit;
 else
  VAR_6 = VAR_2->data->lcdsel_big;

 FUNC_0(VAR_2->dev, "vop %s output to dp\n", (VAR_5) ? "LIT" : "BIG");

 VAR_5 = FUNC_3(VAR_2->grfclk);
 if (VAR_5 < 0) {
  FUNC_1(VAR_2->dev, "failed to enable grfclk %d\n", VAR_5);
  return;
 }

 VAR_5 = FUNC_6(VAR_2->grf, VAR_2->data->lcdsel_grf_reg, VAR_6);
 if (VAR_5 != 0)
  FUNC_1(VAR_2->dev, "Could not write to GRF: %d\n", VAR_5);

 FUNC_2(VAR_2->grfclk);
}
