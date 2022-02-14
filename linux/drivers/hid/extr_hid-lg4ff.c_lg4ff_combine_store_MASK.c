
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct lg_drv_data {struct lg4ff_device_entry* device_props; } ;
struct TYPE_2__ {int combine; } ;
struct lg4ff_device_entry {TYPE_1__ wdata; } ;
struct hid_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct hid_device*,char*) ;
 struct lg_drv_data* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (char const*,int *,int) ;
 struct hid_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct hid_device *VAR_5 = FUNC_3(VAR_1);
 struct lg4ff_device_entry *VAR_6;
 struct lg_drv_data *VAR_7;
 u16 VAR_8 = FUNC_2(VAR_3, ((void*)0), 10);

 VAR_7 = FUNC_1(VAR_5);
 if (!VAR_7) {
  FUNC_0(VAR_5, "Private driver data not found!\n");
  return -VAR_0;
 }

 VAR_6 = VAR_7->device_props;
 if (!VAR_6) {
  FUNC_0(VAR_5, "Device properties not found!\n");
  return -VAR_0;
 }

 if (VAR_8 > 1)
  VAR_8 = 1;

 VAR_6->wdata.combine = VAR_8;
 return VAR_4;
}
