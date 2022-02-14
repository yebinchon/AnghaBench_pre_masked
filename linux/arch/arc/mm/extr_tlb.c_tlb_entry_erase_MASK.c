
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int,char*,unsigned int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 unsigned int FUNC_3 (unsigned int) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_2)
{
 unsigned int VAR_3;


 VAR_3 = FUNC_3(VAR_2);


 if (FUNC_2(!(VAR_3 & VAR_1))) {
  FUNC_1();
 } else {

  FUNC_0(VAR_3 == VAR_0, "Probe returned Dup PD for %x\n",
        VAR_2);
 }
}
