
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct em_i2c_device {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct i2c_adapter*,struct i2c_msg*,int) ;
 struct em_i2c_device* FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct i2c_adapter *VAR_3, struct i2c_msg *VAR_4,
 int VAR_5)
{
 struct em_i2c_device *VAR_6 = FUNC_1(VAR_3);
 int VAR_7, VAR_8;

 if (FUNC_2(VAR_6->base + VAR_2) & VAR_1)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  VAR_7 = FUNC_0(VAR_3, &VAR_4[VAR_8], (VAR_8 == (VAR_5 - 1)));
  if (VAR_7 < 0)
   return VAR_7;
 }


 return VAR_5;
}
