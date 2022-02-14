
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int keybit; int evbit; } ;
struct hid_usage {int hid; } ;
struct hid_input {struct input_dev* input; } ;


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
 int FUNC_0 (struct hid_input*,struct hid_usage*,unsigned long**,int*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct hid_input *VAR_20, struct hid_usage *VAR_21,
  unsigned long **VAR_22, int *VAR_23)
{
 struct input_dev *VAR_24 = VAR_20->input;

 if ((VAR_21->hid & VAR_5) == VAR_2) {
  switch (VAR_21->hid & VAR_4) {




  case 0x29d:
   FUNC_1(VAR_17);
   return 1;
  case 0x29e:
   FUNC_1(VAR_18);
   return 1;
  }
  return 0;
 }

 if ((VAR_21->hid & VAR_5) != VAR_3)
  return 0;

 switch (VAR_21->hid & VAR_4) {
 case 0xfd06: FUNC_1(VAR_6); break;
 case 0xfd07: FUNC_1(VAR_16); break;
 case 0xff00:

  FUNC_1(VAR_13);
  FUNC_2(VAR_14, VAR_24->keybit);
  FUNC_2(VAR_15, VAR_24->keybit);
  break;
 case 0xff01:

  FUNC_0(VAR_20, VAR_21, VAR_22, VAR_23, VAR_0, VAR_19);
  break;
 case 0xff02:
  return -1;
 case 0xff05:
  FUNC_2(VAR_1, VAR_24->evbit);
  FUNC_1(VAR_7);
  FUNC_2(VAR_8, VAR_24->keybit);
  FUNC_2(VAR_9, VAR_24->keybit);
  FUNC_2(VAR_10, VAR_24->keybit);
  FUNC_2(VAR_11, VAR_24->keybit);
  FUNC_2(VAR_12, VAR_24->keybit);
  break;
 default:
  return 0;
 }
 return 1;
}
