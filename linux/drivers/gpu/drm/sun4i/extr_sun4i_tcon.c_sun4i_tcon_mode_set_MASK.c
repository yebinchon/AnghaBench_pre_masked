
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_tcon {int dummy; } ;
struct drm_encoder {int encoder_type; } ;
struct drm_display_mode {int dummy; } ;


 int FUNC_0 (char*) ;





 int FUNC_1 (struct sun4i_tcon*,struct drm_encoder const*,struct drm_display_mode const*) ;
 int FUNC_2 (struct sun4i_tcon*,struct drm_encoder const*,struct drm_display_mode const*) ;
 int FUNC_3 (struct sun4i_tcon*,struct drm_encoder const*,struct drm_display_mode const*) ;
 int FUNC_4 (struct sun4i_tcon*,struct drm_display_mode const*) ;
 int FUNC_5 (struct sun4i_tcon*,int,struct drm_encoder const*) ;

void FUNC_6(struct sun4i_tcon *VAR_0,
    const struct drm_encoder *VAR_1,
    const struct drm_display_mode *VAR_2)
{
 switch (VAR_1->encoder_type) {
 case 132:

  FUNC_1(VAR_0, VAR_1, VAR_2);
  break;
 case 131:
  FUNC_2(VAR_0, VAR_1, VAR_2);
  break;
 case 130:
  FUNC_3(VAR_0, VAR_1, VAR_2);
  FUNC_5(VAR_0, 0, VAR_1);
  break;
 case 128:
 case 129:
  FUNC_4(VAR_0, VAR_2);
  FUNC_5(VAR_0, 1, VAR_1);
  break;
 default:
  FUNC_0("Unknown encoder type, doing nothing...\n");
 }
}
