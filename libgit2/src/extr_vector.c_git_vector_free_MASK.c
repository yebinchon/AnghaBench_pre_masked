
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ _alloc_size; scalar_t__ length; int * contents; } ;
typedef TYPE_1__ git_vector ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

void FUNC_2(git_vector *VAR_0)
{
 FUNC_0(VAR_0);

 FUNC_1(VAR_0->contents);
 VAR_0->contents = ((void*)0);

 VAR_0->length = 0;
 VAR_0->_alloc_size = 0;
}
