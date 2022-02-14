
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int VAR_8 ;

unsigned long FUNC_6(int VAR_9)
{






 if (FUNC_3() && !FUNC_4()) {
  FUNC_5("Not supported on this hardware/boot configuration\n");
  return 0;
 }

 if (FUNC_0(VAR_1)) {
  if (FUNC_2())
   return 0;
 }

 VAR_8 = (VAR_9 == VAR_0) ? VAR_2 : VAR_3;
  return (unsigned long)VAR_7;

}
