
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_au1550_data {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long VAR_11 ;
 int VAR_12 ;
 unsigned long VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned long FUNC_1 (int) ;
 unsigned long FUNC_2 (int) ;
 unsigned long FUNC_3 (int) ;
 unsigned long FUNC_4 (int) ;
 unsigned long FUNC_5 (int) ;
 unsigned long FUNC_6 (int) ;
 unsigned long FUNC_7 (int ) ;
 int FUNC_8 (struct i2c_au1550_data*,int ) ;
 int FUNC_9 (struct i2c_au1550_data*,int ,unsigned long) ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(struct i2c_au1550_data *VAR_17)
{
 unsigned long VAR_18;

 FUNC_9(VAR_17, VAR_0, VAR_1);
 FUNC_9(VAR_17, VAR_4, VAR_5);
 FUNC_9(VAR_17, VAR_6, 0);
 FUNC_9(VAR_17, VAR_0, VAR_2);
 while ((FUNC_8(VAR_17, VAR_14) & VAR_15) == 0)
  FUNC_10();

 VAR_18 = VAR_10 | VAR_11 | VAR_7;
 FUNC_9(VAR_17, VAR_6, VAR_18);




 VAR_18 |= FUNC_0(VAR_9);
 FUNC_9(VAR_17, VAR_6, VAR_18);
 FUNC_9(VAR_17, VAR_12, VAR_13);




 FUNC_9(VAR_17, VAR_16, FUNC_7(0) | FUNC_3(20) | FUNC_4(20) | FUNC_5(20) | FUNC_6(20) | FUNC_2(20) | FUNC_1(20));




 VAR_18 |= VAR_8;
 FUNC_9(VAR_17, VAR_6, VAR_18);
 while ((FUNC_8(VAR_17, VAR_14) & VAR_15) == 0)
  FUNC_10();

 FUNC_9(VAR_17, VAR_0, VAR_3);
}
