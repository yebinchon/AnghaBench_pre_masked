
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int length; int _alloc_size; void** contents; } ;
typedef TYPE_1__ git_vector ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;

int FUNC_4(git_vector *VAR_0, void *VAR_1)
{
 FUNC_0(VAR_0);

 if (VAR_0->length >= VAR_0->_alloc_size &&
  FUNC_3(VAR_0, FUNC_1(VAR_0)) < 0)
  return -1;

 VAR_0->contents[VAR_0->length++] = VAR_1;

 FUNC_2(VAR_0, VAR_0->length <= 1);

 return 0;
}
