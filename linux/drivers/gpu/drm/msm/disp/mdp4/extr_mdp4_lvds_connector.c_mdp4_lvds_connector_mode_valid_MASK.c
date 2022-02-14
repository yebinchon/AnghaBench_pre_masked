
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp4_lvds_connector {struct drm_encoder* encoder; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int clock; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (char*,long,long) ;
 int VAR_0 ;
 int VAR_1 ;
 long FUNC_1 (struct drm_encoder*,long) ;
 struct mdp4_lvds_connector* FUNC_2 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_3(struct drm_connector *VAR_2,
     struct drm_display_mode *VAR_3)
{
 struct mdp4_lvds_connector *VAR_4 =
   FUNC_2(VAR_2);
 struct drm_encoder *VAR_5 = VAR_4->encoder;
 long VAR_6, VAR_7;

 VAR_7 = 1000 * VAR_3->clock;
 VAR_6 = FUNC_1(VAR_5, VAR_7);

 FUNC_0("requested=%ld, actual=%ld", VAR_7, VAR_6);

 if (VAR_6 != VAR_7)
  return VAR_0;

 return VAR_1;
}
