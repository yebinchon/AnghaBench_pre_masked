
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* texcoords; } ;
typedef TYPE_1__ IJK_GLES2_Renderer ;
typedef float GLfloat ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(IJK_GLES2_Renderer *VAR_0, GLfloat VAR_1)
{
    FUNC_0("IJK_GLES2_Renderer_TexCoords_cropRight\n");
    VAR_0->texcoords[0] = 0.0f;
    VAR_0->texcoords[1] = 1.0f;
    VAR_0->texcoords[2] = 1.0f - VAR_1;
    VAR_0->texcoords[3] = 1.0f;
    VAR_0->texcoords[4] = 0.0f;
    VAR_0->texcoords[5] = 0.0f;
    VAR_0->texcoords[6] = 1.0f - VAR_1;
    VAR_0->texcoords[7] = 0.0f;
}
