
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct pca9532_platform_data {int dummy; } ;
struct pca9532_data {int update_lock; struct i2c_client* client; int * chip_info; } ;
struct of_device_id {scalar_t__ data; } ;
struct i2c_device_id {int driver_data; } ;
struct TYPE_7__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_1__ dev; int adapter; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct pca9532_platform_data*) ;
 int FUNC_1 (struct pca9532_platform_data*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct pca9532_platform_data* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 struct pca9532_data* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (int ,int ) ;
 struct pca9532_data* FUNC_7 (struct i2c_client*) ;
 int FUNC_8 (struct i2c_client*,struct pca9532_data*) ;
 int FUNC_9 (int *) ;
 struct of_device_id* FUNC_10 (int ,TYPE_1__*) ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_11 (struct i2c_client*,struct pca9532_data*,struct pca9532_platform_data*) ;
 struct pca9532_platform_data* FUNC_12 (TYPE_1__*,struct device_node*) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_7,
 const struct i2c_device_id *VAR_8)
{
 int VAR_9;
 const struct of_device_id *VAR_10;
 struct pca9532_data *VAR_11 = FUNC_7(VAR_7);
 struct pca9532_platform_data *VAR_12 =
   FUNC_3(&VAR_7->dev);
 struct device_node *VAR_13 = VAR_7->dev.of_node;

 if (!VAR_12) {
  if (VAR_13) {
   VAR_12 =
    FUNC_12(&VAR_7->dev, VAR_13);
   if (FUNC_0(VAR_12))
    return FUNC_1(VAR_12);
  } else {
   FUNC_2(&VAR_7->dev, "no platform data\n");
   return -VAR_0;
  }
  VAR_10 = FUNC_10(VAR_5,
    &VAR_7->dev);
  if (FUNC_13(!VAR_10))
   return -VAR_0;
  VAR_9 = (int)(uintptr_t) VAR_10->data;
 } else {
  VAR_9 = VAR_8->driver_data;
 }

 if (!FUNC_6(VAR_7->adapter,
  VAR_4))
  return -VAR_1;

 VAR_11 = FUNC_5(&VAR_7->dev, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_11->chip_info = &VAR_6[VAR_9];

 FUNC_4(&VAR_7->dev, "setting platform data\n");
 FUNC_8(VAR_7, VAR_11);
 VAR_11->client = VAR_7;
 FUNC_9(&VAR_11->update_lock);

 return FUNC_11(VAR_7, VAR_11, VAR_12);
}
