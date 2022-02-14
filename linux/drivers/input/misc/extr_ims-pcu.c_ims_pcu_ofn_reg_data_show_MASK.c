
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_interface {int dummy; } ;
struct ims_pcu {int cmd_mutex; int ofn_reg_addr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct ims_pcu*,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,char*,int ) ;
 struct usb_interface* FUNC_4 (struct device*) ;
 struct ims_pcu* FUNC_5 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
      struct device_attribute *VAR_2,
      char *VAR_3)
{
 struct usb_interface *VAR_4 = FUNC_4(VAR_1);
 struct ims_pcu *VAR_5 = FUNC_5(VAR_4);
 int VAR_6;
 u8 VAR_7;

 FUNC_1(&VAR_5->cmd_mutex);
 VAR_6 = FUNC_0(VAR_5, VAR_5->ofn_reg_addr, &VAR_7);
 FUNC_2(&VAR_5->cmd_mutex);

 if (VAR_6)
  return VAR_6;

 return FUNC_3(VAR_3, VAR_0, "%x\n", VAR_7);
}
