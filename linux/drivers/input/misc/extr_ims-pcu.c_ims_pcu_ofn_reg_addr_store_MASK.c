
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


 int FUNC_0 (char const*,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct usb_interface* FUNC_3 (struct device*) ;
 struct ims_pcu* FUNC_4 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
       struct device_attribute *VAR_1,
       const char *VAR_2, size_t VAR_3)
{
 struct usb_interface *VAR_4 = FUNC_3(VAR_0);
 struct ims_pcu *VAR_5 = FUNC_4(VAR_4);
 int VAR_6;
 u8 VAR_7;

 VAR_6 = FUNC_0(VAR_2, 0, &VAR_7);
 if (VAR_6)
  return VAR_6;

 FUNC_1(&VAR_5->cmd_mutex);
 VAR_5->ofn_reg_addr = VAR_7;
 FUNC_2(&VAR_5->cmd_mutex);

 return VAR_3;
}
