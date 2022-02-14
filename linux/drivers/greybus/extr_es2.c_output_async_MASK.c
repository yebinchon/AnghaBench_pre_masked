
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct usb_device {int dummy; } ;
struct usb_ctrlrequest {int bRequestType; int wLength; scalar_t__ wIndex; scalar_t__ wValue; int bRequest; } ;
struct urb {int dummy; } ;
struct es2_ap_dev {struct usb_device* usb_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct usb_ctrlrequest*) ;
 struct usb_ctrlrequest* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int *,void*,scalar_t__) ;
 struct urb* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct urb*,struct usb_device*,int ,unsigned char*,int *,scalar_t__,int ,struct usb_ctrlrequest*) ;
 int FUNC_6 (struct urb*) ;
 int FUNC_7 (struct usb_device*,int ) ;
 int FUNC_8 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_9(struct es2_ap_dev *VAR_6, void *VAR_7, u16 VAR_8, u8 VAR_9)
{
 struct usb_device *VAR_10 = VAR_6->usb_dev;
 struct urb *VAR_11;
 struct usb_ctrlrequest *VAR_12;
 u8 *VAR_13;
 int VAR_14;

 VAR_11 = FUNC_4(0, VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_12 = FUNC_2(sizeof(*VAR_12) + VAR_8, VAR_1);
 if (!VAR_12) {
  FUNC_6(VAR_11);
  return -VAR_0;
 }

 VAR_13 = (u8 *)VAR_12 + sizeof(*VAR_12);
 FUNC_3(VAR_13, VAR_7, VAR_8);

 VAR_12->bRequest = VAR_9;
 VAR_12->bRequestType = VAR_2 | VAR_4 | VAR_3;
 VAR_12->wValue = 0;
 VAR_12->wIndex = 0;
 VAR_12->wLength = FUNC_0(VAR_8);

 FUNC_5(VAR_11, VAR_10, FUNC_7(VAR_10, 0),
        (unsigned char *)VAR_12, VAR_13, VAR_8,
        VAR_5, VAR_12);
 VAR_14 = FUNC_8(VAR_11, VAR_1);
 if (VAR_14) {
  FUNC_6(VAR_11);
  FUNC_1(VAR_12);
 }
 return VAR_14;
}
