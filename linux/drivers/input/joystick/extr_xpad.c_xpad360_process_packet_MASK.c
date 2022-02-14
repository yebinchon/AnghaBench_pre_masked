
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_xpad {int mapping; scalar_t__ xtype; } ;
struct input_dev {int dummy; } ;
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
 scalar_t__ VAR_28 ;
 int FUNC_0 (struct input_dev*,int ,unsigned char) ;
 int FUNC_1 (struct input_dev*,int ,unsigned char) ;
 int FUNC_2 (struct input_dev*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct usb_xpad *VAR_29, struct input_dev *VAR_30,
       u16 VAR_31, unsigned char *VAR_32)
{

 if (VAR_32[0] != 0x00)
  return;


 if (VAR_29->mapping & VAR_25) {

  FUNC_1(VAR_30, VAR_19, VAR_32[2] & 0x04);
  FUNC_1(VAR_30, VAR_20, VAR_32[2] & 0x08);
  FUNC_1(VAR_30, VAR_21, VAR_32[2] & 0x01);
  FUNC_1(VAR_30, VAR_22, VAR_32[2] & 0x02);
 }







 if (!(VAR_29->mapping & VAR_25) ||
     VAR_29->xtype == VAR_28) {
  FUNC_0(VAR_30, VAR_0,
     !!(VAR_32[2] & 0x08) - !!(VAR_32[2] & 0x04));
  FUNC_0(VAR_30, VAR_1,
     !!(VAR_32[2] & 0x02) - !!(VAR_32[2] & 0x01));
 }


 FUNC_1(VAR_30, VAR_12, VAR_32[2] & 0x10);
 FUNC_1(VAR_30, VAR_11, VAR_32[2] & 0x20);


 FUNC_1(VAR_30, VAR_13, VAR_32[2] & 0x40);
 FUNC_1(VAR_30, VAR_14, VAR_32[2] & 0x80);


 FUNC_1(VAR_30, VAR_8, VAR_32[3] & 0x10);
 FUNC_1(VAR_30, VAR_9, VAR_32[3] & 0x20);
 FUNC_1(VAR_30, VAR_23, VAR_32[3] & 0x40);
 FUNC_1(VAR_30, VAR_24, VAR_32[3] & 0x80);
 FUNC_1(VAR_30, VAR_15, VAR_32[3] & 0x01);
 FUNC_1(VAR_30, VAR_17, VAR_32[3] & 0x02);
 FUNC_1(VAR_30, VAR_10, VAR_32[3] & 0x04);

 if (!(VAR_29->mapping & VAR_26)) {

  FUNC_0(VAR_30, VAR_5,
     (__s16) FUNC_3((__le16 *)(VAR_32 + 6)));
  FUNC_0(VAR_30, VAR_6,
     ~(__s16) FUNC_3((__le16 *)(VAR_32 + 8)));


  FUNC_0(VAR_30, VAR_2,
     (__s16) FUNC_3((__le16 *)(VAR_32 + 10)));
  FUNC_0(VAR_30, VAR_3,
     ~(__s16) FUNC_3((__le16 *)(VAR_32 + 12)));
 }


 if (VAR_29->mapping & VAR_27) {
  FUNC_1(VAR_30, VAR_16, VAR_32[4]);
  FUNC_1(VAR_30, VAR_18, VAR_32[5]);
 } else {
  FUNC_0(VAR_30, VAR_7, VAR_32[4]);
  FUNC_0(VAR_30, VAR_4, VAR_32[5]);
 }

 FUNC_2(VAR_30);
}
