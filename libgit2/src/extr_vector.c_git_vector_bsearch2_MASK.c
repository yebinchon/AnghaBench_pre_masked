
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ git_vector_cmp ;
struct TYPE_4__ {int length; int contents; int _cmp; } ;
typedef TYPE_1__ git_vector ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,void const*,scalar_t__,size_t*) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(
 size_t *VAR_0,
 git_vector *VAR_1,
 git_vector_cmp VAR_2,
 const void *VAR_3)
{
 FUNC_0(VAR_1 && VAR_3 && VAR_2);


 if (!VAR_1->_cmp)
  return -1;

 FUNC_2(VAR_1);

 return FUNC_1(VAR_1->contents, VAR_1->length, VAR_3, VAR_2, VAR_0);
}
