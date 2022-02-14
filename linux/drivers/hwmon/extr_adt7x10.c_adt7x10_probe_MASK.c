
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int kobj; } ;
struct adt7x10_ops {int dummy; } ;
struct adt7x10_data {char const* name; int oldconfig; int config; int hwmon_dev; int update_lock; struct adt7x10_ops const* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct device*,int ) ;
 int FUNC_4 (struct device*,int ,int) ;
 int VAR_13 ;
 int FUNC_5 (struct device*,char*,int) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*,struct adt7x10_data*) ;
 int FUNC_8 (struct device*,int *) ;
 int FUNC_9 (struct device*,int *) ;
 struct adt7x10_data* FUNC_10 (struct device*,int,int ) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int,int *,int ,int,int ,struct device*) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int *) ;

int FUNC_17(struct device *VAR_14, const char *VAR_15, int VAR_16,
    const struct adt7x10_ops *VAR_17)
{
 struct adt7x10_data *VAR_18;
 int VAR_19;

 VAR_18 = FUNC_10(VAR_14, sizeof(*VAR_18), VAR_8);
 if (!VAR_18)
  return -VAR_7;

 VAR_18->ops = VAR_17;
 VAR_18->name = VAR_15;

 FUNC_7(VAR_14, VAR_18);
 FUNC_13(&VAR_18->update_lock);


 VAR_19 = FUNC_3(VAR_14, VAR_0);
 if (VAR_19 < 0) {
  FUNC_5(VAR_14, "Can't read config? %d\n", VAR_19);
  return VAR_19;
 }
 VAR_18->oldconfig = VAR_19;




 VAR_18->config = VAR_18->oldconfig;
 VAR_18->config &= ~(VAR_5 | VAR_1 |
   VAR_4);
 VAR_18->config |= VAR_3 | VAR_6 | VAR_2;

 if (VAR_18->config != VAR_18->oldconfig) {
  VAR_19 = FUNC_4(VAR_14, VAR_0, VAR_18->config);
  if (VAR_19)
   return VAR_19;
 }
 FUNC_5(VAR_14, "Config %02x\n", VAR_18->config);

 VAR_19 = FUNC_2(VAR_14);
 if (VAR_19)
  goto exit_restore;


 VAR_19 = FUNC_15(&VAR_14->kobj, &VAR_11);
 if (VAR_19)
  goto exit_restore;






 if (VAR_15) {
  VAR_19 = FUNC_8(VAR_14, &VAR_13);
  if (VAR_19)
   goto exit_remove;
 }

 VAR_18->hwmon_dev = FUNC_11(VAR_14);
 if (FUNC_0(VAR_18->hwmon_dev)) {
  VAR_19 = FUNC_1(VAR_18->hwmon_dev);
  goto exit_remove_name;
 }

 if (VAR_16 > 0) {
  VAR_19 = FUNC_14(VAR_16, ((void*)0), VAR_12,
    VAR_10 | VAR_9,
    FUNC_6(VAR_14), VAR_14);
  if (VAR_19)
   goto exit_hwmon_device_unregister;
 }

 return 0;

exit_hwmon_device_unregister:
 FUNC_12(VAR_18->hwmon_dev);
exit_remove_name:
 if (VAR_15)
  FUNC_9(VAR_14, &VAR_13);
exit_remove:
 FUNC_16(&VAR_14->kobj, &VAR_11);
exit_restore:
 FUNC_4(VAR_14, VAR_0, VAR_18->oldconfig);
 return VAR_19;
}
