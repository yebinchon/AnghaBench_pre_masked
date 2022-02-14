
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct w83795_data {int clkin; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 struct w83795_data* FUNC_2 (struct i2c_client*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct i2c_client *VAR_3)
{
 struct w83795_data *VAR_4 = FUNC_2(VAR_3);
 static const u16 VAR_5[4] = {
  14318, 24000, 33333, 48000
 };
 u8 VAR_6;

 if (VAR_2)
  FUNC_4(VAR_3, VAR_0, 0x80);


 VAR_6 = FUNC_3(VAR_3, VAR_0);
 if (!(VAR_6 & VAR_1)) {
  FUNC_1(&VAR_3->dev, "Enabling monitoring operations\n");
  FUNC_4(VAR_3, VAR_0,
        VAR_6 | VAR_1);
 }

 VAR_4->clkin = VAR_5[(VAR_6 >> 3) & 0x3];
 FUNC_0(&VAR_3->dev, "clkin = %u kHz\n", VAR_4->clkin);
}
