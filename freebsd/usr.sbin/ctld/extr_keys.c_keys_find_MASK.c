
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keys {char const** keys_values; int ** keys_names; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*) ;

const char *
FUNC_1(struct keys *VAR_1, const char *VAR_2)
{
 int VAR_3;






 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->keys_names[VAR_3] == ((void*)0))
   return (((void*)0));
  if (FUNC_0(VAR_1->keys_names[VAR_3], VAR_2) == 0)
   return (VAR_1->keys_values[VAR_3]);
 }
 return (((void*)0));
}
