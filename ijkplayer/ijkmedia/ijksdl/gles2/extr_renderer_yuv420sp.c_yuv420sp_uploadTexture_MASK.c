
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * plane_textures; } ;
struct TYPE_5__ {int* pitches; int h; int format; int const** pixels; } ;
typedef TYPE_1__ SDL_VoutOverlay ;
typedef TYPE_2__ IJK_GLES2_Renderer ;
typedef int GLubyte ;
typedef int GLsizei ;
typedef int GLboolean ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int const,int const,int ,int ,int ,int const*) ;

__attribute__((used)) static GLboolean FUNC_3(IJK_GLES2_Renderer *VAR_6, SDL_VoutOverlay *VAR_7)
{
    if (!VAR_6 || !VAR_7)
        return VAR_0;

    const GLsizei VAR_8[2] = { VAR_7->pitches[0], VAR_7->pitches[1] / 2 };
    const GLsizei VAR_9[2] = { VAR_7->h, VAR_7->h / 2 };
    const GLubyte *VAR_10[2] = { VAR_7->pixels[0], VAR_7->pixels[1] };

    switch (VAR_7->format) {
        case 128:
            break;
        default:
            FUNC_0("[yuv420sp] unexpected format %x\n", VAR_7->format);
            return VAR_0;
    }

    FUNC_1(VAR_3, VAR_6->plane_textures[0]);
    FUNC_2(VAR_3,
                 0,
                 VAR_1,
                 VAR_8[0],
                 VAR_9[0],
                 0,
                 VAR_1,
                 VAR_5,
                 VAR_10[0]);

    FUNC_1(VAR_3, VAR_6->plane_textures[1]);
    FUNC_2(VAR_3,
                 0,
                 VAR_2,
                 VAR_8[1],
                 VAR_9[1],
                 0,
                 VAR_2,
                 VAR_5,
                 VAR_10[1]);

    return VAR_4;
}
