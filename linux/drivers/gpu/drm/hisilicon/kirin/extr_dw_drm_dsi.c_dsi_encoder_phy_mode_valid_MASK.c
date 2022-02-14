
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mipi_phy_params {int dummy; } ;
struct dw_dsi {int lanes; int format; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int clock; int vdisplay; int hdisplay; } ;
typedef int phy ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_display_mode const*) ;
 int FUNC_2 (int,struct mipi_phy_params*) ;
 struct dw_dsi* FUNC_3 (struct drm_encoder*) ;
 int FUNC_4 (struct mipi_phy_params*,int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static enum drm_mode_status FUNC_6(
     struct drm_encoder *VAR_2,
     const struct drm_display_mode *VAR_3)
{
 struct dw_dsi *VAR_4 = FUNC_3(VAR_2);
 struct mipi_phy_params VAR_5;
 u32 VAR_6 = FUNC_5(VAR_4->format);
 u32 VAR_7, VAR_8, VAR_9;


 FUNC_4(&VAR_5, 0, sizeof(VAR_5));
 VAR_7 = VAR_3->clock * VAR_6 / VAR_4->lanes;
 VAR_8 = FUNC_2(VAR_7, &VAR_5);
 VAR_9 = VAR_8 / 8;

 FUNC_0("Checking mode %ix%i-%i@%i clock: %i...",
   VAR_3->hdisplay, VAR_3->vdisplay, VAR_6,
   FUNC_1(VAR_3), VAR_3->clock);





 if (VAR_3->clock/VAR_4->lanes == VAR_9/3) {
  FUNC_0("OK!\n");
  return VAR_1;
 }

 FUNC_0("BAD!\n");
 return VAR_0;
}
