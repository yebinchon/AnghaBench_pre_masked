
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct wf_ad7417_priv {int cpu; struct mpu_data const* mpu; struct i2c_client* i2c; int lock; int ref; } ;
struct mpu_data {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_4__ {int of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,struct wf_ad7417_priv*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (int *) ;
 struct wf_ad7417_priv* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int ,char*,int *) ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (char const*,char*,int) ;
 int VAR_3 ;
 int FUNC_9 (struct wf_ad7417_priv*,int,char*,int *) ;
 int FUNC_10 (struct wf_ad7417_priv*) ;
 int VAR_4 ;
 struct mpu_data* FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_5,
      const struct i2c_device_id *VAR_6)
{
 struct wf_ad7417_priv *VAR_7;
 const struct mpu_data *VAR_8;
 const char *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_6(VAR_5->dev.of_node, "hwsensor-location", ((void*)0));
 if (!VAR_9) {
  FUNC_2(&VAR_5->dev, "Missing hwsensor-location property!\n");
  return -VAR_1;
 }





 if (!FUNC_8(VAR_9, "CPU A", 5))
  VAR_10 = 0;
 else if (!FUNC_8(VAR_9, "CPU B", 5))
  VAR_10 = 1;
 else {
  FUNC_7("wf_ad7417: Can't identify location %s\n", VAR_9);
  return -VAR_1;
 }
 VAR_8 = FUNC_11(VAR_10);
 if (!VAR_8) {
  FUNC_0(&VAR_5->dev, "Failed to retrieve MPU data\n");
  return -VAR_1;
 }

 VAR_7 = FUNC_4(sizeof(struct wf_ad7417_priv), VAR_2);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 FUNC_3(&VAR_7->ref);
 FUNC_5(&VAR_7->lock);
 VAR_7->i2c = VAR_5;
 VAR_7->cpu = VAR_10;
 VAR_7->mpu = VAR_8;
 FUNC_1(&VAR_5->dev, VAR_7);


 FUNC_10(VAR_7);






 FUNC_9(VAR_7, 0, "cpu-amb-temp", &VAR_4);
 FUNC_9(VAR_7, 1, "cpu-diode-temp", &VAR_3);
 FUNC_9(VAR_7, 2, "cpu-12v-current", &VAR_3);
 FUNC_9(VAR_7, 3, "cpu-voltage", &VAR_3);
 FUNC_9(VAR_7, 4, "cpu-current", &VAR_3);

 return 0;
}
