
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sharp_panel {int prepared; int supply; int link1; int mode; int link2; } ;
struct drm_panel {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sharp_panel*,int,int) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (struct sharp_panel*,int) ;
 struct sharp_panel* FUNC_10 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_11(struct drm_panel *VAR_1)
{
 struct sharp_panel *VAR_2 = FUNC_10(VAR_1);
 u8 VAR_3 = VAR_0;
 int VAR_4;

 if (VAR_2->prepared)
  return 0;

 VAR_4 = FUNC_6(VAR_2->supply);
 if (VAR_4 < 0)
  return VAR_4;







 FUNC_4(150);

 VAR_4 = FUNC_1(VAR_2->link1);
 if (VAR_4 < 0) {
  FUNC_0(VAR_1->dev, "failed to exit sleep mode: %d\n", VAR_4);
  goto poweroff;
 }
 VAR_4 = FUNC_7(VAR_2, 0x1000, 0x2a);
 if (VAR_4 < 0) {
  FUNC_0(VAR_1->dev, "failed to set left-right mode: %d\n", VAR_4);
  goto poweroff;
 }


 VAR_4 = FUNC_7(VAR_2, 0x1001, 0x01);
 if (VAR_4 < 0) {
  FUNC_0(VAR_1->dev, "failed to enable command mode: %d\n", VAR_4);
  goto poweroff;
 }

 VAR_4 = FUNC_3(VAR_2->link1, VAR_3);
 if (VAR_4 < 0) {
  FUNC_0(VAR_1->dev, "failed to set pixel format: %d\n", VAR_4);
  goto poweroff;
 }
 VAR_4 = FUNC_8(VAR_2->link1, VAR_2->link2,
         VAR_2->mode);
 if (VAR_4 < 0) {
  FUNC_0(VAR_1->dev, "failed to set up symmetrical split: %d\n",
   VAR_4);
  goto poweroff;
 }

 VAR_4 = FUNC_2(VAR_2->link1);
 if (VAR_4 < 0) {
  FUNC_0(VAR_1->dev, "failed to set display on: %d\n", VAR_4);
  goto poweroff;
 }

 VAR_2->prepared = 1;


 FUNC_9(VAR_2, 6);

 return 0;

poweroff:
 FUNC_5(VAR_2->supply);
 return VAR_4;
}
