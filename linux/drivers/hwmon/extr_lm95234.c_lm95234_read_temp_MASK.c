
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_client {int dummy; } ;
typedef int s16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0, int VAR_1, int *VAR_2)
{
 int VAR_3;
 u16 VAR_4 = 0;

 if (VAR_1) {
  VAR_3 = FUNC_4(VAR_0,
            FUNC_2(VAR_1 - 1));
  if (VAR_3 < 0)
   return VAR_3;
  VAR_4 = VAR_3 << 8;
  VAR_3 = FUNC_4(VAR_0,
            FUNC_3(VAR_1 - 1));
  if (VAR_3 < 0)
   return VAR_3;
  VAR_4 |= VAR_3;
  *VAR_2 = VAR_4;
 }




 if (!VAR_4) {
  VAR_3 = FUNC_4(VAR_0,
            FUNC_0(VAR_1));
  if (VAR_3 < 0)
   return VAR_3;
  VAR_4 = VAR_3 << 8;
  VAR_3 = FUNC_4(VAR_0,
            FUNC_1(VAR_1));
  if (VAR_3 < 0)
   return VAR_3;
  VAR_4 |= VAR_3;
  *VAR_2 = (s16)VAR_4;
 }
 return 0;
}
