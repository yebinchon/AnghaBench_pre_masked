
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kingdisplay_panel_cmd {int dummy; } ;
struct kingdisplay_panel {int prepared; int supply; int enable_gpio; int link; } ;
struct drm_panel {int dev; } ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int) ;
 int * VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct kingdisplay_panel* FUNC_9 (struct drm_panel*) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static int FUNC_11(struct drm_panel *VAR_1)
{
 struct kingdisplay_panel *VAR_2 = FUNC_9(VAR_1);
 int VAR_3, VAR_4;
 unsigned int VAR_5;

 if (VAR_2->prepared)
  return 0;

 FUNC_2(VAR_2->enable_gpio, 0);

 VAR_3 = FUNC_8(VAR_2->supply);
 if (VAR_3 < 0)
  return VAR_3;


 FUNC_10(15000, 16000);

 FUNC_2(VAR_2->enable_gpio, 1);


 FUNC_10(15000, 16000);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
  VAR_3 = FUNC_5(VAR_2->link, &VAR_0[VAR_5],
     sizeof(struct kingdisplay_panel_cmd));
  if (VAR_3 < 0) {
   FUNC_1(VAR_1->dev, "failed write init cmds: %d\n",
          VAR_3);
   goto poweroff;
  }
 }

 VAR_3 = FUNC_3(VAR_2->link);
 if (VAR_3 < 0) {
  FUNC_1(VAR_1->dev, "failed to exit sleep mode: %d\n",
         VAR_3);
  goto poweroff;
 }


 FUNC_6(120);

 VAR_3 = FUNC_4(VAR_2->link);
 if (VAR_3 < 0) {
  FUNC_1(VAR_1->dev, "failed to set display on: %d\n",
         VAR_3);
  goto poweroff;
 }


 FUNC_10(10000, 11000);

 VAR_2->prepared = 1;

 return 0;

poweroff:
 FUNC_2(VAR_2->enable_gpio, 0);

 VAR_4 = FUNC_7(VAR_2->supply);
 if (VAR_4)
  FUNC_1(VAR_1->dev, "failed to disable regulator: %d\n",
         VAR_4);

 return VAR_3;
}
