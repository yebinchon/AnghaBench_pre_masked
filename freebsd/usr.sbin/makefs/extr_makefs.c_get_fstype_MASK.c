
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * type; } ;
typedef TYPE_1__ fstype_t ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*) ;

__attribute__((used)) static fstype_t *
FUNC_1(const char *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2].type != ((void*)0); VAR_2++)
  if (FUNC_0(VAR_0[VAR_2].type, VAR_1) == 0)
   return (&VAR_0[VAR_2]);
 return (((void*)0));
}
