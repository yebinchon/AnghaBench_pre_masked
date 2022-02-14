
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_msg {int dummy; } ;
struct i2c_adapter {struct ec_i2c_device* algo_data; } ;
struct ec_i2c_device {int ec; int remote_bus; struct device* dev; } ;
struct device {int dummy; } ;
struct cros_ec_command {int outsize; int insize; int data; int command; scalar_t__ version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct cros_ec_command*) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (int ,struct i2c_msg*,int,int const) ;
 int FUNC_4 (struct i2c_msg*,int) ;
 int FUNC_5 (struct i2c_msg*,int) ;
 int FUNC_6 (int ,struct i2c_msg*,int*) ;
 int FUNC_7 (struct cros_ec_command*) ;
 struct cros_ec_command* FUNC_8 (int,int ) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static int FUNC_10(struct i2c_adapter *VAR_3, struct i2c_msg VAR_4[],
         int VAR_5)
{
 struct ec_i2c_device *VAR_6 = VAR_3->algo_data;
 struct device *VAR_7 = VAR_6->dev;
 const u16 VAR_8 = VAR_6->remote_bus;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 struct cros_ec_command *VAR_13;

 VAR_9 = FUNC_4(VAR_4, VAR_5);
 if (VAR_9 < 0) {
  FUNC_2(VAR_7, "Error constructing message %d\n", VAR_9);
  return VAR_9;
 }

 VAR_10 = FUNC_5(VAR_4, VAR_5);
 if (VAR_10 < 0) {

  FUNC_2(VAR_7, "Error preparing response %d\n", VAR_10);
  return VAR_10;
 }

 VAR_11 = FUNC_9(VAR_9, VAR_10);
 VAR_13 = FUNC_8(sizeof(*VAR_13) + VAR_11, VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_12 = FUNC_3(VAR_13->data, VAR_4, VAR_5, VAR_8);
 if (VAR_12) {
  FUNC_1(VAR_7, "Error constructing EC i2c message %d\n", VAR_12);
  goto exit;
 }

 VAR_13->version = 0;
 VAR_13->command = VAR_0;
 VAR_13->outsize = VAR_9;
 VAR_13->insize = VAR_10;

 VAR_12 = FUNC_0(VAR_6->ec, VAR_13);
 if (VAR_12 < 0) {
  FUNC_1(VAR_7, "Error transferring EC i2c message %d\n", VAR_12);
  goto exit;
 }

 VAR_12 = FUNC_6(VAR_13->data, VAR_4, &VAR_5);
 if (VAR_12 < 0)
  goto exit;


 VAR_12 = VAR_5;
exit:
 FUNC_7(VAR_13);
 return VAR_12;
}
