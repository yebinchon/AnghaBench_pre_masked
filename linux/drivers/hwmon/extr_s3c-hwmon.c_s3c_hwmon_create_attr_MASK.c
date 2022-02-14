
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* mode; int name; } ;
struct TYPE_5__ {int show; TYPE_1__ attr; } ;
struct sensor_device_attribute {int index; TYPE_2__ dev_attr; } ;
struct s3c_hwmon_chcfg {scalar_t__ name; } ;
struct s3c_hwmon_attr {struct sensor_device_attribute in; int label_name; struct sensor_device_attribute label; int in_name; } ;
struct device {int dummy; } ;


 void* VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,TYPE_2__*) ;
 int FUNC_2 (struct device*,TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int,char*,int) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_3,
     struct s3c_hwmon_chcfg *VAR_4,
     struct s3c_hwmon_attr *VAR_5,
     int VAR_6)
{
 struct sensor_device_attribute *VAR_7;
 int VAR_8;

 FUNC_3(VAR_5->in_name, sizeof(VAR_5->in_name), "in%d_input", VAR_6);

 VAR_7 = &VAR_5->in;
 VAR_7->index = VAR_6;
 FUNC_4(&VAR_7->dev_attr.attr);
 VAR_7->dev_attr.attr.name = VAR_5->in_name;
 VAR_7->dev_attr.attr.mode = VAR_0;
 VAR_7->dev_attr.show = VAR_1;

 VAR_8 = FUNC_1(VAR_3, &VAR_7->dev_attr);
 if (VAR_8 < 0) {
  FUNC_0(VAR_3, "failed to create input attribute\n");
  return VAR_8;
 }


 if (VAR_4->name) {
  FUNC_3(VAR_5->label_name, sizeof(VAR_5->label_name),
    "in%d_label", VAR_6);

  VAR_7 = &VAR_5->label;
  VAR_7->index = VAR_6;
  FUNC_4(&VAR_7->dev_attr.attr);
  VAR_7->dev_attr.attr.name = VAR_5->label_name;
  VAR_7->dev_attr.attr.mode = VAR_0;
  VAR_7->dev_attr.show = VAR_2;

  VAR_8 = FUNC_1(VAR_3, &VAR_7->dev_attr);
  if (VAR_8 < 0) {
   FUNC_2(VAR_3, &VAR_5->in.dev_attr);
   FUNC_0(VAR_3, "failed to create label attribute\n");
  }
 }

 return VAR_8;
}
