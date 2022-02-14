
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sh_fpu_soft_struct {int dummy; } ;
struct pt_regs {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (unsigned long,int) ;
 int VAR_3 ;
 int FUNC_1 (unsigned long,int) ;

__attribute__((used)) static int
FUNC_2(struct sh_fpu_soft_struct *VAR_4, struct pt_regs *VAR_5, u16 VAR_6)
{
 int VAR_7 = ((VAR_6 >> 8) & 0xf);
 unsigned long *VAR_8 = (VAR_6 & 0x0010) ? &VAR_2 : &VAR_1;

 switch (VAR_6 & 0xf0ff) {
 case 0x005a:
 case 0x006a:
  VAR_3 = *VAR_8;
  break;
 case 0x405a:
 case 0x406a:
  *VAR_8 = VAR_3;
  break;
 case 0x4052:
 case 0x4062:
  VAR_3 -= 4;
  FUNC_1(*VAR_8, VAR_3);
  break;
 case 0x4056:
 case 0x4066:
  FUNC_0(*VAR_8, VAR_3);
  VAR_3 += 4;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
