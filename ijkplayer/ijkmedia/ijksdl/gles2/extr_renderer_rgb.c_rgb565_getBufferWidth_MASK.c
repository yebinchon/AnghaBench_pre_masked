
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* pitches; } ;
typedef TYPE_1__ SDL_VoutOverlay ;
typedef int IJK_GLES2_Renderer ;
typedef int GLsizei ;



__attribute__((used)) static GLsizei FUNC_0(IJK_GLES2_Renderer *VAR_0, SDL_VoutOverlay *VAR_1)
{
    if (!VAR_1)
        return 0;

    return VAR_1->pitches[0] / 2;
}
