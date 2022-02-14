
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;

void
FUNC_3(void)
{
 uint32_t VAR_4;

 FUNC_0();
 VAR_4 = FUNC_1(VAR_2);
 if ((VAR_3 & VAR_1) != 0 || (VAR_4 & VAR_0) == 0)
  FUNC_2("Branch Predictor %sabled\n",
      (VAR_4 & VAR_0) ? "en" : "dis");
}
