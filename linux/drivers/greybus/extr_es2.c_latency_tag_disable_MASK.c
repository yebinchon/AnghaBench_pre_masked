
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_device {int dev; } ;
struct gb_host_device {int dummy; } ;
struct es2_ap_dev {struct usb_device* usb_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int ) ;
 struct es2_ap_dev* FUNC_1 (struct gb_host_device*) ;
 int FUNC_2 (struct usb_device*,int ,int ,int,int ,int ,int *,int ,int ) ;
 int FUNC_3 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct gb_host_device *VAR_5, u16 VAR_6)
{
 int VAR_7;
 struct es2_ap_dev *VAR_8 = FUNC_1(VAR_5);
 struct usb_device *VAR_9 = VAR_8->usb_dev;

 VAR_7 = FUNC_2(VAR_9, FUNC_3(VAR_9, 0),
     VAR_1,
     VAR_2 | VAR_4 |
     VAR_3, VAR_6, 0, ((void*)0),
     0, VAR_0);

 if (VAR_7 < 0)
  FUNC_0(&VAR_9->dev, "Cannot disable latency tag for cport %d\n",
   VAR_6);
 return VAR_7;
}
