
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pca9541 {struct i2c_client* client; } ;
struct i2c_mux_core {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int name; int dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct i2c_adapter*,int ) ;
 int FUNC_2 (struct i2c_adapter*,int ) ;
 int FUNC_3 (struct i2c_mux_core*,int ,int ,int ) ;
 struct i2c_mux_core* FUNC_4 (struct i2c_adapter*,int *,int,int,int ,int ,int ) ;
 struct pca9541* FUNC_5 (struct i2c_mux_core*) ;
 int FUNC_6 (struct i2c_client*,struct i2c_mux_core*) ;
 int FUNC_7 (struct i2c_adapter*,int ) ;
 int FUNC_8 (struct i2c_client*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_7,
    const struct i2c_device_id *VAR_8)
{
 struct i2c_adapter *VAR_9 = VAR_7->adapter;
 struct i2c_mux_core *VAR_10;
 struct pca9541 *VAR_11;
 int VAR_12;

 if (!FUNC_1(VAR_9, VAR_2))
  return -VAR_0;





 FUNC_2(VAR_9, VAR_3);
 FUNC_8(VAR_7);
 FUNC_7(VAR_9, VAR_3);



 VAR_10 = FUNC_4(VAR_9, &VAR_7->dev, 1, sizeof(*VAR_11),
        VAR_4,
        VAR_6, VAR_5);
 if (!VAR_10)
  return -VAR_1;

 VAR_11 = FUNC_5(VAR_10);
 VAR_11->client = VAR_7;

 FUNC_6(VAR_7, VAR_10);

 VAR_12 = FUNC_3(VAR_10, 0, 0, 0);
 if (VAR_12)
  return VAR_12;

 FUNC_0(&VAR_7->dev, "registered master selector for I2C %s\n",
   VAR_7->name);

 return 0;
}
