
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 int FUNC_0 (struct hfi1_devdata*,char*,int) ;

u32 FUNC_1(struct hfi1_devdata *VAR_6, u32 VAR_7)
{

 switch (VAR_7 & 0xf0) {
 default:
  FUNC_0(VAR_6, "Unexpected chip physical state of 0x%x\n",
      VAR_7);

 case 132:
  return VAR_0;
 case 130:
  return VAR_5;
 case 128:
  return VAR_3;
 case 133:
  return VAR_4;
 case 131:
  return VAR_1;
 case 129:
  return VAR_2;
 }
}
