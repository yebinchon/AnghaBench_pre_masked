
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun4i_hdmi {int tmds_clk; scalar_t__ base; } ;
struct drm_encoder {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 struct sun4i_hdmi* FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct drm_encoder *VAR_2)
{
 struct sun4i_hdmi *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4;

 FUNC_0("Disabling the HDMI Output\n");

 VAR_4 = FUNC_3(VAR_3->base + VAR_1);
 VAR_4 &= ~VAR_0;
 FUNC_4(VAR_4, VAR_3->base + VAR_1);

 FUNC_1(VAR_3->tmds_clk);
}
