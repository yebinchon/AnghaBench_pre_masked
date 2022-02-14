
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct i2c_msg {int dummy; } ;
struct TYPE_7__ {int parent; } ;
struct i2c_adapter {TYPE_2__ dev; } ;
struct TYPE_6__ {int parent; } ;
struct TYPE_9__ {TYPE_1__ dev; } ;
struct dibx000_i2c_master {int i2c_addr; int base_reg; int i2c_buffer_lock; TYPE_3__* msg; int i2c_write_buffer; TYPE_5__ master_i2c_adap_gpio67; struct i2c_adapter* i2c_adap; TYPE_5__ master_i2c_adap_gpio34; TYPE_5__ master_i2c_adap_gpio12; TYPE_5__ gated_tuner_i2c_adap; scalar_t__ device_rev; } ;
struct TYPE_8__ {int addr; int len; int buf; scalar_t__ flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dibx000_i2c_master*,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_5__*,int *,char*,struct dibx000_i2c_master*) ;
 int FUNC_3 (struct i2c_adapter*,TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;

int FUNC_9(struct dibx000_i2c_master *VAR_7, u16 VAR_8,
    struct i2c_adapter *VAR_9, u8 VAR_10)
{
 int VAR_11;

 FUNC_5(&VAR_7->i2c_buffer_lock);
 if (FUNC_6(&VAR_7->i2c_buffer_lock) < 0) {
  FUNC_1("could not acquire lock\n");
  return -VAR_2;
 }
 FUNC_4(VAR_7->msg, 0, sizeof(struct i2c_msg));
 VAR_7->msg[0].addr = VAR_10 >> 1;
 VAR_7->msg[0].flags = 0;
 VAR_7->msg[0].buf = VAR_7->i2c_write_buffer;
 VAR_7->msg[0].len = 4;

 VAR_7->device_rev = VAR_8;
 VAR_7->i2c_adap = VAR_9;
 VAR_7->i2c_addr = VAR_10 >> 1;

 if (VAR_8 == VAR_0 || VAR_8 == VAR_1)
  VAR_7->base_reg = 1024;
 else
  VAR_7->base_reg = 768;

 VAR_7->gated_tuner_i2c_adap.dev.parent = VAR_7->i2c_adap->dev.parent;
 if (FUNC_2
   (&VAR_7->gated_tuner_i2c_adap, &VAR_4,
    "DiBX000 tuner I2C bus", VAR_7) != 0)
  FUNC_8("could not initialize the tuner i2c_adapter\n");

 VAR_7->master_i2c_adap_gpio12.dev.parent = VAR_7->i2c_adap->dev.parent;
 if (FUNC_2
   (&VAR_7->master_i2c_adap_gpio12, &VAR_5,
    "DiBX000 master GPIO12 I2C bus", VAR_7) != 0)
  FUNC_8("could not initialize the master i2c_adapter\n");

 VAR_7->master_i2c_adap_gpio34.dev.parent = VAR_7->i2c_adap->dev.parent;
 if (FUNC_2
   (&VAR_7->master_i2c_adap_gpio34, &VAR_6,
    "DiBX000 master GPIO34 I2C bus", VAR_7) != 0)
  FUNC_8("could not initialize the master i2c_adapter\n");

 VAR_7->master_i2c_adap_gpio67.dev.parent = VAR_7->i2c_adap->dev.parent;
 if (FUNC_2
   (&VAR_7->master_i2c_adap_gpio67, &VAR_3,
    "DiBX000 master GPIO67 I2C bus", VAR_7) != 0)
  FUNC_8("could not initialize the master i2c_adapter\n");


 FUNC_0(VAR_7, VAR_7->i2c_write_buffer, 0, 0);

 VAR_11 = (FUNC_3(VAR_9, VAR_7->msg, 1) == 1);
 FUNC_7(&VAR_7->i2c_buffer_lock);

 return VAR_11;
}
