
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int u8 ;
struct i2c_msg {int len; scalar_t__* buf; scalar_t__ flags; int addr; } ;
struct adv7511 {unsigned int current_edid_segment; int edid_read; scalar_t__* edid_buf; TYPE_1__* i2c_edid; int regmap; } ;
struct TYPE_2__ {int adapter; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_msg*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct adv7511*,int) ;
 int FUNC_2 (int ,struct i2c_msg*,int ) ;
 int FUNC_3 (int *,scalar_t__*,size_t) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 int FUNC_5 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_6(void *VAR_5, u8 *VAR_6, unsigned int VAR_7,
      size_t VAR_8)
{
 struct adv7511 *VAR_9 = VAR_5;
 struct i2c_msg VAR_10[2];
 uint8_t VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 if (VAR_8 > 128)
  return -VAR_2;

 if (VAR_9->current_edid_segment != VAR_7 / 2) {
  unsigned int VAR_14;

  VAR_13 = FUNC_4(VAR_9->regmap, VAR_0,
      &VAR_14);
  if (VAR_13 < 0)
   return VAR_13;

  if (VAR_14 != 2) {
   VAR_9->edid_read = 0;
   FUNC_5(VAR_9->regmap, VAR_1,
         VAR_7);
   VAR_13 = FUNC_1(VAR_9, 200);
   if (VAR_13 < 0)
    return VAR_13;
  }





  VAR_10[0].addr = VAR_9->i2c_edid->addr;
  VAR_10[0].flags = 0;
  VAR_10[0].len = 1;
  VAR_10[0].buf = &VAR_11;
  VAR_10[1].addr = VAR_9->i2c_edid->addr;
  VAR_10[1].flags = VAR_4;
  VAR_10[1].len = 64;
  VAR_10[1].buf = VAR_9->edid_buf;

  VAR_11 = 0;

  for (VAR_12 = 0; VAR_12 < 4; ++VAR_12) {
   VAR_13 = FUNC_2(VAR_9->i2c_edid->adapter, VAR_10,
        FUNC_0(VAR_10));
   if (VAR_13 < 0)
    return VAR_13;
   else if (VAR_13 != 2)
    return -VAR_3;

   VAR_10[1].buf += 64;
   VAR_11 += 64;
  }

  VAR_9->current_edid_segment = VAR_7 / 2;
 }

 if (VAR_7 % 2 == 0)
  FUNC_3(VAR_6, VAR_9->edid_buf, VAR_8);
 else
  FUNC_3(VAR_6, VAR_9->edid_buf + 128, VAR_8);

 return 0;
}
