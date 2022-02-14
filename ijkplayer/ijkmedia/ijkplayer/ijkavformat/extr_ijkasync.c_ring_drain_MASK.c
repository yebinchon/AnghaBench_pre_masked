
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int read_pos; } ;
typedef TYPE_1__ RingBuffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(RingBuffer *VAR_0, int VAR_1)
{
    FUNC_0(VAR_1 >= -FUNC_2(VAR_0));
    FUNC_0(VAR_1 <= -FUNC_1(VAR_0));
    VAR_0->read_pos += VAR_1;
    return 0;
}
