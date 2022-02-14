
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(module_t VAR_8, int VAR_9, void *VAR_10)
{

 if (VAR_9 == VAR_2) {
  if (VAR_7) {
   FUNC_2("DUMMYNET already loaded\n");
   return VAR_0 ;
  }
  FUNC_1();
  VAR_6 = VAR_5;
  VAR_7 = VAR_4;
  return 0;
 } else if (VAR_9 == VAR_3) {
  FUNC_0(1 );
  return 0;
 } else
  return VAR_1;
}
