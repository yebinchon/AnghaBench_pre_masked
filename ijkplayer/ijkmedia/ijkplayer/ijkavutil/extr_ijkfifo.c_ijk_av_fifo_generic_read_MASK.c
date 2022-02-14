
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {void* end; void* rptr; } ;
typedef TYPE_1__ IjkFifoBuffer ;


 int FUNC_0 (void*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (void*,void*,int) ;

int FUNC_3(IjkFifoBuffer *VAR_0, void *VAR_1, int VAR_2,
                         void (*VAR_3)(void *, void *, int))
{

    do {
        int VAR_4 = FUNC_0(VAR_0->end - VAR_0->rptr, VAR_2);
        if (VAR_3)
            VAR_3(VAR_1, VAR_0->rptr, VAR_4);
        else {
            FUNC_2(VAR_1, VAR_0->rptr, VAR_4);
            VAR_1 = (uint8_t *)VAR_1 + VAR_4;
        }

        FUNC_1(VAR_0, VAR_4);
        VAR_2 -= VAR_4;
    } while (VAR_2 > 0);
    return 0;
}
