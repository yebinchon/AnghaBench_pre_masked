
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct dw_i2c_dev {int rst; } ;


 int FUNC_0 (struct dw_i2c_dev*) ;
 int FUNC_1 (struct dw_i2c_dev*,int) ;
 struct dw_i2c_dev* FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct i2c_adapter *VAR_0)
{
 struct dw_i2c_dev *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1, 1);
 FUNC_3(VAR_1->rst);
 FUNC_0(VAR_1);
}
