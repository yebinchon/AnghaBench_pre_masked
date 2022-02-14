
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mutex; } ;
typedef TYPE_1__ IjkMediaMeta ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;

IjkMediaMeta *FUNC_3()
{
    IjkMediaMeta *VAR_0 = (IjkMediaMeta *)FUNC_1(1, sizeof(IjkMediaMeta));
    if (!VAR_0)
        return ((void*)0);

    VAR_0->mutex = FUNC_0();
    if (!VAR_0->mutex)
        goto fail;

    return VAR_0;
fail:
    FUNC_2(VAR_0);
    return ((void*)0);
}
