
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * linesize; int * data; } ;
struct TYPE_5__ {int planes; int * pitches; int * pixels; } ;
typedef TYPE_1__ SDL_VoutOverlay ;
typedef TYPE_2__ AVFrame ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(SDL_VoutOverlay *VAR_1, AVFrame *VAR_2, int VAR_3)
{
    VAR_1->planes = VAR_3;

    for (int VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
        VAR_1->pixels[VAR_4] = VAR_2->data[VAR_4];
        VAR_1->pitches[VAR_4] = VAR_2->linesize[VAR_4];
    }
}
