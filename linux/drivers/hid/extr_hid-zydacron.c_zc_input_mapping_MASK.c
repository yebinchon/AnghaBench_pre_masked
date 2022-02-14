
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zc_device {scalar_t__* last_key; int input_ep81; } ;
struct hid_usage {int hid; } ;
struct hid_input {int input; } ;
struct hid_field {int dummy; } ;
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
 int FUNC_0 (char*,int) ;
 struct zc_device* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_15, struct hid_input *VAR_16,
 struct hid_field *VAR_17, struct hid_usage *VAR_18,
 unsigned long **VAR_19, int *VAR_20)
{
 int VAR_21;
 struct zc_device *VAR_22 = FUNC_1(VAR_15);
 VAR_22->input_ep81 = VAR_16->input;

 if ((VAR_18->hid & VAR_2) != VAR_0)
  return 0;

 FUNC_0("zynacron input mapping event [0x%x]\n",
  VAR_18->hid & VAR_1);

 switch (VAR_18->hid & VAR_1) {

 case 0x10:
  FUNC_2(VAR_8);
  break;
 case 0x30:
  FUNC_2(VAR_11);
  break;
 case 0x70:
  FUNC_2(VAR_6);
  break;

 case 0x04:
  FUNC_2(VAR_10);
  break;

 case 0x0d:
  FUNC_2(VAR_9);
  break;
 case 0x25:
  FUNC_2(VAR_13);
  break;
 case 0x47:
  FUNC_2(VAR_3);
  break;
 case 0x49:
  FUNC_2(VAR_4);
  break;
 case 0x4a:
  FUNC_2(VAR_14);
  break;
 case 0x48:
  FUNC_2(VAR_5);
  break;
 case 0x24:
  FUNC_2(VAR_7);
  break;
 case 0x32:
  FUNC_2(VAR_12);
  break;
 default:
  return 0;
 }

 for (VAR_21 = 0; VAR_21 < 4; VAR_21++)
  VAR_22->last_key[VAR_21] = 0;

 return 1;
}
