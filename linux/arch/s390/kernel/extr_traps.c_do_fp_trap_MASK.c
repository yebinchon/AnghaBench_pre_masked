
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pt_regs*,int ,int,char*) ;

__attribute__((used)) static inline void FUNC_1(struct pt_regs *VAR_6, __u32 VAR_7)
{
 int VAR_8 = 0;

 if ((VAR_7 & 0x00000300) == 0) {

  if (VAR_7 & 0x8000)
   VAR_8 = VAR_1;
  else if (VAR_7 & 0x4000)
   VAR_8 = VAR_0;
  else if (VAR_7 & 0x2000)
   VAR_8 = VAR_2;
  else if (VAR_7 & 0x1000)
   VAR_8 = VAR_4;
  else if (VAR_7 & 0x0800)
   VAR_8 = VAR_3;
 }
 FUNC_0(VAR_6, VAR_5, VAR_8, "floating point exception");
}
