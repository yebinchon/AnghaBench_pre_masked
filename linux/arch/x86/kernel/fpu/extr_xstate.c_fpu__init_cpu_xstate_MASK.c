
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,int) ;

void FUNC_4(void)
{
 if (!FUNC_1(VAR_1) || !VAR_4)
  return;





 FUNC_0((VAR_4 & VAR_3),
  "x86/fpu: XSAVES supervisor states are not yet implemented.\n");

 VAR_4 &= ~VAR_3;

 FUNC_2(VAR_0);
 FUNC_3(VAR_2, VAR_4);
}
