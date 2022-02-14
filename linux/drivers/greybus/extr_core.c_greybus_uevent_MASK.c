
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobj_uevent_env {int dummy; } ;
struct gb_svc {struct gb_host_device* hd; } ;
struct gb_module {int module_id; struct gb_host_device* hd; } ;
struct gb_interface {int product_id; int vendor_id; int interface_id; struct gb_host_device* hd; struct gb_module* module; } ;
struct gb_host_device {int bus_id; } ;
struct gb_control {struct gb_interface* intf; } ;
struct gb_bundle {int class; int id; struct gb_interface* intf; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kobj_uevent_env*,char*,int ,...) ;
 int FUNC_1 (struct device*,char*) ;
 scalar_t__ FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct device*) ;
 scalar_t__ FUNC_4 (struct device*) ;
 scalar_t__ FUNC_5 (struct device*) ;
 scalar_t__ FUNC_6 (struct device*) ;
 scalar_t__ FUNC_7 (struct device*) ;
 struct gb_bundle* FUNC_8 (struct device*) ;
 struct gb_control* FUNC_9 (struct device*) ;
 struct gb_host_device* FUNC_10 (struct device*) ;
 struct gb_interface* FUNC_11 (struct device*) ;
 struct gb_module* FUNC_12 (struct device*) ;
 struct gb_svc* FUNC_13 (struct device*) ;

__attribute__((used)) static int FUNC_14(struct device *VAR_2, struct kobj_uevent_env *VAR_3)
{
 struct gb_host_device *VAR_4;
 struct gb_module *VAR_5 = ((void*)0);
 struct gb_interface *VAR_6 = ((void*)0);
 struct gb_control *VAR_7 = ((void*)0);
 struct gb_bundle *VAR_8 = ((void*)0);
 struct gb_svc *VAR_9 = ((void*)0);

 if (FUNC_4(VAR_2)) {
  VAR_4 = FUNC_10(VAR_2);
 } else if (FUNC_6(VAR_2)) {
  VAR_5 = FUNC_12(VAR_2);
  VAR_4 = VAR_5->hd;
 } else if (FUNC_5(VAR_2)) {
  VAR_6 = FUNC_11(VAR_2);
  VAR_5 = VAR_6->module;
  VAR_4 = VAR_6->hd;
 } else if (FUNC_3(VAR_2)) {
  VAR_7 = FUNC_9(VAR_2);
  VAR_6 = VAR_7->intf;
  VAR_5 = VAR_6->module;
  VAR_4 = VAR_6->hd;
 } else if (FUNC_2(VAR_2)) {
  VAR_8 = FUNC_8(VAR_2);
  VAR_6 = VAR_8->intf;
  VAR_5 = VAR_6->module;
  VAR_4 = VAR_6->hd;
 } else if (FUNC_7(VAR_2)) {
  VAR_9 = FUNC_13(VAR_2);
  VAR_4 = VAR_9->hd;
 } else {
  FUNC_1(VAR_2, "uevent for unknown greybus device \"type\"!\n");
  return -VAR_0;
 }

 if (FUNC_0(VAR_3, "BUS=%u", VAR_4->bus_id))
  return -VAR_1;

 if (VAR_5) {
  if (FUNC_0(VAR_3, "MODULE=%u", VAR_5->module_id))
   return -VAR_1;
 }

 if (VAR_6) {
  if (FUNC_0(VAR_3, "INTERFACE=%u", VAR_6->interface_id))
   return -VAR_1;
  if (FUNC_0(VAR_3, "GREYBUS_ID=%08x/%08x",
       VAR_6->vendor_id, VAR_6->product_id))
   return -VAR_1;
 }

 if (VAR_8) {





  if (FUNC_0(VAR_3, "BUNDLE=%u", VAR_8->id))
   return -VAR_1;
  if (FUNC_0(VAR_3, "BUNDLE_CLASS=%02x", VAR_8->class))
   return -VAR_1;
 }

 return 0;
}
