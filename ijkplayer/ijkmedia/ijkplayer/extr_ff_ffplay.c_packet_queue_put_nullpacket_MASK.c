
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int stream_index; scalar_t__ size; int * data; } ;
typedef int PacketQueue ;
typedef TYPE_1__ AVPacket ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(PacketQueue *VAR_0, int VAR_1)
{
    AVPacket VAR_2, *VAR_3 = &VAR_2;
    FUNC_0(VAR_3);
    VAR_3->data = ((void*)0);
    VAR_3->size = 0;
    VAR_3->stream_index = VAR_1;
    return FUNC_1(VAR_0, VAR_3);
}
