
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module_t ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_4(module_t VAR_5, int VAR_6, void *VAR_7)
{
 int VAR_8;

 switch (VAR_6) {
 case 129:
  VAR_3 = FUNC_0(VAR_1);
  VAR_4 = FUNC_0(VAR_1);
  return (FUNC_3(&VAR_2));
 case 128:
  VAR_8 = FUNC_2(&VAR_2);
  if (VAR_8)
   return (VAR_8);
  FUNC_1(VAR_3);
  FUNC_1(VAR_4);
  return (0);
 default:
  return (VAR_0);
 }
}
