
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;


 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(module_t VAR_4, int VAR_5, void *VAR_6)
{
 switch (VAR_5) {
 case 129:
  return FUNC_2();

 case 128:
  FUNC_3(&VAR_3);
  if (FUNC_0(&VAR_2))
   FUNC_1();
  else {
   FUNC_4(&VAR_3);
   return (VAR_0);
  }
  break;

 default:
  return (VAR_1);
 }

 return (0);
}
