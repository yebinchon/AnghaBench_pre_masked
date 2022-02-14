
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nt39016 {scalar_t__ backlight; int dev; int map; } ;
struct drm_panel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int) ;
 struct nt39016* FUNC_4 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_5(struct drm_panel *VAR_3)
{
 struct nt39016 *VAR_4 = FUNC_4(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_3(VAR_4->map, VAR_0,
      VAR_1 | VAR_2);
 if (VAR_5) {
  FUNC_1(VAR_4->dev, "Unable to enable panel: %d", VAR_5);
  return VAR_5;
 }

 if (VAR_4->backlight) {

  FUNC_2(150);

  VAR_5 = FUNC_0(VAR_4->backlight);
 }

 return VAR_5;
}
