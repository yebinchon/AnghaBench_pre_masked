
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void uint8_t ;
struct TYPE_3__ {void* end; int buffer; void* rptr; } ;
typedef TYPE_1__ IjkFifoBuffer ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (void*,void*,int) ;

int FUNC_2(IjkFifoBuffer *VAR_0, void *VAR_1, int VAR_2,
                         void (*VAR_3)(void *, void *, int))
{

    uint8_t *VAR_4 = VAR_0->rptr;

    do {
        int VAR_5 = FUNC_0(VAR_0->end - VAR_4, VAR_2);
        if (VAR_3)
            VAR_3(VAR_1, VAR_4, VAR_5);
        else {
            FUNC_1(VAR_1, VAR_4, VAR_5);
            VAR_1 = (uint8_t *)VAR_1 + VAR_5;
        }

        VAR_4 += VAR_5;
        if (VAR_4 >= VAR_0->end)
            VAR_4 -= VAR_0->end - VAR_0->buffer;
        VAR_2 -= VAR_5;
    } while (VAR_2 > 0);

    return 0;
}
