
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t _alloc_size; size_t length; int * contents; } ;
typedef TYPE_1__ git_vector ;


 int FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,size_t) ;

int FUNC_2(git_vector *VAR_0, size_t VAR_1)
{
 if (VAR_1 > VAR_0->_alloc_size &&
  FUNC_1(VAR_0, VAR_1) < 0)
  return -1;

 if (VAR_1 > VAR_0->length)
  FUNC_0(&VAR_0->contents[VAR_0->length], 0,
   sizeof(void *) * (VAR_1 - VAR_0->length));

 VAR_0->length = VAR_1;

 return 0;
}
