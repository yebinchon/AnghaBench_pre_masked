
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arglist {int dummy; } ;


 scalar_t__ FUNC_0 (char*,int ,unsigned int*) ;
 char* FUNC_1 (struct arglist*,char*) ;

__attribute__((used)) static bool FUNC_2(
 struct arglist *VAR_0, char *VAR_1, unsigned int *VAR_2)
{
 char *VAR_3 = FUNC_1(VAR_0, VAR_1);

 if (VAR_3 != ((void*)0)) {
  if (FUNC_0(VAR_3, 0, VAR_2) == 0)
   return 1;
 }
 return 0;
}
