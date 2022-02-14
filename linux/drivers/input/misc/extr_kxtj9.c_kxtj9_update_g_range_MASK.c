
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct kxtj9_data {int shift; int ctrl_reg1; } ;


 int VAR_0 ;




__attribute__((used)) static int FUNC_0(struct kxtj9_data *VAR_1, u8 VAR_2)
{
 switch (VAR_2) {
 case 130:
  VAR_1->shift = 4;
  break;
 case 129:
  VAR_1->shift = 3;
  break;
 case 128:
  VAR_1->shift = 2;
  break;
 default:
  return -VAR_0;
 }

 VAR_1->ctrl_reg1 &= 0xe7;
 VAR_1->ctrl_reg1 |= VAR_2;

 return 0;
}
