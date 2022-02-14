
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_usage {int hid; } ;
struct hid_input {TYPE_1__* input; } ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hid_input *VAR_21,
  struct hid_usage *VAR_22, unsigned long **VAR_23, int *VAR_24)
{
 if ((VAR_22->hid & VAR_3) != VAR_1)
  return 0;

 FUNC_1(VAR_0, VAR_21->input->evbit);
 switch (VAR_22->hid & VAR_2) {

 case 0x004: FUNC_0(VAR_4); break;
 case 0x00d: FUNC_0(VAR_9); break;
 case 0x024: FUNC_0(VAR_16); break;
 case 0x025: FUNC_0(VAR_19); break;
 case 0x026: FUNC_0(VAR_13); break;
 case 0x031: FUNC_0(VAR_6); break;
 case 0x032: FUNC_0(VAR_18); break;
 case 0x033: FUNC_0(VAR_11); break;
 case 0x047: FUNC_0(VAR_14); break;
 case 0x048: FUNC_0(VAR_8); break;
 case 0x049: FUNC_0(VAR_12); break;
 case 0x04a: FUNC_0(VAR_20); break;
 case 0x04b: FUNC_0(VAR_5); break;
 case 0x04c: FUNC_0(VAR_10); break;
 case 0x04d: FUNC_0(VAR_17); break;
 case 0x051: FUNC_0(VAR_15); break;
 case 0x052: FUNC_0(VAR_7); break;

 default:
  return 0;
 }
 return 1;
}
