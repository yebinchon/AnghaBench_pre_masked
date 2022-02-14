
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lg_drv_data {struct lg4ff_device_entry* device_props; } ;
struct TYPE_3__ {int alternate_modes; scalar_t__ product_id; scalar_t__ real_product_id; int real_name; } ;
struct lg4ff_device_entry {TYPE_1__ wdata; } ;
struct hid_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {scalar_t__ product_id; int name; int tag; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct hid_device*,char*) ;
 struct lg_drv_data* FUNC_2 (struct hid_device*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_3 (char*,int,char*,...) ;
 struct hid_device* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3, struct device_attribute *VAR_4, char *VAR_5)
{
 struct hid_device *VAR_6 = FUNC_4(VAR_3);
 struct lg4ff_device_entry *VAR_7;
 struct lg_drv_data *VAR_8;
 ssize_t VAR_9 = 0;
 int VAR_10;

 VAR_8 = FUNC_2(VAR_6);
 if (!VAR_8) {
  FUNC_1(VAR_6, "Private driver data not found!\n");
  return 0;
 }

 VAR_7 = VAR_8->device_props;
 if (!VAR_7) {
  FUNC_1(VAR_6, "Device properties not found!\n");
  return 0;
 }

 if (!VAR_7->wdata.real_name) {
  FUNC_1(VAR_6, "NULL pointer to string\n");
  return 0;
 }

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  if (VAR_7->wdata.alternate_modes & FUNC_0(VAR_10)) {

   VAR_9 += FUNC_3(VAR_5 + VAR_9, VAR_1 - VAR_9, "%s: %s",
        VAR_2[VAR_10].tag,
        !VAR_2[VAR_10].product_id ? VAR_7->wdata.real_name : VAR_2[VAR_10].name);
   if (VAR_9 >= VAR_1 - 1)
    return VAR_9;


   if (VAR_2[VAR_10].product_id == VAR_7->wdata.product_id ||
       (VAR_2[VAR_10].product_id == 0 && VAR_7->wdata.product_id == VAR_7->wdata.real_product_id))
    VAR_9 += FUNC_3(VAR_5 + VAR_9, VAR_1 - VAR_9, " *\n");
   else
    VAR_9 += FUNC_3(VAR_5 + VAR_9, VAR_1 - VAR_9, "\n");

   if (VAR_9 >= VAR_1 - 1)
    return VAR_9;
  }
 }

 return VAR_9;
}
