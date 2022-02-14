
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
 int FUNC_0 (struct davinci_i2c_dev*,int ,int ) ;
 struct davinci_i2c_dev* FUNC_1 (struct i2c_adapter*) ;

__attribute__((used)) static void FUNC_2(struct i2c_adapter *VAR_4, int VAR_5)
{
 struct davinci_i2c_dev *VAR_6 = FUNC_1(VAR_4);

 if (VAR_5)
  FUNC_0(VAR_6, VAR_3,
          VAR_2);
 else
  FUNC_0(VAR_6, VAR_1,
          VAR_0);
}
