
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static u16 FUNC_4(struct i2c_client *VAR_1, u8 VAR_2)
{
 int VAR_3, VAR_4;


 for (VAR_4 = 1; VAR_4 <= VAR_0; VAR_4++) {
  VAR_3 = FUNC_2(VAR_1, VAR_2);
  if (VAR_3 >= 0) {
   return VAR_3;
  } else {
   FUNC_1(&VAR_1->dev,
     "lm93: read word data failed, address 0x%02x.\n",
     VAR_2);
   FUNC_3(VAR_4 + 3);
  }

 }


 FUNC_0(&VAR_1->dev, "lm93: All read word retries failed!!\n");
 return 0;
}
