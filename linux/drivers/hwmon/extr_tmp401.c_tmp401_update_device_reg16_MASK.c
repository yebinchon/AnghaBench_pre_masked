
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tmp401_data {scalar_t__ kind; int** temp; } ;
struct i2c_client {int dummy; } ;


 int ** VAR_0 ;
 int ** VAR_1 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_4,
          struct tmp401_data *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 int VAR_9 = VAR_5->kind == VAR_2 ? 6 : 4;
 int VAR_10 = VAR_5->kind == VAR_3 ? 3 : 2;

 for (VAR_6 = 0; VAR_6 < VAR_10; VAR_6++) {
  for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
   u8 VAR_11;

   VAR_11 = VAR_5->kind == VAR_3 ?
      VAR_1[VAR_7][VAR_6] :
      VAR_0[VAR_7][VAR_6];
   if (VAR_7 == 3) {
    VAR_8 = FUNC_0(VAR_4, VAR_11);
   } else {
    VAR_8 = FUNC_1(VAR_4,
          VAR_11);
   }
   if (VAR_8 < 0)
    return VAR_8;

   VAR_5->temp[VAR_7][VAR_6] = VAR_7 == 3 ? VAR_8 << 8 : VAR_8;
  }
 }
 return 0;
}
