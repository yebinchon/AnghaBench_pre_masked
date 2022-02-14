
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lg_drv_data {struct lg4ff_device_entry* device_props; } ;
struct TYPE_2__ {int range; } ;
struct lg4ff_device_entry {TYPE_1__ wdata; } ;
struct hid_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct hid_device*,char*) ;
 struct lg_drv_data* FUNC_1 (struct hid_device*) ;
 size_t FUNC_2 (char*,int ,char*,int ) ;
 struct hid_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct hid_device *VAR_4 = FUNC_3(VAR_1);
 struct lg4ff_device_entry *VAR_5;
 struct lg_drv_data *VAR_6;
 size_t VAR_7;

 VAR_6 = FUNC_1(VAR_4);
 if (!VAR_6) {
  FUNC_0(VAR_4, "Private driver data not found!\n");
  return 0;
 }

 VAR_5 = VAR_6->device_props;
 if (!VAR_5) {
  FUNC_0(VAR_4, "Device properties not found!\n");
  return 0;
 }

 VAR_7 = FUNC_2(VAR_3, VAR_0, "%u\n", VAR_5->wdata.range);
 return VAR_7;
}
