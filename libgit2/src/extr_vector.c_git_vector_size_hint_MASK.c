
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t _alloc_size; } ;
typedef TYPE_1__ git_vector ;


 int FUNC_0 (TYPE_1__*,size_t) ;

int FUNC_1(git_vector *VAR_0, size_t VAR_1)
{
 if (VAR_0->_alloc_size >= VAR_1)
  return 0;
 return FUNC_0(VAR_0, VAR_1);
}
