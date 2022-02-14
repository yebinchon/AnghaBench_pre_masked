
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (char*,char*) ;

void
FUNC_6(void)
{


 FUNC_2();
 FUNC_0();
 FUNC_3();
 FUNC_1();
 if (FUNC_4() != VAR_0) {
  FUNC_5("WARN",
   ("Version mismatch for openssl: compiled with %lx but running with %lx",
   (unsigned long)VAR_0, (unsigned long)FUNC_4()));
 }

}
