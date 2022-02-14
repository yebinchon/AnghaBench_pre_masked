
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_ldb_channel {int mode; scalar_t__ mode_valid; scalar_t__ edid; scalar_t__ ddc; int panel; } ;
struct drm_display_mode {int type; } ;
struct drm_connector {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct imx_ldb_channel* FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (struct drm_connector*,scalar_t__) ;
 int FUNC_2 (struct drm_connector*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct drm_connector*,scalar_t__) ;
 int FUNC_4 (struct drm_display_mode*,int *) ;
 struct drm_display_mode* FUNC_5 (int ) ;
 int FUNC_6 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct drm_connector *VAR_3)
{
 struct imx_ldb_channel *VAR_4 = FUNC_0(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_7(VAR_4->panel);
 if (VAR_5 > 0)
  return VAR_5;

 if (!VAR_4->edid && VAR_4->ddc)
  VAR_4->edid = FUNC_3(VAR_3, VAR_4->ddc);

 if (VAR_4->edid) {
  FUNC_2(VAR_3,
       VAR_4->edid);
  VAR_5 = FUNC_1(VAR_3, VAR_4->edid);
 }

 if (VAR_4->mode_valid) {
  struct drm_display_mode *VAR_6;

  VAR_6 = FUNC_5(VAR_3->dev);
  if (!VAR_6)
   return -VAR_2;
  FUNC_4(VAR_6, &VAR_4->mode);
  VAR_6->type |= VAR_0 | VAR_1;
  FUNC_6(VAR_3, VAR_6);
  VAR_5++;
 }

 return VAR_5;
}
