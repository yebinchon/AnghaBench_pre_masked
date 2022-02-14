
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_hdmi {int xclk; int osc_clk; int cec_clk; } ;
struct drm_encoder {int crtc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct zx_hdmi* FUNC_1 (struct drm_encoder*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct zx_hdmi*) ;

__attribute__((used)) static void FUNC_4(struct drm_encoder *VAR_1)
{
 struct zx_hdmi *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2->cec_clk);
 FUNC_0(VAR_2->osc_clk);
 FUNC_0(VAR_2->xclk);

 FUNC_3(VAR_2);

 FUNC_2(VAR_0, VAR_1->crtc);
}
