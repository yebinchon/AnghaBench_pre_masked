
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* opaque; } ;
typedef TYPE_1__ IjkIOApplicationContext ;


 TYPE_1__* FUNC_0 (int,int) ;

int FUNC_1(IjkIOApplicationContext **VAR_0, void *VAR_1) {
    IjkIOApplicationContext *VAR_2 = ((void*)0);

    VAR_2 = FUNC_0(1, sizeof(IjkIOApplicationContext));
    if (!VAR_2)
        return -1;

    VAR_2->opaque = VAR_1;

    *VAR_0 = VAR_2;
    return 0;
}
