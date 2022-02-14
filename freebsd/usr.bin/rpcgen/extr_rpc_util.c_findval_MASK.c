
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * val; struct TYPE_3__* next; } ;
typedef TYPE_1__ list ;
typedef int definition ;


 int FUNC_0 (int *,char const*) ;

definition *
FUNC_1(list *VAR_0, const char *VAR_1, int (*VAR_2)(definition *, const char *))
{
 for (; VAR_0 != ((void*)0); VAR_0 = VAR_0->next) {
  if ((*VAR_2) (VAR_0->val, VAR_1)) {
   return (VAR_0->val);
  }
 }
 return (((void*)0));
}
