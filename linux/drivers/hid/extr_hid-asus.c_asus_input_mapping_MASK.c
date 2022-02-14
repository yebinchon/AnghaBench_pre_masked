
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_usage {int hid; } ;
struct hid_input {TYPE_1__* input; } ;
struct hid_field {int application; } ;
struct hid_device {int dummy; } ;
struct asus_drvdata {int quirks; int enable_backlight; } ;
struct TYPE_2__ {int evbit; } ;


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
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_0 (int ) ;
 struct asus_drvdata* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_41,
  struct hid_input *VAR_42, struct hid_field *VAR_43,
  struct hid_usage *VAR_44, unsigned long **VAR_45,
  int *VAR_46)
{
 struct asus_drvdata *VAR_47 = FUNC_1(VAR_41);

 if (VAR_47->quirks & VAR_37) {



  return -1;
 }






 if (VAR_47->quirks & (VAR_38 | VAR_39)) {
  if (VAR_43->application == (VAR_15 | 0x0080) ||
      VAR_44->hid == (VAR_16 | 0x0024) ||
      VAR_44->hid == (VAR_16 | 0x0025) ||
      VAR_44->hid == (VAR_16 | 0x0026))
   return -1;




  if (VAR_43->application == VAR_12 &&
      VAR_44->hid != (VAR_13 | 1))
   return -1;
 }


 if ((VAR_44->hid & VAR_19) == 0xff310000) {
  FUNC_2(VAR_11, VAR_42->input->evbit);
  switch (VAR_44->hid & VAR_18) {
  case 0x10: FUNC_0(VAR_20); break;
  case 0x20: FUNC_0(VAR_21); break;
  case 0x35: FUNC_0(VAR_24); break;
  case 0x6c: FUNC_0(VAR_34); break;
  case 0x7c: FUNC_0(VAR_28); break;
  case 0x82: FUNC_0(VAR_23); break;
  case 0x88: FUNC_0(VAR_33); break;
  case 0xb5: FUNC_0(VAR_22); break;
  case 0xc4: FUNC_0(VAR_27); break;
  case 0xc5: FUNC_0(VAR_26); break;


  case 0x6b: FUNC_0(VAR_25); break;


  case 0x38: FUNC_0(VAR_29); break;


  case 0xba: FUNC_0(VAR_30); break;


  case 0x5c: FUNC_0(VAR_31); break;


  case 0x99: FUNC_0(VAR_32); break;

  default:


   return -1;
  }







  if (VAR_47->quirks & VAR_40)
   VAR_47->enable_backlight = 1;

  return 1;
 }

 if ((VAR_44->hid & VAR_19) == VAR_17) {
  FUNC_2(VAR_11, VAR_42->input->evbit);
  switch (VAR_44->hid & VAR_18) {
  case 0xff01: FUNC_0(VAR_0); break;
  case 0xff02: FUNC_0(VAR_1); break;
  case 0xff03: FUNC_0(VAR_2); break;
  case 0xff04: FUNC_0(VAR_3); break;
  case 0xff05: FUNC_0(VAR_4); break;
  case 0xff06: FUNC_0(VAR_5); break;
  case 0xff07: FUNC_0(VAR_6); break;
  case 0xff08: FUNC_0(VAR_7); break;
  case 0xff09: FUNC_0(VAR_8); break;
  case 0xff0a: FUNC_0(VAR_9); break;
  case 0xff0b: FUNC_0(VAR_10); break;
  case 0x00f1: FUNC_0(VAR_35); break;
  case 0x00f2: FUNC_0(VAR_20); break;
  case 0x00f3: FUNC_0(VAR_21); break;
  case 0x00f4: FUNC_0(VAR_24); break;
  case 0x00f7: FUNC_0(VAR_23); break;
  case 0x00f8: FUNC_0(VAR_29); break;
  default:
   return 0;
  }

  return 1;
 }

 if (VAR_47->quirks & VAR_36 &&
  (VAR_44->hid & VAR_19) == VAR_14) {
  switch (VAR_44->hid & VAR_18) {
  case 0xe2:
  case 0xe9:
  case 0xea:
   return 0;
  default:



   return -1;
  }
 }

 return 0;
}
