
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* plane_textures; scalar_t__ program; scalar_t__ fragment_shader; scalar_t__ vertex_shader; int (* func_destroy ) (TYPE_1__*) ;} ;
typedef TYPE_1__ IJK_GLES2_Renderer ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(IJK_GLES2_Renderer *VAR_1)
{
    if (!VAR_1)
        return;

    if (VAR_1->func_destroy)
        VAR_1->func_destroy(VAR_1);
    FUNC_1(VAR_1);
}
