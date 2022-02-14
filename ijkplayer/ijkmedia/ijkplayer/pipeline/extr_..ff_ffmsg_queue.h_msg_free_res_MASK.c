
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * obj; int (* free_l ) (int *) ;} ;
typedef TYPE_1__ AVMessage ;


 int FUNC_0 (int (*) (int *)) ;
 int FUNC_1 (int *) ;

__attribute__((used)) inline static void FUNC_2(AVMessage *VAR_0)
{
    if (!VAR_0 || !VAR_0->obj)
        return;
    FUNC_0(VAR_0->free_l);
    VAR_0->free_l(VAR_0->obj);
    VAR_0->obj = ((void*)0);
}
