
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int* block; } ;
typedef scalar_t__ u8 ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_adapter *VAR_7,
    union i2c_smbus_data *VAR_8, u8 VAR_9)
{
 int VAR_10, VAR_11;
 int VAR_12 = 0;


 FUNC_2(VAR_0, VAR_4);

 if (VAR_9 == VAR_2) {
  VAR_11 = VAR_8->block[0];
  if (VAR_11 < 1)
   VAR_11 = 1;
  else if (VAR_11 > 32)
   VAR_11 = 32;
  FUNC_2(VAR_11, VAR_6);
  FUNC_2(VAR_8->block[1], VAR_3);
 } else
  VAR_11 = 32;

 FUNC_2(FUNC_1(VAR_5) | VAR_1, VAR_5);

 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  if (VAR_9 == VAR_2) {
   FUNC_2(VAR_8->block[VAR_10 + 1], VAR_3);
   VAR_12 = FUNC_0(VAR_7);
   if (VAR_12)
    break;
  } else {
   VAR_12 = FUNC_0(VAR_7);
   if (VAR_12)
    break;
   if (VAR_10 == 0) {
    VAR_11 = FUNC_1(VAR_6);
    if (VAR_11 < 1)
     VAR_11 = 1;
    else if (VAR_11 > 32)
     VAR_11 = 32;
   }
   VAR_8->block[VAR_10+1] = FUNC_1(VAR_3);
  }
 }

 FUNC_2(VAR_0, VAR_4);
 return VAR_12;
}
