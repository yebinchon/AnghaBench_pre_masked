
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_au1550_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct i2c_au1550_data*,int ,unsigned long) ;
 scalar_t__ FUNC_1 (struct i2c_au1550_data*) ;
 scalar_t__ FUNC_2 (struct i2c_au1550_data*) ;

__attribute__((used)) static int FUNC_3(struct i2c_au1550_data *VAR_3, unsigned char *VAR_4,
       unsigned int VAR_5)
{
 int VAR_6;
 unsigned long VAR_7;

 if (VAR_5 == 0)
  return 0;

 VAR_6 = 0;
 while (VAR_6 < (VAR_5-1)) {
  VAR_7 = VAR_4[VAR_6];
  FUNC_0(VAR_3, VAR_1, VAR_7);
  if (FUNC_1(VAR_3))
   return -VAR_0;
  VAR_6++;
 }


 VAR_7 = VAR_4[VAR_6];
 VAR_7 |= VAR_2;
 FUNC_0(VAR_3, VAR_1, VAR_7);
 if (FUNC_2(VAR_3))
  return -VAR_0;
 return 0;
}
