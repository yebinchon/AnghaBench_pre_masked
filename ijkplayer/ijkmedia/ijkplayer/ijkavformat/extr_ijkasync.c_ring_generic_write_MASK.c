
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fifo; } ;
typedef TYPE_1__ RingBuffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,void*,int,int (*) (void*,void*,int)) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(RingBuffer *VAR_0, void *VAR_1, int VAR_2, int (*VAR_3)(void*, void*, int))
{
    FUNC_0(VAR_2 <= FUNC_2(VAR_0));
    return FUNC_1(VAR_0->fifo, VAR_1, VAR_2, VAR_3);
}
