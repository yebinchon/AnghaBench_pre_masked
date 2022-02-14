
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_device_id {struct is31fl32xx_chipdef* data; } ;
struct is31fl32xx_priv {struct is31fl32xx_chipdef const* cdef; struct i2c_client* client; } ;
struct is31fl32xx_chipdef {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct device {int of_node; } ;
struct i2c_client {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct is31fl32xx_priv* FUNC_0 (struct device*,int ,int ) ;
 int FUNC_1 (struct i2c_client*,struct is31fl32xx_priv*) ;
 int FUNC_2 (struct is31fl32xx_priv*) ;
 int FUNC_3 (struct device*,struct is31fl32xx_priv*) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 struct of_device_id* FUNC_5 (int ,struct device*) ;
 int FUNC_6 (struct is31fl32xx_priv*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_5,
       const struct i2c_device_id *VAR_6)
{
 const struct is31fl32xx_chipdef *VAR_7;
 const struct of_device_id *VAR_8;
 struct device *VAR_9 = &VAR_5->dev;
 struct is31fl32xx_priv *VAR_10;
 int VAR_11;
 int VAR_12 = 0;

 VAR_8 = FUNC_5(VAR_4, VAR_9);
 if (!VAR_8)
  return -VAR_0;

 VAR_7 = VAR_8->data;

 VAR_11 = FUNC_4(VAR_9->of_node);
 if (!VAR_11)
  return -VAR_0;

 VAR_10 = FUNC_0(VAR_9, FUNC_6(VAR_10, VAR_3, VAR_11),
       VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->client = VAR_5;
 VAR_10->cdef = VAR_7;
 FUNC_1(VAR_5, VAR_10);

 VAR_12 = FUNC_2(VAR_10);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_3(VAR_9, VAR_10);
 if (VAR_12)
  return VAR_12;

 return 0;
}
