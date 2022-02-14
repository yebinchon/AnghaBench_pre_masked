
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w8001_touch_query {int sensor_id; int panel_res; scalar_t__ y; scalar_t__ x; } ;
struct w8001 {int id; scalar_t__ max_pen_y; scalar_t__ max_pen_x; TYPE_1__* serio; int pktlen; scalar_t__ max_touch_y; scalar_t__ max_touch_x; int * response; struct input_dev* touch_dev; } ;
struct input_dev {int keybit; int propbit; int evbit; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct input_dev*,int ,int ) ;
 int FUNC_3 (struct input_dev*,int,int ) ;
 int FUNC_4 (struct input_dev*,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_5 (int *,struct w8001_touch_query*) ;
 int FUNC_6 (char*,char*,size_t) ;
 int FUNC_7 (struct w8001*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct w8001 *VAR_17, char *VAR_18,
        size_t VAR_19)
{
 struct input_dev *VAR_20 = VAR_17->touch_dev;
 struct w8001_touch_query VAR_21;
 int VAR_22;



 VAR_22 = FUNC_7(VAR_17, VAR_12, 1);
 if (VAR_22)
  return VAR_22;




 if (!VAR_17->response[1])
  return -VAR_7;

 FUNC_0(VAR_9, VAR_20->evbit);
 FUNC_0(VAR_8, VAR_20->evbit);
 FUNC_0(VAR_6, VAR_20->keybit);
 FUNC_0(VAR_10, VAR_20->propbit);

 FUNC_5(VAR_17->response, &VAR_21);
 VAR_17->max_touch_x = VAR_21.x;
 VAR_17->max_touch_y = VAR_21.y;

 if (VAR_17->max_pen_x && VAR_17->max_pen_y) {

  VAR_21.x = VAR_17->max_pen_x;
  VAR_21.y = VAR_17->max_pen_y;
  VAR_21.panel_res = VAR_13;
 }

 FUNC_4(VAR_20, VAR_3, 0, VAR_21.x, 0, 0);
 FUNC_4(VAR_20, VAR_4, 0, VAR_21.y, 0, 0);
 FUNC_2(VAR_20, VAR_3, VAR_21.panel_res);
 FUNC_2(VAR_20, VAR_4, VAR_21.panel_res);

 switch (VAR_21.sensor_id) {
 case 0:
 case 2:
  VAR_17->pktlen = VAR_15;
  VAR_17->id = 0x93;
  FUNC_6(VAR_18, " 1FG", VAR_19);
  break;

 case 1:
 case 3:
 case 4:
  VAR_17->pktlen = VAR_16;
  FUNC_6(VAR_18, " 1FG", VAR_19);
  VAR_17->id = 0x9a;
  break;

 case 5:
  VAR_17->pktlen = VAR_14;

  FUNC_0(VAR_5, VAR_20->keybit);
  VAR_22 = FUNC_3(VAR_20, 2, 0);
  if (VAR_22) {
   FUNC_1(&VAR_17->serio->dev,
    "failed to initialize MT slots: %d\n", VAR_22);
   return VAR_22;
  }

  FUNC_4(VAR_20, VAR_0,
     0, VAR_21.x, 0, 0);
  FUNC_4(VAR_20, VAR_1,
     0, VAR_21.y, 0, 0);
  FUNC_4(VAR_20, VAR_2,
     0, VAR_11, 0, 0);
  FUNC_2(VAR_20, VAR_0, VAR_21.panel_res);
  FUNC_2(VAR_20, VAR_1, VAR_21.panel_res);

  FUNC_6(VAR_18, " 2FG", VAR_19);
  if (VAR_17->max_pen_x && VAR_17->max_pen_y)
   VAR_17->id = 0xE3;
  else
   VAR_17->id = 0xE2;
  break;
 }

 FUNC_6(VAR_18, " Touchscreen", VAR_19);

 return 0;
}
