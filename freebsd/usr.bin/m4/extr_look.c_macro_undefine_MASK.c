
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct macro_definition {scalar_t__ defn; struct macro_definition* next; } ;
typedef TYPE_1__* ndptr ;
struct TYPE_3__ {struct macro_definition* d; } ;


 int FUNC_0 (struct macro_definition*) ;
 TYPE_1__* FUNC_1 (char const*) ;
 scalar_t__ VAR_0 ;

void
FUNC_2(const char *VAR_1)
{
 ndptr VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 != ((void*)0)) {
  struct macro_definition *VAR_3, *VAR_4;

  for (VAR_3 = VAR_2->d; VAR_3 != ((void*)0); VAR_3 = VAR_4) {
   VAR_4 = VAR_3->next;
   if (VAR_3->defn != VAR_0)
    FUNC_0(VAR_3->defn);
   FUNC_0(VAR_3);
  }
  VAR_2->d = ((void*)0);
 }
}
