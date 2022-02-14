
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int buffer_index; scalar_t__ acodec_serial; } ;
typedef TYPE_1__ SDL_AMediaCodecBufferProxy ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_1(SDL_AMediaCodecBufferProxy *VAR_0)
{
    FUNC_0(VAR_0, 0, sizeof(SDL_AMediaCodecBufferProxy));
    VAR_0->buffer_index = -1;
    VAR_0->acodec_serial = 0;
}
