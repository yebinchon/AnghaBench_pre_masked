
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t length; scalar_t__ (* _cmp ) (int ,int ) ;int * contents; } ;
typedef TYPE_1__ git_vector ;


 int FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

int FUNC_2(const git_vector *VAR_0)
{
 size_t VAR_1;

 if (!FUNC_0(VAR_0))
  return -1;

 for (VAR_1 = 1; VAR_1 < VAR_0->length; ++VAR_1) {
  if (VAR_0->_cmp(VAR_0->contents[VAR_1 - 1], VAR_0->contents[VAR_1]) > 0)
   return -1;
 }

 return 0;
}
