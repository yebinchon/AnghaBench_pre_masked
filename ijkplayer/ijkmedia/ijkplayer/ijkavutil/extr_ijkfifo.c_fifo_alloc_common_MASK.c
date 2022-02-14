
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* buffer; void* end; } ;
typedef TYPE_1__ IjkFifoBuffer ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static IjkFifoBuffer *FUNC_3(void *VAR_0, size_t VAR_1)
{
    IjkFifoBuffer *VAR_2;
    if (!VAR_0)
        return ((void*)0);
    VAR_2 = FUNC_0(1, sizeof(IjkFifoBuffer));
    if (!VAR_2) {
        FUNC_1(VAR_0);
        return ((void*)0);
    }
    VAR_2->buffer = VAR_0;
    VAR_2->end = VAR_2->buffer + VAR_1;
    FUNC_2(VAR_2);
    return VAR_2;
}
