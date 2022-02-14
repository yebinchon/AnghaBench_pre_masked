
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int ) ;

void FUNC_8(void)
{
 extern __u32 VAR_5;
 __u32 VAR_6 = VAR_5;

 FUNC_1();
 if (FUNC_4())
  VAR_6 &= ~(1 << 6);






 if ((VAR_6 != ~0) || !VAR_4) {

  __u32 VAR_7 = FUNC_5(VAR_0);
  if (FUNC_0())
   VAR_6 &= VAR_2;
  else
   VAR_6 &= VAR_3;
  FUNC_7(VAR_6, VAR_0);
  __asm__ volatile ("mcr	p15, 0, r0, c7, c0, 4");
  FUNC_7(VAR_7, VAR_0);

  FUNC_2();
  return;
 }
 FUNC_6(FUNC_5(VAR_0),
     FUNC_5(VAR_1));

 FUNC_2();
}
