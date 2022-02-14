
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ndptr ;
struct TYPE_4__ {struct macro_definition* d; char const* name; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,unsigned int*) ;
 TYPE_1__* FUNC_1 (int *,unsigned int*) ;

void
FUNC_2(void (*VAR_1)(const char *, struct macro_definition *))
{
 ndptr VAR_2;
 unsigned int VAR_3;

 for (VAR_2 = FUNC_0(&VAR_0, &VAR_3); VAR_2 != ((void*)0);
     VAR_2 = FUNC_1(&VAR_0, &VAR_3))
  if (VAR_2->d != ((void*)0))
   VAR_1(VAR_2->name, VAR_2->d);
}
