
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_2__ {scalar_t__ running; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_adapter*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 struct i2c_adapter* FUNC_2 (int) ;
 int FUNC_3 (struct i2c_adapter*) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_4)
{
 struct i2c_adapter *VAR_5;
 int VAR_6, VAR_7 = 0;

 VAR_5 = FUNC_2(0);
 if (!VAR_5)
  return -VAR_1;

 VAR_6 = FUNC_1(&VAR_2);
 if (VAR_6) {
  FUNC_3(VAR_5);
  return VAR_6;
 }


 while (VAR_5) {
  FUNC_0(VAR_5);
  if (VAR_3.running)
   return 0;
  FUNC_3(VAR_5);
  VAR_5 = FUNC_2(++VAR_7);
 }

 return -VAR_0;
}
