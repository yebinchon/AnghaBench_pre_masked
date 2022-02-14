
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vprbrd_i2c_addr_msg {int dummy; } ;
struct usb_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct usb_device*,int ,struct vprbrd_i2c_addr_msg*,int,int*,int ) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_device *VAR_3,
 struct vprbrd_i2c_addr_msg *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_3,
  FUNC_2(VAR_3, VAR_1), VAR_4,
  sizeof(struct vprbrd_i2c_addr_msg), &VAR_6,
  VAR_2);

 if ((VAR_5 < 0) ||
   (sizeof(struct vprbrd_i2c_addr_msg) != VAR_6)) {
  FUNC_0(&VAR_3->dev, "failure transmitting usb\n");
  return -VAR_0;
 }
 return 0;
}
