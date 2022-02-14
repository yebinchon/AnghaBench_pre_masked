
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void** contents; size_t length; size_t _alloc_size; } ;
typedef TYPE_1__ git_vector ;



void **FUNC_0(size_t *VAR_0, size_t *VAR_1, git_vector *VAR_2)
{
 void **VAR_3 = VAR_2->contents;

 if (VAR_0)
  *VAR_0 = VAR_2->length;
 if (VAR_1)
  *VAR_1 = VAR_2->_alloc_size;

 VAR_2->_alloc_size = 0;
 VAR_2->length = 0;
 VAR_2->contents = ((void*)0);

 return VAR_3;
}
