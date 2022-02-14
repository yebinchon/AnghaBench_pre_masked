
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_adapter*,int,int*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct i2c_adapter *VAR_4, u32 VAR_5)
{
 u32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_4, VAR_5, &VAR_6);
 if (VAR_7)
  return VAR_7;

 if (FUNC_1(VAR_6 & VAR_2))
  return -VAR_0;

 if (FUNC_1(VAR_6 & VAR_3))
  return -VAR_1;

 return 0;
}
