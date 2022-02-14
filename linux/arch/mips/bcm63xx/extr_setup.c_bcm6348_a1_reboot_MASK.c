
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(void)
{
 u32 VAR_6;


 FUNC_5("soft-resetting all blocks ...\n");
 VAR_6 = FUNC_1(VAR_2);
 VAR_6 &= ~VAR_3;
 FUNC_2(VAR_6, VAR_2);
 FUNC_4(10);

 VAR_6 = FUNC_1(VAR_2);
 VAR_6 |= VAR_3;
 FUNC_2(VAR_6, VAR_2);
 FUNC_4(10);


 FUNC_5("jumping to reset vector.\n");

 FUNC_6(VAR_4 | VAR_5);

 FUNC_3(VAR_0, VAR_1);
 FUNC_0();

 FUNC_7(0);
 __asm__ __volatile__(
  "jr\t%0"
  :
  : "r" (0xbfc00000));
 while (1)
  ;
}
