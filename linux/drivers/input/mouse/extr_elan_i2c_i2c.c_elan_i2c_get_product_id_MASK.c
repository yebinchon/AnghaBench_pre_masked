
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_client {int dev; } ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*,int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1, u16 *VAR_2)
{
 int VAR_3;
 u8 VAR_4[3];

 VAR_3 = FUNC_1(VAR_1, VAR_0, VAR_4);
 if (VAR_3) {
  FUNC_0(&VAR_1->dev, "failed to get product ID: %d\n", VAR_3);
  return VAR_3;
 }

 *VAR_2 = FUNC_2((__le16 *)VAR_4);
 return 0;
}
