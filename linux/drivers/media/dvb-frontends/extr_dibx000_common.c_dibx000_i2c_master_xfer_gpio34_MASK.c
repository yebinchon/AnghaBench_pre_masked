
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; } ;
struct i2c_adapter {int dummy; } ;
struct dibx000_i2c_master {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dibx000_i2c_master*,int ) ;
 int FUNC_1 (struct dibx000_i2c_master*,struct i2c_msg*) ;
 int FUNC_2 (struct dibx000_i2c_master*,struct i2c_msg*,int) ;
 struct dibx000_i2c_master* FUNC_3 (struct i2c_adapter*) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_2, struct i2c_msg VAR_3[], int VAR_4)
{
 struct dibx000_i2c_master *VAR_5 = FUNC_3(VAR_2);
 int VAR_6;
 int VAR_7 = 0;

 FUNC_0(VAR_5, VAR_0);
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  if (VAR_3[VAR_6].flags & VAR_1) {
   VAR_7 = FUNC_1(VAR_5, &VAR_3[VAR_6]);
   if (VAR_7 != 0)
    return 0;
  } else {
   VAR_7 = FUNC_2(VAR_5, &VAR_3[VAR_6], 1);
   if (VAR_7 != 0)
    return 0;
  }
 }

 return VAR_4;
}
