
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_display_mode {int flags; } ;
typedef enum hdmi_3d_structure { ____Placeholder_hdmi_3d_structure } hdmi_3d_structure ;







 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static enum hdmi_3d_structure
FUNC_0(const struct drm_display_mode *VAR_10)
{
 u32 VAR_11 = VAR_10->flags & VAR_0;

 switch (VAR_11) {
 case 134:
  return VAR_2;
 case 135:
  return VAR_1;
 case 133:
  return VAR_4;
 case 130:
  return VAR_7;
 case 132:
  return VAR_5;
 case 131:
  return VAR_6;
 case 128:
  return VAR_9;
 case 129:
  return VAR_8;
 default:
  return VAR_3;
 }
}
