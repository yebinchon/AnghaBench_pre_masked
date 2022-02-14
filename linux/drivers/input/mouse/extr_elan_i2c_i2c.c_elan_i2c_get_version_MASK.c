
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct i2c_client*,int*) ;
 int FUNC_2 (struct i2c_client*,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_2,
    bool VAR_3, u8 *VAR_4)
{
 int VAR_5;
 u8 VAR_6;
 u8 VAR_7[3];

 VAR_5 = FUNC_1(VAR_2, &VAR_6);
 if (VAR_5) {
  FUNC_0(&VAR_2->dev, "failed to get pattern version\n");
  return VAR_5;
 }

 VAR_5 = FUNC_2(VAR_2,
      VAR_3 ? VAR_1 :
     VAR_0,
      VAR_7);
 if (VAR_5) {
  FUNC_0(&VAR_2->dev, "failed to get %s version: %d\n",
   VAR_3 ? "IAP" : "FW", VAR_5);
  return VAR_5;
 }

 if (VAR_6 == 0x01)
  *VAR_4 = VAR_3 ? VAR_7[1] : VAR_7[0];
 else
  *VAR_4 = VAR_7[0];
 return 0;
}
