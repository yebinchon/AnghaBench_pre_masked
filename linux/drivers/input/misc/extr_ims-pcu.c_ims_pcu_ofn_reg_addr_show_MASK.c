
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct ims_pcu {int cmd_mutex; int ofn_reg_addr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,char*,int ) ;
 struct usb_interface* FUNC_3 (struct device*) ;
 struct ims_pcu* FUNC_4 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
      struct device_attribute *VAR_2,
      char *VAR_3)
{
 struct usb_interface *VAR_4 = FUNC_3(VAR_1);
 struct ims_pcu *VAR_5 = FUNC_4(VAR_4);
 int VAR_6;

 FUNC_0(&VAR_5->cmd_mutex);
 VAR_6 = FUNC_2(VAR_3, VAR_0, "%x\n", VAR_5->ofn_reg_addr);
 FUNC_1(&VAR_5->cmd_mutex);

 return VAR_6;
}
