
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_vector_cmp ;
struct TYPE_5__ {int * contents; int flags; scalar_t__ length; int _cmp; scalar_t__ _alloc_size; } ;
typedef TYPE_1__ git_vector ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (size_t,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;

int FUNC_3(git_vector *VAR_2, size_t VAR_3, git_vector_cmp VAR_4)
{
 FUNC_0(VAR_2);

 VAR_2->_alloc_size = 0;
 VAR_2->_cmp = VAR_4;
 VAR_2->length = 0;
 VAR_2->flags = VAR_0;
 VAR_2->contents = ((void*)0);

 return FUNC_2(VAR_2, FUNC_1(VAR_3, VAR_1));
}
