
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videomode {int dummy; } ;
struct drm_display_mode {int type; } ;
struct drm_connector {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct videomode const*,struct drm_display_mode*) ;
 struct drm_display_mode* FUNC_1 (int ) ;
 int FUNC_2 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_3 (struct drm_display_mode*) ;

int FUNC_4(struct drm_connector *VAR_2,
         const struct videomode *VAR_3)
{
 struct drm_display_mode *VAR_4;

 VAR_4 = FUNC_1(VAR_2->dev);
 if (!VAR_4)
  return 0;

 FUNC_0(VAR_3, VAR_4);

 VAR_4->type = VAR_0 | VAR_1;
 FUNC_3(VAR_4);
 FUNC_2(VAR_2, VAR_4);

 return 1;
}
