
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tv_mode {int name; } ;
struct drm_display_mode {int name; } ;
struct drm_connector {int dev; } ;


 int FUNC_0 (struct tv_mode*) ;
 int FUNC_1 (char*) ;
 struct drm_display_mode* FUNC_2 (int ) ;
 int FUNC_3 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct tv_mode const*,struct drm_display_mode*) ;
 struct tv_mode* VAR_0 ;

__attribute__((used)) static int FUNC_6(struct drm_connector *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  struct drm_display_mode *VAR_3;
  const struct tv_mode *VAR_4 = &VAR_0[VAR_2];

  VAR_3 = FUNC_2(VAR_1->dev);
  if (!VAR_3) {
   FUNC_1("Failed to create a new display mode\n");
   return 0;
  }

  FUNC_4(VAR_3->name, VAR_4->name);

  FUNC_5(VAR_4, VAR_3);
  FUNC_3(VAR_1, VAR_3);
 }

 return VAR_2;
}
