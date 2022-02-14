
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct i2c_client*,int ,int *,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;
 int FUNC_3 (struct i2c_client*,int *,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 int VAR_9;
 u8 VAR_10[256];

 VAR_9 = FUNC_2(VAR_7, VAR_6, VAR_5);
 if (VAR_9) {
  FUNC_0(VAR_8, "device reset failed: %d\n", VAR_9);
  return VAR_9;
 }


 FUNC_4(100);


 VAR_9 = FUNC_3(VAR_7, VAR_10, VAR_2);
 if (VAR_9 < 0) {
  FUNC_0(VAR_8, "failed to read reset response: %d\n", VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_1(VAR_7, VAR_0,
        VAR_10, VAR_1);
 if (VAR_9) {
  FUNC_0(VAR_8, "cannot get device descriptor: %d\n", VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_1(VAR_7, VAR_3,
        VAR_10, VAR_4);
 if (VAR_9) {
  FUNC_0(VAR_8, "fetching report descriptor failed.: %d\n", VAR_9);
  return VAR_9;
 }

 return 0;
}
