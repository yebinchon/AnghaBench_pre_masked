
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct bu21013_ts {int touch_stopped; } ;


 struct bu21013_ts* FUNC_0 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_0)
{
 struct bu21013_ts *VAR_1 = FUNC_0(VAR_0);


 VAR_1->touch_stopped = 1;


 return 0;
}
