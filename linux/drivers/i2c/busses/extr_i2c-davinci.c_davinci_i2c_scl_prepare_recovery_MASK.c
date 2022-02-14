
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct davinci_i2c_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct davinci_i2c_dev*,int ,int ) ;
 struct davinci_i2c_dev* FUNC_2 (struct i2c_adapter*) ;

__attribute__((used)) static void FUNC_3(struct i2c_adapter *VAR_4)
{
 struct davinci_i2c_dev *VAR_5 = FUNC_2(VAR_4);

 FUNC_0(VAR_4);


 FUNC_1(VAR_5, VAR_1, VAR_0);


 FUNC_1(VAR_5, VAR_3,
         VAR_2);
}
