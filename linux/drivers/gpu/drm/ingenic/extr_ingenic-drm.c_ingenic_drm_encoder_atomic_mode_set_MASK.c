
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ingenic_drm {int panel_is_sharp; int map; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int flags; } ;
struct drm_display_info {int bus_flags; int* bus_formats; } ;
struct drm_crtc_state {struct drm_display_mode adjusted_mode; } ;
struct drm_connector_state {struct drm_connector* connector; } ;
struct drm_connector {scalar_t__ connector_type; struct drm_display_info display_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 int VAR_23 ;




 struct ingenic_drm* FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct drm_encoder *VAR_24,
      struct drm_crtc_state *VAR_25,
      struct drm_connector_state *VAR_26)
{
 struct ingenic_drm *VAR_27 = FUNC_0(VAR_24);
 struct drm_display_mode *VAR_28 = &VAR_25->adjusted_mode;
 struct drm_connector *VAR_29 = VAR_26->connector;
 struct drm_display_info *VAR_30 = &VAR_29->display_info;
 unsigned int VAR_31;

 VAR_27->panel_is_sharp = VAR_30->bus_flags & VAR_2;

 if (VAR_27->panel_is_sharp) {
  VAR_31 = VAR_14 | VAR_20;
 } else {
  VAR_31 = VAR_18 | VAR_7
      | VAR_21 | VAR_19;
 }

 if (VAR_28->flags & VAR_5)
  VAR_31 |= VAR_9;
 if (VAR_28->flags & VAR_6)
  VAR_31 |= VAR_22;
 if (VAR_30->bus_flags & VAR_0)
  VAR_31 |= VAR_8;
 if (VAR_30->bus_flags & VAR_1)
  VAR_31 |= VAR_17;

 if (!VAR_27->panel_is_sharp) {
  if (VAR_29->connector_type == VAR_3) {
   if (VAR_28->flags & VAR_4)
    VAR_31 |= VAR_15;
   else
    VAR_31 |= VAR_16;
  } else {
   switch (*VAR_30->bus_formats) {
   case 131:
    VAR_31 |= VAR_11;
    break;
   case 130:
    VAR_31 |= VAR_12;
    break;
   case 129:
    VAR_31 |= VAR_13;
    break;
   case 128:
    VAR_31 |= VAR_10;
    break;
   default:
    break;
   }
  }
 }

 FUNC_1(VAR_27->map, VAR_23, VAR_31);
}
