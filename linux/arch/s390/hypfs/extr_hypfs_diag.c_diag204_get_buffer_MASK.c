
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum diag204_format { ____Placeholder_diag204_format } diag204_format ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ,int *) ;
 void* FUNC_2 () ;
 void* FUNC_3 (int) ;
 void* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void *FUNC_4(enum diag204_format VAR_6, int *VAR_7)
{
 if (VAR_4) {
  *VAR_7 = VAR_5;
  return VAR_4;
 }
 if (VAR_6 == VAR_1) {
  *VAR_7 = 1;
  return FUNC_2();
 } else {
  *VAR_7 = FUNC_1((unsigned long)VAR_2 |
     (unsigned long)VAR_0, 0, ((void*)0));
  if (*VAR_7 <= 0)
   return FUNC_0(-VAR_3);
  else
   return FUNC_3(*VAR_7);
 }
}
