
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_client {int dev; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char*,int) ;
 int FUNC_1 (struct i2c_client*,int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_2,
     bool VAR_3, u16 *VAR_4)
{
 int VAR_5;
 u8 VAR_6[3];

 VAR_5 = FUNC_1(VAR_2,
      VAR_3 ? VAR_1 :
     VAR_0,
      VAR_6);
 if (VAR_5) {
  FUNC_0(&VAR_2->dev, "failed to get %s checksum: %d\n",
   VAR_3 ? "IAP" : "FW", VAR_5);
  return VAR_5;
 }

 *VAR_4 = FUNC_2((__le16 *)VAR_6);
 return 0;
}
