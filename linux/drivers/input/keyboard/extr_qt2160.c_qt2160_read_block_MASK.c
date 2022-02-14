
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; int adapter; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct i2c_client*,int*,unsigned int) ;
 int FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*,int) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_1,
        u8 VAR_2, u8 *VAR_3, unsigned int VAR_4)
{
 int VAR_5, VAR_6 = 0;






 if (FUNC_1(VAR_1->adapter, VAR_0)) {

  VAR_5 = FUNC_4(VAR_1, VAR_2 + VAR_6);
  if (VAR_5) {
   FUNC_0(&VAR_1->dev,
    "couldn't send request. Returned %d\n", VAR_5);
   return VAR_5;
  }

  VAR_5 = FUNC_2(VAR_1, VAR_3, VAR_4);
  if (VAR_5 != VAR_4) {
   FUNC_0(&VAR_1->dev,
    "couldn't read registers. Returned %d bytes\n", VAR_5);
   return VAR_5;
  }
 } else {

  while (VAR_4--) {
   int VAR_7;

   VAR_5 = FUNC_4(VAR_1, VAR_2 + VAR_6);
   if (VAR_5) {
    FUNC_0(&VAR_1->dev,
     "couldn't send request. Returned %d\n", VAR_5);
    return VAR_5;
   }

   VAR_7 = FUNC_3(VAR_1);
   if (VAR_7 < 0) {
    FUNC_0(&VAR_1->dev,
     "couldn't read register. Returned %d\n", VAR_7);
    return VAR_7;
   }

   VAR_3[VAR_6++] = VAR_7;
  }
 }

 return 0;
}
