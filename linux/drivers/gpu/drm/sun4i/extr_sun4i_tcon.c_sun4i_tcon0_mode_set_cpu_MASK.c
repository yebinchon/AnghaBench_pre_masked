
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sun6i_dsi {struct mipi_dsi_device* device; } ;
struct sun4i_tcon {int regs; void* dclk_max_div; void* dclk_min_div; } ;
struct mipi_dsi_device {int lanes; int format; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int htotal; int crtc_vtotal; int crtc_vdisplay; int crtc_htotal; int crtc_clock; int vdisplay; scalar_t__ hdisplay; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_15 ;
 void* VAR_16 ;
 struct sun6i_dsi* FUNC_8 (struct drm_encoder const*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int*) ;
 int FUNC_11 (int ,int ,int ,int ) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (struct sun4i_tcon*,struct drm_display_mode const*) ;
 int FUNC_14 (struct sun4i_tcon*,int ) ;
 int FUNC_15 (struct drm_encoder const*) ;

__attribute__((used)) static void FUNC_16(struct sun4i_tcon *VAR_17,
         const struct drm_encoder *VAR_18,
         const struct drm_display_mode *VAR_19)
{

 struct sun6i_dsi *VAR_20 = FUNC_8(VAR_18);
 struct mipi_dsi_device *VAR_21 = VAR_20->device;
 u8 VAR_22 = FUNC_9(VAR_21->format);
 u8 VAR_23 = VAR_21->lanes;
 u32 VAR_24, VAR_25;
 u32 VAR_26;

 VAR_17->dclk_min_div = VAR_16;
 VAR_17->dclk_max_div = VAR_16;

 FUNC_13(VAR_17, VAR_19);


 FUNC_14(VAR_17, FUNC_15(VAR_18));

 FUNC_11(VAR_17->regs, VAR_10,
      VAR_9,
      VAR_8);

 FUNC_12(VAR_17->regs, VAR_14,
       VAR_13);

 FUNC_12(VAR_17->regs, VAR_1,
       VAR_0 |
       VAR_4 |
       VAR_3 |
       VAR_2);







 FUNC_10(VAR_17->regs, VAR_11, &VAR_26);
 VAR_26 &= FUNC_0(6, 0);
 VAR_24 = VAR_19->htotal * VAR_22 / (VAR_26 * VAR_23);
 VAR_24 -= VAR_19->hdisplay + 40;

 FUNC_12(VAR_17->regs, VAR_5,
       FUNC_2(VAR_24) |
       FUNC_1(VAR_19->hdisplay));

 FUNC_12(VAR_17->regs, VAR_6,
       FUNC_3(VAR_19->vdisplay));

 VAR_25 = (VAR_19->crtc_vtotal - VAR_19->crtc_vdisplay - 10 - 1);
 VAR_25 = VAR_25 * VAR_19->crtc_htotal * 149;
 VAR_25 = VAR_25 / (VAR_19->crtc_clock / 1000) / 8;
 FUNC_12(VAR_17->regs, VAR_7,
       FUNC_5(10) |
       FUNC_4(VAR_25));





 FUNC_12(VAR_17->regs, VAR_15,
       FUNC_7(3000) |
       FUNC_6(3));


 FUNC_12(VAR_17->regs, VAR_12,
       0xe0000000);
}
