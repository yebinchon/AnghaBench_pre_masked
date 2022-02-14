
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ last_update; int update_lock; } ;
struct ibm_cffps {int version; int* debugfs_entries; TYPE_1__ input_history; struct i2c_client* client; } ;
struct i2c_device_id {scalar_t__ driver_data; } ;
struct TYPE_5__ {int * platform_data; } ;
struct i2c_client {int name; TYPE_2__ dev; } ;
struct dentry {int dummy; } ;
typedef enum versions { ____Placeholder_versions } versions ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 struct dentry* FUNC_0 (int ,struct dentry*) ;
 int FUNC_1 (char*,int,struct dentry*,int*,int *) ;
 struct ibm_cffps* FUNC_2 (TYPE_2__*,int,int ) ;
 int FUNC_3 (struct ibm_cffps*) ;
 int VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct i2c_client*,struct i2c_device_id const*,int *) ;
 struct dentry* FUNC_7 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_14,
      const struct i2c_device_id *VAR_15)
{
 int VAR_16, VAR_17;
 enum versions VAR_18;
 struct dentry *VAR_19;
 struct dentry *VAR_20;
 struct ibm_cffps *VAR_21;
 const void *VAR_22 = FUNC_5(&VAR_14->dev);

 if (VAR_22)
  VAR_18 = (enum versions)VAR_22;
 else if (VAR_15)
  VAR_18 = (enum versions)VAR_15->driver_data;
 else
  VAR_18 = VAR_9;

 VAR_14->dev.platform_data = &VAR_12;
 VAR_17 = FUNC_6(VAR_14, VAR_15, &VAR_11[VAR_18]);
 if (VAR_17)
  return VAR_17;





 VAR_21 = FUNC_2(&VAR_14->dev, sizeof(*VAR_21), VAR_7);
 if (!VAR_21)
  return 0;

 VAR_21->version = VAR_18;
 VAR_21->client = VAR_14;
 FUNC_4(&VAR_21->input_history.update_lock);
 VAR_21->input_history.last_update = VAR_13 - VAR_8;

 FUNC_3(VAR_21);


 VAR_19 = FUNC_7(VAR_14);
 if (!VAR_19)
  return 0;

 VAR_20 = FUNC_0(VAR_14->name, VAR_19);
 if (!VAR_20)
  return 0;

 for (VAR_16 = 0; VAR_16 < VAR_4; ++VAR_16)
  VAR_21->debugfs_entries[VAR_16] = VAR_16;

 FUNC_1("input_history", 0444, VAR_20,
       &VAR_21->debugfs_entries[VAR_3],
       &VAR_10);
 FUNC_1("fru", 0444, VAR_20,
       &VAR_21->debugfs_entries[VAR_1],
       &VAR_10);
 FUNC_1("part_number", 0444, VAR_20,
       &VAR_21->debugfs_entries[VAR_5],
       &VAR_10);
 FUNC_1("serial_number", 0444, VAR_20,
       &VAR_21->debugfs_entries[VAR_6],
       &VAR_10);
 FUNC_1("ccin", 0444, VAR_20,
       &VAR_21->debugfs_entries[VAR_0],
       &VAR_10);
 FUNC_1("fw_version", 0444, VAR_20,
       &VAR_21->debugfs_entries[VAR_2],
       &VAR_10);

 return 0;
}
