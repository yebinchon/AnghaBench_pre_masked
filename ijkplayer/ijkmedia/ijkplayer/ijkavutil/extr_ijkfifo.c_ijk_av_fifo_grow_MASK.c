
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int end; unsigned int buffer; } ;
typedef TYPE_1__ IjkFifoBuffer ;


 int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

int FUNC_3(IjkFifoBuffer *VAR_0, unsigned int VAR_1)
{
    unsigned int VAR_2 = VAR_0->end - VAR_0->buffer;
    if(VAR_1 + (unsigned)FUNC_2(VAR_0) < VAR_1)
        return -1;

    VAR_1 += FUNC_2(VAR_0);

    if (VAR_2 < VAR_1)
        return FUNC_1(VAR_0, FUNC_0(VAR_1, 2*VAR_2));
    return 0;
}
