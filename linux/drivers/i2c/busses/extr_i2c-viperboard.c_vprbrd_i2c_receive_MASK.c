
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vprbrd_i2c_read_msg {int dummy; } ;
struct vprbrd_i2c_read_hdr {int dummy; } ;
struct usb_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct usb_device*,int ,struct vprbrd_i2c_read_msg*,int,int*,int ) ;
 int FUNC_2 (struct usb_device*,int ) ;
 int FUNC_3 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_device *VAR_4,
 struct vprbrd_i2c_read_msg *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;
 int VAR_9 = 0;


 VAR_7 = FUNC_1(VAR_4,
  FUNC_3(VAR_4, VAR_2), VAR_5,
  sizeof(struct vprbrd_i2c_read_hdr), &VAR_8,
  VAR_3);

 if ((VAR_7 < 0)
  || (VAR_8 != sizeof(struct vprbrd_i2c_read_hdr))) {
  FUNC_0(&VAR_4->dev, "failure transmitting usb\n");
  VAR_9 = -VAR_0;
 }


 VAR_7 = FUNC_1(VAR_4,
  FUNC_2(VAR_4, VAR_1), VAR_5,
  VAR_6, &VAR_8, VAR_3);

 if ((VAR_7 < 0) || (VAR_6 != VAR_8)) {
  FUNC_0(&VAR_4->dev, "failure receiving usb\n");
  VAR_9 = -VAR_0;
 }
 return VAR_9;
}
