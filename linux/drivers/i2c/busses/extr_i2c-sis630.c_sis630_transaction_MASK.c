
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_adapter {int dummy; } ;


 int FUNC_0 (struct i2c_adapter*,int ) ;
 int FUNC_1 (struct i2c_adapter*,int,int *) ;
 int FUNC_2 (struct i2c_adapter*,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_adapter *VAR_0, int VAR_1)
{
 int VAR_2 = 0;
 u8 VAR_3 = 0;

 VAR_2 = FUNC_1(VAR_0, VAR_1, &VAR_3);
 if (!VAR_2) {
  VAR_2 = FUNC_2(VAR_0, VAR_1);
  FUNC_0(VAR_0, VAR_3);
 }

 return VAR_2;
}
