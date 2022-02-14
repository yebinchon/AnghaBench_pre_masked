
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t length; void** contents; } ;
typedef TYPE_1__ git_vector ;


 scalar_t__ FUNC_0 (TYPE_1__*,size_t) ;

int FUNC_1(void **VAR_0, git_vector *VAR_1, size_t VAR_2, void *VAR_3)
{
 if (VAR_2 + 1 > VAR_1->length) {
  if (FUNC_0(VAR_1, VAR_2 + 1) < 0)
   return -1;
 }

 if (VAR_0 != ((void*)0))
  *VAR_0 = VAR_1->contents[VAR_2];

 VAR_1->contents[VAR_2] = VAR_3;

 return 0;
}
