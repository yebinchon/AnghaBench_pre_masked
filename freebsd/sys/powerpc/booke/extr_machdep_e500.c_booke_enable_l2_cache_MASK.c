
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
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;

void
FUNC_5(void)
{
 uint32_t VAR_6;


 if ((((FUNC_2() >> 16) & 0xFFFF) == VAR_0) ||
     (((FUNC_2() >> 16) & 0xFFFF) == VAR_1)) {
  VAR_6 = FUNC_3(VAR_4);
  if ((VAR_6 & VAR_2) == 0) {
   FUNC_1();
   FUNC_0();
  }

  VAR_6 = FUNC_3(VAR_4);
  if ((VAR_5 & VAR_3) != 0 || (VAR_6 & VAR_2) == 0)
   FUNC_4("L2 cache %sabled\n",
       (VAR_6 & VAR_2) ? "en" : "dis");
 }
}
