
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int FUNC_0 (unsigned char*,unsigned char) ;
 int FUNC_1 (struct pt_regs*) ;
 int FUNC_2 (struct pt_regs*) ;

__attribute__((used)) static inline int
FUNC_3(struct pt_regs *VAR_0, unsigned char *VAR_1,
        unsigned char VAR_2, int *VAR_3)
{
 unsigned char VAR_4 = VAR_2 & 0xf0;
 unsigned char VAR_5 = VAR_2 & 0x0f;

 switch (VAR_4) {
 case 0x20:
 case 0x30:






  return ((VAR_5 & 7) == 0x6);
 case 0x60:

  return (VAR_5 & 0xC) == 0x4;
 case 0xF0:

  return !VAR_5 || (VAR_5>>1) == 1;
 case 0x00:

  if (FUNC_0(VAR_1, VAR_2))
   return 0;

  *VAR_3 = (VAR_5 == 0xF) &&
   (VAR_2 == 0x0D || VAR_2 == 0x18);
  return 0;
 default:
  return 0;
 }
}
