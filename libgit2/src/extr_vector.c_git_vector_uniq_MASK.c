
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int (* git_vector_cmp ) (void*,void*) ;
struct TYPE_4__ {int length; void** contents; int (* _cmp ) (void*,void*) ;} ;
typedef TYPE_1__ git_vector ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (void*,void*) ;

void FUNC_2(git_vector *VAR_0, void (*VAR_1)(void *))
{
 git_vector_cmp VAR_2;
 size_t VAR_3, VAR_4;

 if (VAR_0->length <= 1)
  return;

 FUNC_0(VAR_0);
 VAR_2 = VAR_0->_cmp ? VAR_0->_cmp : FUNC_1;

 for (VAR_3 = 0, VAR_4 = 1 ; VAR_4 < VAR_0->length; ++VAR_4)
  if (!VAR_2(VAR_0->contents[VAR_3], VAR_0->contents[VAR_4])) {
   if (VAR_1)
    VAR_1(VAR_0->contents[VAR_3]);

   VAR_0->contents[VAR_3] = VAR_0->contents[VAR_4];
  } else
   VAR_0->contents[++VAR_3] = VAR_0->contents[VAR_4];

 VAR_0->length -= VAR_4 - VAR_3 - 1;
}
