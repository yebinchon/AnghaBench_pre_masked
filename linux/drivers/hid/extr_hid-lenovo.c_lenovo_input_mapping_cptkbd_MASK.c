
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {int hid; } ;
struct hid_input {int dummy; } ;
struct hid_field {int flags; int logical_minimum; int logical_maximum; } ;
struct hid_device {int dummy; } ;


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
 int FUNC_0 (struct hid_input*,struct hid_usage*,unsigned long**,int*,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_22,
  struct hid_input *VAR_23, struct hid_field *VAR_24,
  struct hid_usage *VAR_25, unsigned long **VAR_26, int *VAR_27)
{

 if ((VAR_25->hid & VAR_10) == VAR_8 ||
     (VAR_25->hid & VAR_10) == VAR_7) {
  switch (VAR_25->hid & VAR_9) {
  case 0x00f1:
   FUNC_1(VAR_16);
   return 1;
  case 0x00f2:
   FUNC_1(VAR_11);
   return 1;
  case 0x00f3:
   FUNC_1(VAR_12);
   return 1;
  case 0x00f4:
   FUNC_1(VAR_18);
   return 1;
  case 0x00f5:
   FUNC_1(VAR_19);
   return 1;
  case 0x00f6:
   FUNC_1(VAR_13);
   return 1;
  case 0x00f8:
   FUNC_1(VAR_17);
   return 1;
  case 0x00f9:

   FUNC_1(VAR_14);
   return 1;
  case 0x00fa:
   FUNC_1(VAR_15);
   return 1;
  case 0x00fb:
   FUNC_1(VAR_0);
   return 1;
  }
 }


 if (VAR_25->hid == VAR_2)
  return -1;
 if ((VAR_25->hid & VAR_10) == VAR_5 &&
   (VAR_25->hid & VAR_9) == 0x003)
  return -1;
 if ((VAR_25->hid & VAR_10) == VAR_6 &&
   (VAR_25->hid & VAR_9) == 0x238)
  return -1;


 if ((VAR_25->hid & VAR_10) == 0xff100000 ||
     (VAR_25->hid & VAR_10) == 0xffa10000) {
  VAR_24->flags |= VAR_3 | VAR_4;
  VAR_24->logical_minimum = -127;
  VAR_24->logical_maximum = 127;

  switch (VAR_25->hid & VAR_9) {
  case 0x0000:
   FUNC_0(VAR_23, VAR_25, VAR_26, VAR_27, VAR_1, VAR_20);
   return 1;
  case 0x0001:
   FUNC_0(VAR_23, VAR_25, VAR_26, VAR_27, VAR_1, VAR_21);
   return 1;
  default:
   return -1;
  }
 }

 return 0;
}
