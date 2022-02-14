
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int iir; unsigned long ior; } ;


 int VAR_0 ;
 int VAR_1 ;
int
FUNC_0(struct pt_regs *VAR_2)
{
 unsigned long VAR_3;



 VAR_3 = 0UL;
 switch (VAR_2->iir & VAR_0) {

 case 142:
 case 140:
 case 133:
  VAR_3 = 1UL;
  break;

 case 136:
 case 139:
 case 134:
 case 138:
 case 131:
 case 130:
  VAR_3 = 3UL;
  break;

 default:
  switch (VAR_2->iir & VAR_1) {
  case 141:
  case 132:
   VAR_3 = 1UL;
   break;
  case 135:
  case 137:
  case 128:
  case 129:
   VAR_3 = 3UL;
   break;
  }
  break;
 }

 return (int)(VAR_2->ior & VAR_3);
}
