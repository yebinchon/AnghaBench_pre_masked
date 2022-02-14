
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;
typedef enum tp_mode { ____Placeholder_tp_mode } tp_mode ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct i2c_client*,int*) ;
 int FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int ,int *) ;
 int FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 int VAR_7;
 enum tp_mode VAR_8;
 u8 VAR_9[3];
 u16 VAR_10;


 VAR_7 = FUNC_1(VAR_5, &VAR_8);
 if (VAR_7)
  return VAR_7;

 if (VAR_8 == VAR_3) {

  VAR_7 = FUNC_2(VAR_5);
  if (VAR_7)
   return VAR_7;

  FUNC_6(30);
 }


 VAR_7 = FUNC_4(VAR_5);
 if (VAR_7)
  return VAR_7;


 FUNC_6(VAR_8 == VAR_4 ? 100 : 30);


 VAR_7 = FUNC_1(VAR_5, &VAR_8);
 if (VAR_7)
  return VAR_7;

 if (VAR_8 == VAR_4) {
  FUNC_0(VAR_6, "wrong mode: %d\n", VAR_8);
  return -VAR_0;
 }


 VAR_7 = FUNC_4(VAR_5);
 if (VAR_7)
  return VAR_7;


 FUNC_6(30);


 VAR_7 = FUNC_3(VAR_5, VAR_1, VAR_9);
 if (VAR_7) {
  FUNC_0(VAR_6, "cannot read iap password: %d\n",
   VAR_7);
  return VAR_7;
 }

 VAR_10 = FUNC_5((__le16 *)VAR_9);
 if (VAR_10 != VAR_2) {
  FUNC_0(VAR_6, "wrong iap password: 0x%X\n", VAR_10);
  return -VAR_0;
 }

 return 0;
}
