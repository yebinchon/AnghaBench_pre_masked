
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_client*,int*) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_4,
        u8 *VAR_5, int *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_4, VAR_5);
 if (VAR_7)
  return VAR_7;

 *VAR_6 = VAR_5[3];
 if (!*VAR_6 || *VAR_6 > VAR_2)
  return -VAR_0;

 if (*VAR_6 > VAR_3) {

  VAR_7 = FUNC_0(VAR_4, VAR_5 + VAR_1);
  if (VAR_7)
   return VAR_7;


  if (VAR_5[VAR_1 + 3] != 0)
   return -VAR_0;
 }

 return 0;
}
