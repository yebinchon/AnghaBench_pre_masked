
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gravity; int vertices_changed; scalar_t__ layer_width; scalar_t__ layer_height; } ;
typedef TYPE_1__ IJK_GLES2_Renderer ;
typedef scalar_t__ GLsizei ;
typedef int GLboolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

GLboolean FUNC_0(IJK_GLES2_Renderer *VAR_3, int VAR_4, GLsizei VAR_5, GLsizei VAR_6)
{
    if (VAR_3->gravity != VAR_4 && VAR_4 >= VAR_2 && VAR_4 <= VAR_1)
        VAR_3->vertices_changed = 1;
    else if (VAR_3->layer_width != VAR_5)
        VAR_3->vertices_changed = 1;
    else if (VAR_3->layer_height != VAR_6)
        VAR_3->vertices_changed = 1;
    else
        return VAR_0;

    VAR_3->gravity = VAR_4;
    VAR_3->layer_width = VAR_5;
    VAR_3->layer_height = VAR_6;
    return VAR_0;
}
