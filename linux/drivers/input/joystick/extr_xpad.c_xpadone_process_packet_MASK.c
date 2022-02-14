
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_xpad {int mapping; struct input_dev* dev; } ;
struct input_dev {int dummy; } ;
typedef unsigned char __u16 ;
typedef unsigned char __s16 ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (struct input_dev*,int ,unsigned char) ;
 int FUNC_1 (struct input_dev*,int ,unsigned char) ;
 int FUNC_2 (struct input_dev*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct usb_xpad*,unsigned char) ;

__attribute__((used)) static void FUNC_5(struct usb_xpad *VAR_28, u16 VAR_29, unsigned char *VAR_30)
{
 struct input_dev *VAR_31 = VAR_28->dev;


 if (VAR_30[0] == 0X07) {





  if (VAR_30[1] == 0x30)
   FUNC_4(VAR_28, VAR_30[2]);

  FUNC_1(VAR_31, VAR_10, VAR_30[4] & 0x01);
  FUNC_2(VAR_31);
  return;
 }

 else if (VAR_30[0] != 0X20)
  return;


 FUNC_1(VAR_31, VAR_12, VAR_30[4] & 0x04);
 FUNC_1(VAR_31, VAR_11, VAR_30[4] & 0x08);


 FUNC_1(VAR_31, VAR_8, VAR_30[4] & 0x10);
 FUNC_1(VAR_31, VAR_9, VAR_30[4] & 0x20);
 FUNC_1(VAR_31, VAR_23, VAR_30[4] & 0x40);
 FUNC_1(VAR_31, VAR_24, VAR_30[4] & 0x80);


 if (VAR_28->mapping & VAR_25) {

  FUNC_1(VAR_31, VAR_19, VAR_30[5] & 0x04);
  FUNC_1(VAR_31, VAR_20, VAR_30[5] & 0x08);
  FUNC_1(VAR_31, VAR_21, VAR_30[5] & 0x01);
  FUNC_1(VAR_31, VAR_22, VAR_30[5] & 0x02);
 } else {
  FUNC_0(VAR_31, VAR_0,
     !!(VAR_30[5] & 0x08) - !!(VAR_30[5] & 0x04));
  FUNC_0(VAR_31, VAR_1,
     !!(VAR_30[5] & 0x02) - !!(VAR_30[5] & 0x01));
 }


 FUNC_1(VAR_31, VAR_15, VAR_30[5] & 0x10);
 FUNC_1(VAR_31, VAR_17, VAR_30[5] & 0x20);


 FUNC_1(VAR_31, VAR_13, VAR_30[5] & 0x40);
 FUNC_1(VAR_31, VAR_14, VAR_30[5] & 0x80);

 if (!(VAR_28->mapping & VAR_26)) {

  FUNC_0(VAR_31, VAR_5,
     (__s16) FUNC_3((__le16 *)(VAR_30 + 10)));
  FUNC_0(VAR_31, VAR_6,
     ~(__s16) FUNC_3((__le16 *)(VAR_30 + 12)));


  FUNC_0(VAR_31, VAR_2,
     (__s16) FUNC_3((__le16 *)(VAR_30 + 14)));
  FUNC_0(VAR_31, VAR_3,
     ~(__s16) FUNC_3((__le16 *)(VAR_30 + 16)));
 }


 if (VAR_28->mapping & VAR_27) {
  FUNC_1(VAR_31, VAR_16,
     (__u16) FUNC_3((__le16 *)(VAR_30 + 6)));
  FUNC_1(VAR_31, VAR_18,
     (__u16) FUNC_3((__le16 *)(VAR_30 + 8)));
 } else {
  FUNC_0(VAR_31, VAR_7,
     (__u16) FUNC_3((__le16 *)(VAR_30 + 6)));
  FUNC_0(VAR_31, VAR_4,
     (__u16) FUNC_3((__le16 *)(VAR_30 + 8)));
 }

 FUNC_2(VAR_31);
}
