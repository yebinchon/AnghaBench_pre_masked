
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* plane_textures; scalar_t__ program; scalar_t__ fragment_shader; scalar_t__ vertex_shader; } ;
typedef TYPE_1__ IJK_GLES2_Renderer ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__*) ;

void FUNC_3(IJK_GLES2_Renderer *VAR_1)
{
    if (!VAR_1)
        return;

    if (VAR_1->vertex_shader)
        FUNC_1(VAR_1->vertex_shader);
    if (VAR_1->fragment_shader)
        FUNC_1(VAR_1->fragment_shader);
    if (VAR_1->program)
        FUNC_0(VAR_1->program);

    VAR_1->vertex_shader = 0;
    VAR_1->fragment_shader = 0;
    VAR_1->program = 0;

    for (int VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
        if (VAR_1->plane_textures[VAR_2]) {
            FUNC_2(1, &VAR_1->plane_textures[VAR_2]);
            VAR_1->plane_textures[VAR_2] = 0;
        }
    }
}
