
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int format; int silence; int size; int channels; int samples; } ;
typedef TYPE_1__ SDL_AudioSpec ;



 int FUNC_0 (int) ;

void FUNC_1(SDL_AudioSpec * VAR_0)
{
    switch (VAR_0->format) {
    case 128:
        VAR_0->silence = 0x80;
        break;
    default:
        VAR_0->silence = 0x00;
        break;
    }
    VAR_0->size = FUNC_0(VAR_0->format) / 8;
    VAR_0->size *= VAR_0->channels;
    VAR_0->size *= VAR_0->samples;
}
