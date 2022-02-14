
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_adapter {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct i2c_adapter*,int ,int*) ;

bool FUNC_2(struct i2c_adapter *VAR_2)
{
 u8 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_0, &VAR_3);
 if (VAR_4 < 0) {
  FUNC_0("Failed to read scrambling status: %d\n", VAR_4);
  return 0;
 }

 return VAR_3 & VAR_1;
}
