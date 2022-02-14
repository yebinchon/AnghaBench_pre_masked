
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct silead_ts_data {int max_fingers; int* id; int * slots; TYPE_1__* pos; int prop; struct input_dev* input; } ;
struct input_dev {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;
struct TYPE_3__ {int y; int x; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct device*,char*,int ,int ,int,int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*,int,int) ;
 int FUNC_3 (int*) ;
 struct silead_ts_data* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (struct i2c_client*,int ,int,int*) ;
 int FUNC_6 (struct input_dev*,int *,TYPE_1__*,int,int ) ;
 int FUNC_7 (struct input_dev*,int ,int) ;
 int FUNC_8 (struct input_dev*,int ) ;
 int FUNC_9 (struct input_dev*) ;
 int FUNC_10 (struct input_dev*,int ,int ) ;
 int FUNC_11 (struct input_dev*,int ,int) ;
 int FUNC_12 (struct input_dev*) ;
 int FUNC_13 (TYPE_1__*,int *,int,int) ;

__attribute__((used)) static void FUNC_14(struct i2c_client *VAR_12)
{
 struct silead_ts_data *VAR_13 = FUNC_4(VAR_12);
 struct input_dev *VAR_14 = VAR_13->input;
 struct device *VAR_15 = &VAR_12->dev;
 u8 *VAR_16, VAR_17[VAR_11];
 int VAR_18, VAR_19, VAR_20, VAR_21;
 bool VAR_22 = 0;

 VAR_20 = FUNC_5(VAR_12, VAR_10,
           VAR_11, VAR_17);
 if (VAR_20 < 0) {
  FUNC_1(VAR_15, "Data read error %d\n", VAR_20);
  return;
 }

 if (VAR_17[0] > VAR_13->max_fingers) {
  FUNC_2(VAR_15, "More touches reported then supported %d > %d\n",
    VAR_17[0], VAR_13->max_fingers);
  VAR_17[0] = VAR_13->max_fingers;
 }

 VAR_18 = 0;
 VAR_16 = VAR_17 + VAR_5;
 for (VAR_21 = 0; VAR_21 < VAR_17[0]; VAR_21++, VAR_16 += VAR_5) {
  VAR_19 = (VAR_16[VAR_8] &
         VAR_4) >> 4;

  if (VAR_19) {





   if (VAR_19 == 0x01)
    VAR_22 = 1;

   continue;
  }





  VAR_13->id[VAR_18] = (VAR_16[VAR_6] &
          VAR_4) >> 4;
  FUNC_13(&VAR_13->pos[VAR_18], &VAR_13->prop,
   FUNC_3(&VAR_16[VAR_7]) & 0xfff,
   FUNC_3(&VAR_16[VAR_9]) & 0xfff);
  VAR_18++;
 }

 FUNC_6(VAR_14, VAR_13->slots, VAR_13->pos, VAR_18, 0);

 for (VAR_21 = 0; VAR_21 < VAR_18; VAR_21++) {
  FUNC_8(VAR_14, VAR_13->slots[VAR_21]);
  FUNC_7(VAR_14, VAR_3, 1);
  FUNC_10(VAR_14, VAR_0, VAR_13->pos[VAR_21].x);
  FUNC_10(VAR_14, VAR_1, VAR_13->pos[VAR_21].y);

  FUNC_0(VAR_15, "x=%d y=%d hw_id=%d sw_id=%d\n", VAR_13->pos[VAR_21].x,
   VAR_13->pos[VAR_21].y, VAR_13->id[VAR_21], VAR_13->slots[VAR_21]);
 }

 FUNC_9(VAR_14);
 FUNC_11(VAR_14, VAR_2, VAR_22);
 FUNC_12(VAR_14);
}
