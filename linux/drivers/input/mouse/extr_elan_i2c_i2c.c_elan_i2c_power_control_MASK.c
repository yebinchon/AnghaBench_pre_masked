
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
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*,int ,int *) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_2, bool VAR_3)
{
 u8 VAR_4[2];
 u16 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_1, VAR_4);
 if (VAR_6) {
  FUNC_0(&VAR_2->dev,
   "failed to read current power state: %d\n",
   VAR_6);
  return VAR_6;
 }

 VAR_5 = FUNC_3((__le16 *)VAR_4);
 if (VAR_3)
  VAR_5 &= ~VAR_0;
 else
  VAR_5 |= VAR_0;

 VAR_6 = FUNC_2(VAR_2, VAR_1, VAR_5);
 if (VAR_6) {
  FUNC_0(&VAR_2->dev,
   "failed to write current power state: %d\n",
   VAR_6);
  return VAR_6;
 }

 return 0;
}
