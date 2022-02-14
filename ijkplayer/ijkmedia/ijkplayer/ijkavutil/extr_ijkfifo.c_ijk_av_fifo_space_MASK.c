
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int end; int buffer; } ;
typedef TYPE_1__ IjkFifoBuffer ;


 int FUNC_0 (TYPE_1__ const*) ;

int FUNC_1(const IjkFifoBuffer *VAR_0)
{
    return VAR_0->end - VAR_0->buffer - FUNC_0(VAR_0);
}
