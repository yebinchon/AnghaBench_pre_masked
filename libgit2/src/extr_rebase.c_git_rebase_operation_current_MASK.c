
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t current; scalar_t__ started; } ;
typedef TYPE_1__ git_rebase ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

size_t FUNC_1(git_rebase *VAR_1)
{
 FUNC_0(VAR_1);

 return VAR_1->started ? VAR_1->current : VAR_0;
}
