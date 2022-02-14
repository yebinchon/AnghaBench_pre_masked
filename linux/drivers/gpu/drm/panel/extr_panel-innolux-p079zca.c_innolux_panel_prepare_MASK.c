
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct panel_init_cmd {scalar_t__ len; int data; } ;
struct innolux_panel {int prepared; int supplies; TYPE_1__* desc; int enable_gpio; int link; } ;
struct drm_panel {int dev; } ;
struct TYPE_2__ {int num_supplies; struct panel_init_cmd* init_cmds; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,scalar_t__) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 struct innolux_panel* FUNC_10 (struct drm_panel*) ;
 int FUNC_11 (int,int) ;

__attribute__((used)) static int FUNC_12(struct drm_panel *VAR_0)
{
 struct innolux_panel *VAR_1 = FUNC_10(VAR_0);
 int VAR_2;

 if (VAR_1->prepared)
  return 0;

 FUNC_2(VAR_1->enable_gpio, 0);

 VAR_2 = FUNC_9(VAR_1->desc->num_supplies,
        VAR_1->supplies);
 if (VAR_2 < 0)
  return VAR_2;


 FUNC_11(20000, 21000);

 FUNC_2(VAR_1->enable_gpio, 1);


 FUNC_11(20000, 21000);

 if (VAR_1->desc->init_cmds) {
  const struct panel_init_cmd *VAR_3 =
     VAR_1->desc->init_cmds;
  unsigned int VAR_4;

  for (VAR_4 = 0; VAR_3[VAR_4].len != 0; VAR_4++) {
   const struct panel_init_cmd *VAR_5 = &VAR_3[VAR_4];

   VAR_2 = FUNC_6(VAR_1->link, VAR_5->data,
           VAR_5->len);
   if (VAR_2 < 0) {
    FUNC_1(VAR_0->dev,
     "failed to write command %u\n", VAR_4);
    goto poweroff;
   }






   VAR_2 = FUNC_4(VAR_1->link);
   if (VAR_2 < 0) {
    FUNC_1(VAR_0->dev,
     "failed to send DCS nop: %d\n", VAR_2);
    goto poweroff;
   }
  }
 }

 VAR_2 = FUNC_3(VAR_1->link);
 if (VAR_2 < 0) {
  FUNC_0(VAR_0->dev, "failed to exit sleep mode: %d\n",
         VAR_2);
  goto poweroff;
 }


 FUNC_7(120);

 VAR_2 = FUNC_5(VAR_1->link);
 if (VAR_2 < 0) {
  FUNC_0(VAR_0->dev, "failed to set display on: %d\n",
         VAR_2);
  goto poweroff;
 }


 FUNC_11(5000, 6000);

 VAR_1->prepared = 1;

 return 0;

poweroff:
 FUNC_2(VAR_1->enable_gpio, 0);
 FUNC_8(VAR_1->desc->num_supplies, VAR_1->supplies);

 return VAR_2;
}
