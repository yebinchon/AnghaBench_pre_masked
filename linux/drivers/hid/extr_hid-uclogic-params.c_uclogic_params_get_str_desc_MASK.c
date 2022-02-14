
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct hid_device {int dummy; } ;
typedef scalar_t__ __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct hid_device*,char*,scalar_t__) ;
 int FUNC_1 (struct hid_device*,char*,scalar_t__,int) ;
 struct usb_device* FUNC_2 (struct hid_device*) ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__* FUNC_4 (size_t,int ) ;
 int FUNC_5 (struct usb_device*,int ,int ,int ,scalar_t__,int,scalar_t__*,size_t,int ) ;
 int FUNC_6 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_7(__u8 **VAR_8, struct hid_device *VAR_9,
     __u8 VAR_10, size_t VAR_11)
{
 int VAR_12;
 struct usb_device *VAR_13 = FUNC_2(VAR_9);
 __u8 *VAR_14 = ((void*)0);


 if (VAR_9 == ((void*)0)) {
  VAR_12 = -VAR_0;
  goto cleanup;
 }

 VAR_14 = FUNC_4(VAR_11, VAR_3);
 if (VAR_14 == ((void*)0)) {
  VAR_12 = -VAR_1;
  goto cleanup;
 }

 VAR_12 = FUNC_5(VAR_13, FUNC_6(VAR_13, 0),
    VAR_7, VAR_5,
    (VAR_6 << 8) + VAR_10,
    0x0409, VAR_14, VAR_11,
    VAR_4);
 if (VAR_12 == -VAR_2) {
  FUNC_0(VAR_9, "string descriptor #%hhu not found\n", VAR_10);
  goto cleanup;
 } else if (VAR_12 < 0) {
  FUNC_1(VAR_9,
   "failed retrieving string descriptor #%hhu: %d\n",
   VAR_10, VAR_12);
  goto cleanup;
 }

 if (VAR_8 != ((void*)0)) {
  *VAR_8 = VAR_14;
  VAR_14 = ((void*)0);
 }

cleanup:
 FUNC_3(VAR_14);
 return VAR_12;
}
