
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nt39016 {int dev; int map; int backlight; } ;
struct drm_panel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int ) ;
 struct nt39016* FUNC_3 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_4(struct drm_panel *VAR_2)
{
 struct nt39016 *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;

 FUNC_0(VAR_3->backlight);

 VAR_4 = FUNC_2(VAR_3->map, VAR_0,
      VAR_1);
 if (VAR_4) {
  FUNC_1(VAR_3->dev, "Unable to disable panel: %d", VAR_4);
  return VAR_4;
 }

 return 0;
}
