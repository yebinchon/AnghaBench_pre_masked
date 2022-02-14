
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct lg_drv_data {struct lg4ff_device_entry* device_props; } ;
struct TYPE_3__ {int alternate_modes; scalar_t__ real_product_id; scalar_t__ product_id; int real_name; } ;
struct lg4ff_device_entry {TYPE_1__ wdata; } ;
struct lg4ff_compat_mode_switch {int dummy; } ;
struct hid_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {scalar_t__ product_id; char* tag; int name; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct hid_device*,char*,...) ;
 struct lg_drv_data* FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct hid_device*,char*,char*,...) ;
 char* FUNC_4 (int ,char*,char const*) ;
 int FUNC_5 (char*) ;
 TYPE_2__* VAR_7 ;
 struct lg4ff_compat_mode_switch* FUNC_6 (scalar_t__,scalar_t__) ;
 int VAR_8 ;
 int FUNC_7 (struct hid_device*,struct lg4ff_compat_mode_switch const*) ;
 int FUNC_8 (char const*,char*) ;
 int FUNC_9 (char*) ;
 struct hid_device* FUNC_10 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_9, struct device_attribute *VAR_10, const char *VAR_11, size_t VAR_12)
{
 struct hid_device *VAR_13 = FUNC_10(VAR_9);
 struct lg4ff_device_entry *VAR_14;
 struct lg_drv_data *VAR_15;
 const struct lg4ff_compat_mode_switch *VAR_16;
 u16 VAR_17 = 0;
 int VAR_18, VAR_19;
 char *VAR_20;

 VAR_15 = FUNC_2(VAR_13);
 if (!VAR_15) {
  FUNC_1(VAR_13, "Private driver data not found!\n");
  return -VAR_0;
 }

 VAR_14 = VAR_15->device_props;
 if (!VAR_14) {
  FUNC_1(VAR_13, "Device properties not found!\n");
  return -VAR_0;
 }


 VAR_20 = FUNC_4(VAR_2, "%s", VAR_11);
 if (!VAR_20)
  return -VAR_1;

 VAR_18 = FUNC_9(VAR_20);
 if (VAR_20[VAR_18-1] == '\n') {
  if (VAR_18 == 1) {
   FUNC_5(VAR_20);
   return -VAR_0;
  }
  VAR_20[VAR_18-1] = '\0';
 }

 for (VAR_18 = 0; VAR_18 < VAR_3; VAR_18++) {
  const u16 VAR_21 = VAR_7[VAR_18].product_id;
  const char *VAR_22 = VAR_7[VAR_18].tag;

  if (VAR_14->wdata.alternate_modes & FUNC_0(VAR_18)) {
   if (!FUNC_8(VAR_22, VAR_20)) {
    if (!VAR_21)
     VAR_17 = VAR_14->wdata.real_product_id;
    else
     VAR_17 = VAR_21;
    break;
   }
  }
 }

 if (VAR_18 == VAR_3) {
  FUNC_3(VAR_13, "Requested mode \"%s\" is not supported by the device\n", VAR_20);
  FUNC_5(VAR_20);
  return -VAR_0;
 }
 FUNC_5(VAR_20);

 if (VAR_17 == VAR_14->wdata.product_id)
  return VAR_12;


 if (VAR_17 == VAR_6 && !VAR_8) {
  FUNC_3(VAR_13, "\"%s\" cannot be switched to \"DF-EX\" mode. Load the \"hid_logitech\" module with \"lg4ff_no_autoswitch=1\" parameter set and try again\n",
    VAR_14->wdata.real_name);
  return -VAR_0;
 }


 if ((VAR_14->wdata.real_product_id == VAR_4 || VAR_14->wdata.real_product_id == VAR_5) &&
     VAR_14->wdata.product_id > VAR_17) {
  FUNC_3(VAR_13, "\"%s\" cannot be switched back into \"%s\" mode\n", VAR_14->wdata.real_name, VAR_7[VAR_18].name);
  return -VAR_0;
 }

 VAR_16 = FUNC_6(VAR_14->wdata.real_product_id, VAR_17);
 if (!VAR_16) {
  FUNC_1(VAR_13, "Invalid target product ID %X\n", VAR_17);
  return -VAR_0;
 }

 VAR_19 = FUNC_7(VAR_13, VAR_16);
 return (VAR_19 == 0 ? VAR_12 : VAR_19);
}
