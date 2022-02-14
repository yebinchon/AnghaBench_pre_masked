
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct i2c_adapter*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_adapter *VAR_1,
        struct i2c_msg *VAR_2, int VAR_3)
{
 struct i2c_msg *VAR_4, *VAR_5 = VAR_2 + VAR_3;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1);
 if (VAR_6)
  return VAR_6;

 for (VAR_4 = VAR_2; VAR_4 < VAR_5; VAR_4++) {

  bool VAR_7 = (VAR_4 + 1 == VAR_5) || (VAR_4->flags & VAR_0);

  VAR_6 = FUNC_1(VAR_1, VAR_4, VAR_7);
  if (VAR_6)
   return VAR_6;
 }

 return VAR_3;
}
