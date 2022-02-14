
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct feiyang {int dvdd; int avdd; int reset; int dsi; } ;
struct drm_panel {int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 struct feiyang* FUNC_5 (struct drm_panel*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct drm_panel *VAR_0)
{
 struct feiyang *VAR_1 = FUNC_5(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_3(VAR_1->dsi);
 if (VAR_2 < 0)
  FUNC_0(VAR_0->dev, "failed to set display off: %d\n",
         VAR_2);

 VAR_2 = FUNC_2(VAR_1->dsi);
 if (VAR_2 < 0)
  FUNC_0(VAR_0->dev, "failed to enter sleep mode: %d\n",
         VAR_2);


 FUNC_4(200);

 FUNC_1(VAR_1->reset, 0);

 FUNC_6(VAR_1->avdd);


 FUNC_4(10);

 FUNC_6(VAR_1->dvdd);

 return 0;
}
