
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * plane_textures; } ;
struct TYPE_5__ {int* pitches; int const h; int format; int const** pixels; } ;
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

 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int const,int const,int ,int ,int ,int const*) ;

__attribute__((used)) static GLboolean FUNC_3(IJK_GLES2_Renderer *VAR_5, SDL_VoutOverlay *VAR_6)
{
    if (!VAR_5 || !VAR_6)
        return VAR_0;

          int VAR_7[1] = { 0 };
    const GLsizei VAR_8[1] = { VAR_6->pitches[0] / 4 };
    const GLsizei VAR_9[3] = { VAR_6->h };
    const GLubyte *VAR_10[3] = { VAR_6->pixels[0] };

    switch (VAR_6->format) {
        case 128:
            break;
        default:
            FUNC_0("[rgbx8888] unexpected format %x\n", VAR_6->format);
            return VAR_0;
    }

    for (int VAR_11 = 0; VAR_11 < 1; ++VAR_11) {
        int VAR_12 = VAR_7[VAR_11];

        FUNC_1(VAR_2, VAR_5->plane_textures[VAR_11]);

        FUNC_2(VAR_2,
                     0,
                     VAR_1,
                     VAR_8[VAR_12],
                     VAR_9[VAR_12],
                     0,
                     VAR_1,
                     VAR_4,
                     VAR_10[VAR_12]);
    }

    return VAR_3;
}
