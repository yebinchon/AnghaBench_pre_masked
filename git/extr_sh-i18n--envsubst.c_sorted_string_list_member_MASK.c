
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t nitems; int * item; } ;
typedef TYPE_1__ string_list_ty ;


 scalar_t__ strcmp (int ,char const*) ;

__attribute__((used)) static int
sorted_string_list_member (const string_list_ty *slp, const char *s)
{
  size_t j1, j2;

  j1 = 0;
  j2 = slp->nitems;
  if (j2 > 0)
    {

      while (j2 - j1 > 1)
 {


   size_t j = j1 + ((j2 - j1) >> 1);
   int result = strcmp (slp->item[j], s);

   if (result > 0)
     j2 = j;
   else if (result == 0)
     return 1;
   else
     j1 = j + 1;
 }
      if (j2 > j1)
 if (strcmp (slp->item[j1], s) == 0)
   return 1;
    }
  return 0;
}
