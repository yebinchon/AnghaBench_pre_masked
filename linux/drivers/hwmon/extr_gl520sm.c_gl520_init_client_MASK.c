
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;
struct gl520_data {int alarm_mask; int two_temps; scalar_t__* fan_min; int beep_mask; int vrm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 struct gl520_data* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct i2c_client *VAR_3)
{
 struct gl520_data *VAR_4 = FUNC_3(VAR_3);
 u8 VAR_5, VAR_6;

 VAR_6 = VAR_5 = FUNC_0(VAR_3, VAR_1);

 VAR_4->alarm_mask = 0xff;
 VAR_4->vrm = FUNC_4();

 if (VAR_2 == 1)
  VAR_6 &= ~0x10;
 else if (VAR_2 == 2)
  VAR_6 |= 0x10;
 VAR_4->two_temps = !(VAR_6 & 0x10);


 if (!(VAR_6 & 0x20))
  VAR_6 &= 0xf7;


 VAR_6 |= 0x40;

 if (VAR_6 != VAR_5)
  FUNC_2(VAR_3, VAR_1, VAR_6);

 FUNC_1(&(VAR_3->dev));

 if (VAR_4->fan_min[0] == 0)
  VAR_4->alarm_mask &= ~0x20;
 if (VAR_4->fan_min[1] == 0)
  VAR_4->alarm_mask &= ~0x40;

 VAR_4->beep_mask &= VAR_4->alarm_mask;
 FUNC_2(VAR_3, VAR_0, VAR_4->beep_mask);
}
