
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct w83793_data {int bank; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int,int) ;
 struct w83793_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int) ;
 scalar_t__ FUNC_3 (struct i2c_client*,int ,int) ;

__attribute__((used)) static u8 FUNC_4(struct i2c_client *VAR_1, u16 VAR_2)
{
 struct w83793_data *VAR_3 = FUNC_1(VAR_1);
 u8 VAR_4 = 0xff;
 u8 VAR_5 = VAR_2 >> 8;

 VAR_5 |= VAR_3->bank & 0xfc;
 if (VAR_3->bank != VAR_5) {
  if (FUNC_3
      (VAR_1, VAR_0, VAR_5) >= 0)
   VAR_3->bank = VAR_5;
  else {
   FUNC_0(&VAR_1->dev,
    "set bank to %d failed, fall back "
    "to bank %d, read reg 0x%x error\n",
    VAR_5, VAR_3->bank, VAR_2);
   VAR_4 = 0x0;
   goto END;
  }
 }
 VAR_4 = FUNC_2(VAR_1, VAR_2 & 0xff);
END:
 return VAR_4;
}
