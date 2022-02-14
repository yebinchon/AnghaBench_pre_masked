
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_au1550_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int FUNC_0 (struct i2c_au1550_data*,int ) ;
 int FUNC_1 (struct i2c_au1550_data*,int ,unsigned int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct i2c_au1550_data*) ;
 int FUNC_5 (struct i2c_au1550_data*) ;

__attribute__((used)) static int
FUNC_6(struct i2c_au1550_data *VAR_11, unsigned int VAR_12, int VAR_13, int VAR_14)
{
 unsigned long VAR_15;


 VAR_15 = FUNC_0(VAR_11, VAR_6);
 FUNC_1(VAR_11, VAR_1, VAR_2);

 if (!(VAR_15 & VAR_8) || !(VAR_15 & VAR_7)) {
  FUNC_1(VAR_11, VAR_3, VAR_4);
  while ((FUNC_0(VAR_11, VAR_3) & VAR_4) != 0)
   FUNC_2();
  FUNC_3(50);
 }


 VAR_12 <<= 1;
 if (VAR_13)
  VAR_12 |= 1;


 if (VAR_14)
  VAR_12 |= VAR_10;


 FUNC_1(VAR_11, VAR_9, VAR_12);
 FUNC_1(VAR_11, VAR_3, VAR_5);
 if (FUNC_4(VAR_11))
  return -VAR_0;
 return (VAR_14) ? FUNC_5(VAR_11) : 0;
}
