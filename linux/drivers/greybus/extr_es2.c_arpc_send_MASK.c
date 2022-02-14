
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {int dev; } ;
struct es2_ap_dev {struct usb_device* usb_dev; } ;
struct arpc {TYPE_1__* req; } ;
struct TYPE_2__ {int type; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct usb_device*,int ,int ,int,int ,int ,TYPE_1__*,int,int ) ;
 int FUNC_3 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct es2_ap_dev *VAR_6, struct arpc *VAR_7, int VAR_8)
{
 struct usb_device *VAR_9 = VAR_6->usb_dev;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_9, FUNC_3(VAR_9, 0),
     VAR_2,
     VAR_3 | VAR_5 |
     VAR_4,
     0, 0,
     VAR_7->req, FUNC_1(VAR_7->req->size),
     VAR_1);
 if (VAR_10 != FUNC_1(VAR_7->req->size)) {
  FUNC_0(&VAR_9->dev,
   "failed to send ARPC request %d: %d\n",
   VAR_7->req->type, VAR_10);
  if (VAR_10 > 0)
   VAR_10 = -VAR_0;
  return VAR_10;
 }

 return 0;
}
