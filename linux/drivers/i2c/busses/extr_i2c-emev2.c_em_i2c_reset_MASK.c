
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct em_i2c_device {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 struct em_i2c_device* FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct i2c_adapter *VAR_9)
{
 struct em_i2c_device *VAR_10 = FUNC_1(VAR_9);
 int VAR_11;


 if (FUNC_2(VAR_10->base + VAR_5) & VAR_1) {

  FUNC_3(0, VAR_10->base + VAR_5);

  VAR_11 = 1000;
  while (FUNC_2(VAR_10->base + VAR_5) == 1 && VAR_11)
   VAR_11--;
  FUNC_0(VAR_11 == 0);
 }


 FUNC_3(VAR_0, VAR_10->base + VAR_7);


 FUNC_3(VAR_3 | VAR_2, VAR_10->base + VAR_8);


 FUNC_3(VAR_4, VAR_10->base + VAR_6);


 FUNC_3(VAR_1, VAR_10->base + VAR_5);

 VAR_11 = 1000;
 while (FUNC_2(VAR_10->base + VAR_5) == 0 && VAR_11)
  VAR_11--;
 FUNC_0(VAR_11 == 0);
}
