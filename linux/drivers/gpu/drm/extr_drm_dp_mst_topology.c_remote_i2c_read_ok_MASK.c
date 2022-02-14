
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; int len; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(const struct i2c_msg VAR_2[], int VAR_3)
{
 int VAR_4;

 if (VAR_3 - 1 > VAR_0)
  return 0;

 for (VAR_4 = 0; VAR_4 < VAR_3 - 1; VAR_4++) {
  if (VAR_2[VAR_4].flags & VAR_1 ||
      VAR_2[VAR_4].len > 0xff)
   return 0;
 }

 return VAR_2[VAR_3 - 1].flags & VAR_1 &&
  VAR_2[VAR_3 - 1].len <= 0xff;
}
