
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u32 ;
struct hwmon_ops {int (* is_visible ) (void const*,int,int ,int) ;int write; int read; int read_string; } ;
struct attribute {char const* name; int mode; } ;
struct device_attribute {struct attribute attr; int store; int show; } ;
struct hwmon_device_attribute {char* name; int type; int index; struct device_attribute dev_attr; struct hwmon_ops const* ops; int attr; } ;
struct device {int dummy; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct attribute* FUNC_0 (int ) ;
 int VAR_3 ;
 struct hwmon_device_attribute* FUNC_1 (struct device*,int,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int,char const*,scalar_t__) ;
 int FUNC_5 (void const*,int,int ,int) ;
 int FUNC_6 (struct attribute*) ;

__attribute__((used)) static struct attribute *FUNC_7(struct device *VAR_8,
           const void *VAR_9,
           enum hwmon_sensor_types VAR_10,
           u32 VAR_11,
           int VAR_12,
           const char *VAR_13,
           const struct hwmon_ops *VAR_14)
{
 struct hwmon_device_attribute *VAR_15;
 struct device_attribute *VAR_16;
 struct attribute *VAR_17;
 umode_t VAR_18;
 const char *VAR_19;
 bool VAR_20 = FUNC_3(VAR_10, VAR_11);


 if (!VAR_13)
  return FUNC_0(-VAR_1);

 VAR_18 = VAR_14->is_visible(VAR_9, VAR_10, VAR_11, VAR_12);
 if (!VAR_18)
  return FUNC_0(-VAR_1);

 if ((VAR_18 & 0444) && ((VAR_20 && !VAR_14->read_string) ||
     (!VAR_20 && !VAR_14->read)))
  return FUNC_0(-VAR_0);
 if ((VAR_18 & 0222) && !VAR_14->write)
  return FUNC_0(-VAR_0);

 VAR_15 = FUNC_1(VAR_8, sizeof(*VAR_15), VAR_3);
 if (!VAR_15)
  return FUNC_0(-VAR_2);

 if (VAR_10 == VAR_7) {
  VAR_19 = VAR_13;
 } else {
  FUNC_4(VAR_15->name, sizeof(VAR_15->name), VAR_13,
     VAR_12 + FUNC_2(VAR_10));
  VAR_19 = VAR_15->name;
 }

 VAR_15->type = VAR_10;
 VAR_15->attr = VAR_11;
 VAR_15->index = VAR_12;
 VAR_15->ops = VAR_14;

 VAR_16 = &VAR_15->dev_attr;
 VAR_16->show = VAR_20 ? VAR_5 : VAR_4;
 VAR_16->store = VAR_6;

 VAR_17 = &VAR_16->attr;
 FUNC_6(VAR_17);
 VAR_17->name = VAR_19;
 VAR_17->mode = VAR_18;

 return VAR_17;
}
