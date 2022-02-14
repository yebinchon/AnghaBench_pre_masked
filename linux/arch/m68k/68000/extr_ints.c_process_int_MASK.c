
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int,struct pt_regs*) ;

void FUNC_1(int VAR_1, struct pt_regs *VAR_2)
{
 int VAR_3;
 int VAR_4;

 unsigned long VAR_5 = VAR_0;

 while (VAR_5) {
  if (VAR_5 & 0x0000ffff) {
   if (VAR_5 & 0x000000ff) {
    if (VAR_5 & 0x0000000f) {
     VAR_4 = 0x00000001;
     VAR_3 = 0;
    } else {
     VAR_4 = 0x00000010;
     VAR_3 = 4;
    }
   } else {
    if (VAR_5 & 0x00000f00) {
     VAR_4 = 0x00000100;
     VAR_3 = 8;
    } else {
     VAR_4 = 0x00001000;
     VAR_3 = 12;
    }
   }
  } else {
   if (VAR_5 & 0x00ff0000) {
    if (VAR_5 & 0x000f0000) {
     VAR_4 = 0x00010000;
     VAR_3 = 16;
    } else {
     VAR_4 = 0x00100000;
     VAR_3 = 20;
    }
   } else {
    if (VAR_5 & 0x0f000000) {
     VAR_4 = 0x01000000;
     VAR_3 = 24;
    } else {
     VAR_4 = 0x10000000;
     VAR_3 = 28;
    }
   }
  }

  while (! (VAR_4 & VAR_5)) {
   VAR_4 <<=1;
   VAR_3++;
  }

  FUNC_0(VAR_3, VAR_2);
  VAR_5 &= ~VAR_4;
 }
}
