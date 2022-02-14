
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int dev; void* timeout_d; void* timeout_c; void* timeout_b; void* timeout_a; } ;
struct priv_data {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int adapter; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct tpm_chip*) ;
 int FUNC_1 (struct tpm_chip*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,struct priv_data*) ;
 struct priv_data* FUNC_3 (struct device*,int,int ) ;
 int VAR_6 ;
 int FUNC_4 (int ,int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct tpm_chip*) ;
 struct tpm_chip* FUNC_7 (struct device*,int *) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_7,
      const struct i2c_device_id *VAR_8)
{
 struct tpm_chip *VAR_9;
 struct device *VAR_10 = &VAR_7->dev;
 struct priv_data *VAR_11;

 if (!FUNC_4(VAR_7->adapter, VAR_3))
  return -VAR_0;

 VAR_9 = FUNC_7(VAR_10, &VAR_6);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 VAR_11 = FUNC_3(VAR_10, sizeof(struct priv_data), VAR_2);
 if (!VAR_11)
  return -VAR_1;


 VAR_9->timeout_a = FUNC_5(VAR_5);
 VAR_9->timeout_b = FUNC_5(VAR_4);
 VAR_9->timeout_c = FUNC_5(VAR_5);
 VAR_9->timeout_d = FUNC_5(VAR_5);

 FUNC_2(&VAR_9->dev, VAR_11);





 return FUNC_6(VAR_9);
}
