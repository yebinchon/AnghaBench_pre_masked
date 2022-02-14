
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct edid {int width_cm; int height_cm; int revision; int input; int features; } ;
struct drm_display_info {int width_mm; int height_mm; int non_desktop; int bpc; int color_formats; } ;
struct drm_connector {int name; struct drm_display_info display_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int) ;






 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct drm_connector*,struct edid const*) ;
 int FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (struct edid const*) ;

u32 FUNC_5(struct drm_connector *VAR_9, const struct edid *VAR_10)
{
 struct drm_display_info *VAR_11 = &VAR_9->display_info;

 u32 VAR_12 = FUNC_4(VAR_10);

 FUNC_3(VAR_9);

 VAR_11->width_mm = VAR_10->width_cm * 10;
 VAR_11->height_mm = VAR_10->height_cm * 10;

 VAR_11->non_desktop = !!(VAR_12 & VAR_8);

 FUNC_1("non_desktop set to %d\n", VAR_11->non_desktop);

 if (VAR_10->revision < 3)
  return VAR_12;

 if (!(VAR_10->input & VAR_7))
  return VAR_12;

 FUNC_2(VAR_9, VAR_10);
 if (VAR_11->bpc == 0 && VAR_10->revision == 3 &&
     VAR_10->input & VAR_4) {
  VAR_11->bpc = 8;
  FUNC_0("%s: Assigning DFP sink color depth as %d bpc.\n",
     VAR_9->name, VAR_11->bpc);
 }


 if (VAR_10->revision < 4)
  return VAR_12;

 switch (VAR_10->input & VAR_3) {
 case 130:
  VAR_11->bpc = 6;
  break;
 case 129:
  VAR_11->bpc = 8;
  break;
 case 134:
  VAR_11->bpc = 10;
  break;
 case 133:
  VAR_11->bpc = 12;
  break;
 case 132:
  VAR_11->bpc = 14;
  break;
 case 131:
  VAR_11->bpc = 16;
  break;
 case 128:
 default:
  VAR_11->bpc = 0;
  break;
 }

 FUNC_0("%s: Assigning EDID-1.4 digital sink color depth as %d bpc.\n",
     VAR_9->name, VAR_11->bpc);

 VAR_11->color_formats |= VAR_0;
 if (VAR_10->features & VAR_6)
  VAR_11->color_formats |= VAR_2;
 if (VAR_10->features & VAR_5)
  VAR_11->color_formats |= VAR_1;
 return VAR_12;
}
