
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; } ;
struct atxp1_data {int vrm; int update_lock; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int VAR_3 ;
 int FUNC_2 (struct device*,char*,int,int) ;
 int FUNC_3 (struct device*,char*,int,int) ;
 struct device* FUNC_4 (struct device*,int ,struct atxp1_data*,int ) ;
 struct atxp1_data* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_4,
         const struct i2c_device_id *VAR_5)
{
 struct device *VAR_6 = &VAR_4->dev;
 struct atxp1_data *VAR_7;
 struct device *VAR_8;

 VAR_7 = FUNC_5(VAR_6, sizeof(struct atxp1_data), VAR_2);
 if (!VAR_7)
  return -VAR_1;


 VAR_7->vrm = FUNC_7();
 if (VAR_7->vrm != 90 && VAR_7->vrm != 91) {
  FUNC_2(VAR_6, "atxp1: Not supporting VRM %d.%d\n",
   VAR_7->vrm / 10, VAR_7->vrm % 10);
  return -VAR_0;
 }

 VAR_7->client = VAR_4;
 FUNC_6(&VAR_7->update_lock);

 VAR_8 = FUNC_4(VAR_6, VAR_4->name,
          VAR_7,
          VAR_3);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 FUNC_3(VAR_6, "Using VRM: %d.%d\n", VAR_7->vrm / 10, VAR_7->vrm % 10);

 return 0;
}
