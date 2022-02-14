
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int tstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (unsigned int,struct pt_regs*) ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int,int) ;
 unsigned long FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (int ) ;

unsigned long FUNC_4(struct pt_regs *VAR_2,
     unsigned int VAR_3, unsigned int VAR_4)
{
 int VAR_5 = (VAR_2->tstate & VAR_1) != 0;
 unsigned int VAR_6 = (VAR_3 >> 14) & 0x1f;
 unsigned int VAR_7 = VAR_3 & 0x1f;
 unsigned long VAR_8;

 if (VAR_3 & 0x2000) {
  FUNC_1(VAR_6, 0, VAR_4, VAR_5);
  VAR_8 = (FUNC_0(VAR_6, VAR_2) + FUNC_2(VAR_3));
 } else {
  FUNC_1(VAR_6, VAR_7, VAR_4, VAR_5);
  VAR_8 = (FUNC_0(VAR_6, VAR_2) + FUNC_0(VAR_7, VAR_2));
 }

 if (!VAR_5 && FUNC_3(VAR_0))
  VAR_8 &= 0xffffffff;

 return VAR_8;
}
