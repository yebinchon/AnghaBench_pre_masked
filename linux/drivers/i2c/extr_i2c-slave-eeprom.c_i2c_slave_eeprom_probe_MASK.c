
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct i2c_device_id {int driver_data; } ;
struct TYPE_8__ {int kobj; } ;
struct i2c_client {TYPE_5__ dev; } ;
struct TYPE_6__ {char* name; int mode; } ;
struct TYPE_7__ {unsigned int size; int write; int read; TYPE_1__ attr; } ;
struct eeprom_data {int num_address_bytes; unsigned int address_mask; TYPE_2__ bin; int buffer_lock; void* read_only; scalar_t__ idx_write_cnt; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct eeprom_data* FUNC_1 (TYPE_5__*,int,int ) ;
 int FUNC_2 (struct i2c_client*,struct eeprom_data*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 int FUNC_7 (int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_10, const struct i2c_device_id *VAR_11)
{
 struct eeprom_data *VAR_12;
 int VAR_13;
 unsigned int VAR_14 = FUNC_0(VAR_2, VAR_11->driver_data);
 unsigned int VAR_15 = FUNC_0(VAR_3, VAR_11->driver_data);

 VAR_12 = FUNC_1(&VAR_10->dev, sizeof(struct eeprom_data) + VAR_14, VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_12->idx_write_cnt = 0;
 VAR_12->num_address_bytes = VAR_15 ? 2 : 1;
 VAR_12->address_mask = VAR_14 - 1;
 VAR_12->read_only = FUNC_0(VAR_4, VAR_11->driver_data);
 FUNC_4(&VAR_12->buffer_lock);
 FUNC_2(VAR_10, VAR_12);

 FUNC_5(&VAR_12->bin);
 VAR_12->bin.attr.name = "slave-eeprom";
 VAR_12->bin.attr.mode = VAR_5 | VAR_6;
 VAR_12->bin.read = VAR_7;
 VAR_12->bin.write = VAR_8;
 VAR_12->bin.size = VAR_14;

 VAR_13 = FUNC_6(&VAR_10->dev.kobj, &VAR_12->bin);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_3(VAR_10, VAR_9);
 if (VAR_13) {
  FUNC_7(&VAR_10->dev.kobj, &VAR_12->bin);
  return VAR_13;
 }

 return 0;
}
