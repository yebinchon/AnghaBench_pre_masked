
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_client {int dev; } ;
struct ds620_platform_data {int pomode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ds620_platform_data* FUNC_0 (int *) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct i2c_client *VAR_7)
{
 struct ds620_platform_data *VAR_8 = FUNC_0(&VAR_7->dev);
 u16 VAR_9, VAR_10;

 VAR_10 = VAR_9 =
     FUNC_1(VAR_7, VAR_1);


 VAR_10 &= ~VAR_2;

 VAR_10 |= VAR_4;

 if (VAR_8 && VAR_8->pomode == 1)
  VAR_10 &= ~VAR_3;
 else if (VAR_8 && VAR_8->pomode == 2)
  VAR_10 |= VAR_3;
 else
  VAR_10 &= ~VAR_4;

 VAR_10 |= VAR_6 | VAR_5;

 if (VAR_9 != VAR_10)
  FUNC_3(VAR_7, VAR_1, VAR_10);


 FUNC_2(VAR_7, VAR_0);
}
