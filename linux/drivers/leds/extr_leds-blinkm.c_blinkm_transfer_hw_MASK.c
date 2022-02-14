
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct blinkm_data {int update_lock; int * args; int i2c_addr; int blue; int green; int red; int script_startline; int script_repeats; int script_id; int next_brightness; int brightness; int next_saturation; int saturation; int next_hue; int hue; int next_blue; int next_green; int next_red; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int,int *) ;
 int FUNC_1 (struct i2c_client*,int,int *) ;
 int FUNC_2 (int *,char*,int) ;
 struct blinkm_data* FUNC_3 (struct i2c_client*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_2, int VAR_3)
{
 struct blinkm_data *VAR_4 = FUNC_3(VAR_2);



 if (FUNC_4(&VAR_4->update_lock) < 0)
  return -VAR_0;


 switch (VAR_3) {
 case 142:
 case 137:
 case 141:
  VAR_4->args[0] = VAR_4->next_red;
  VAR_4->args[1] = VAR_4->next_green;
  VAR_4->args[2] = VAR_4->next_blue;
  FUNC_1(VAR_2, VAR_3, VAR_4->args);
  VAR_4->red = VAR_4->args[0];
  VAR_4->green = VAR_4->args[1];
  VAR_4->blue = VAR_4->args[2];
  break;
 case 144:
 case 143:
  VAR_4->args[0] = VAR_4->next_hue;
  VAR_4->args[1] = VAR_4->next_saturation;
  VAR_4->args[2] = VAR_4->next_brightness;
  FUNC_1(VAR_2, VAR_3, VAR_4->args);
  VAR_4->hue = VAR_4->next_hue;
  VAR_4->saturation = VAR_4->next_saturation;
  VAR_4->brightness = VAR_4->next_brightness;
  break;
 case 136:
  VAR_4->args[0] = VAR_4->script_id;
  VAR_4->args[1] = VAR_4->script_repeats;
  VAR_4->args[2] = VAR_4->script_startline;
  FUNC_1(VAR_2, VAR_3, VAR_4->args);
  break;
 case 129:
  FUNC_1(VAR_2, VAR_3, ((void*)0));
  break;
 case 139:
  VAR_4->args[0] = VAR_4->red;
  VAR_4->args[1] = VAR_4->green;
  VAR_4->args[2] = VAR_4->blue;
  FUNC_1(VAR_2, VAR_3, ((void*)0));
  FUNC_0(VAR_2, VAR_3, VAR_4->args);
  VAR_4->red = VAR_4->args[0];
  VAR_4->green = VAR_4->args[1];
  VAR_4->blue = VAR_4->args[2];
  break;
 case 140:
  VAR_4->args[0] = VAR_4->i2c_addr;
  FUNC_1(VAR_2, VAR_3, ((void*)0));
  FUNC_0(VAR_2, VAR_3, VAR_4->args);
  VAR_4->i2c_addr = VAR_4->args[0];
  break;
 case 130:
 case 133:
 case 135:
 case 128:
 case 132:
 case 134:
 case 138:
 case 131:
  FUNC_2(&VAR_2->dev,
    "BlinkM: cmd %d not implemented yet.\n", VAR_3);
  break;
 default:
  FUNC_2(&VAR_2->dev, "BlinkM: unknown command %d\n", VAR_3);
  FUNC_5(&VAR_4->update_lock);
  return -VAR_1;
 }


 FUNC_5(&VAR_4->update_lock);
 return 0;
}
