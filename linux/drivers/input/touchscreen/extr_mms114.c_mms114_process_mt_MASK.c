
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mms114_touch {int id; int type; int x_lo; int x_hi; int y_lo; int y_hi; int strength; int width; int pressed; } ;
struct mms114_data {int props; struct input_dev* input_dev; struct i2c_client* client; } ;
struct input_dev {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,unsigned int,int,int ,unsigned int,unsigned int,int ,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct input_dev*,int ,int ) ;
 int FUNC_3 (struct input_dev*,unsigned int) ;
 int FUNC_4 (struct input_dev*,int ,int ) ;
 int FUNC_5 (struct input_dev*,int *,unsigned int,unsigned int,int) ;

__attribute__((used)) static void FUNC_6(struct mms114_data *VAR_5, struct mms114_touch *VAR_6)
{
 struct i2c_client *VAR_7 = VAR_5->client;
 struct input_dev *VAR_8 = VAR_5->input_dev;
 unsigned int VAR_9;
 unsigned int VAR_10;
 unsigned int VAR_11;

 if (VAR_6->id > VAR_2) {
  FUNC_1(&VAR_7->dev, "Wrong touch id (%d)\n", VAR_6->id);
  return;
 }

 if (VAR_6->type != VAR_3) {
  FUNC_1(&VAR_7->dev, "Wrong touch type (%d)\n", VAR_6->type);
  return;
 }

 VAR_9 = VAR_6->id - 1;
 VAR_10 = VAR_6->x_lo | VAR_6->x_hi << 8;
 VAR_11 = VAR_6->y_lo | VAR_6->y_hi << 8;

 FUNC_0(&VAR_7->dev,
  "id: %d, type: %d, pressed: %d, x: %d, y: %d, width: %d, strength: %d\n",
  VAR_9, VAR_6->type, VAR_6->pressed,
  VAR_10, VAR_11, VAR_6->width, VAR_6->strength);

 FUNC_3(VAR_8, VAR_9);
 FUNC_2(VAR_8, VAR_4, VAR_6->pressed);

 if (VAR_6->pressed) {
  FUNC_5(VAR_8, &VAR_5->props, VAR_10, VAR_11, 1);
  FUNC_4(VAR_8, VAR_1, VAR_6->width);
  FUNC_4(VAR_8, VAR_0, VAR_6->strength);
 }
}
