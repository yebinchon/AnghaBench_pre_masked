
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int cs; int ss; int ds; int es; int fs; } ;
struct kernel_vm86_regs {short ds; short es; short fs; short gs; } ;


 short VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 short FUNC_0 (struct pt_regs*) ;
 int VAR_4 ;
 int FUNC_1 (int ,unsigned short) ;
 scalar_t__ FUNC_2 (struct pt_regs*) ;

__attribute__((used)) static short FUNC_3(struct pt_regs *VAR_5, int VAR_6)
{
 struct kernel_vm86_regs *VAR_7 = (struct kernel_vm86_regs *)VAR_5;

 if (FUNC_2(VAR_5)) {
  switch (VAR_6) {
  case 134:
   return (unsigned short)(VAR_5->cs & 0xffff);
  case 128:
   return (unsigned short)(VAR_5->ss & 0xffff);
  case 133:
   return VAR_7->ds;
  case 132:
   return VAR_7->es;
  case 131:
   return VAR_7->fs;
  case 130:
   return VAR_7->gs;
  case 129:

  default:
   return -VAR_0;
  }
 }

 switch (VAR_6) {
 case 134:
  return (unsigned short)(VAR_5->cs & 0xffff);
 case 128:
  return (unsigned short)(VAR_5->ss & 0xffff);
 case 133:
  return (unsigned short)(VAR_5->ds & 0xffff);
 case 132:
  return (unsigned short)(VAR_5->es & 0xffff);
 case 131:
  return (unsigned short)(VAR_5->fs & 0xffff);
 case 130:




  return FUNC_0(VAR_5);
 case 129:

 default:
  return -VAR_0;
 }

}
