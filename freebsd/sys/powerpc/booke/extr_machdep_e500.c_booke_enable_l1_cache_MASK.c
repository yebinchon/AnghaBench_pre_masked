
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char*) ;

void
FUNC_6(void)
{
 uint32_t VAR_6;


 VAR_6 = FUNC_4(VAR_3);
 if ((VAR_6 & VAR_0) == 0) {
  FUNC_1();
  FUNC_0();
 }

 VAR_6 = FUNC_4(VAR_3);
 if ((VAR_5 & VAR_2) != 0 || (VAR_6 & VAR_0) == 0)
  FUNC_5("L1 D-cache %sabled\n",
      (VAR_6 & VAR_0) ? "en" : "dis");


 VAR_6 = FUNC_4(VAR_4);
 if ((VAR_6 & VAR_1) == 0) {
  FUNC_3();
  FUNC_2();
 }

 VAR_6 = FUNC_4(VAR_4);
 if ((VAR_5 & VAR_2) != 0 || (VAR_6 & VAR_1) == 0)
  FUNC_5("L1 I-cache %sabled\n",
      (VAR_6 & VAR_1) ? "en" : "dis");
}
