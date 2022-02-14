
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int format; } ;
typedef TYPE_1__ IJK_GLES2_Renderer ;
typedef int GLboolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

GLboolean FUNC_1(IJK_GLES2_Renderer *VAR_2, int VAR_3)
{
    if (!FUNC_0(VAR_2))
        return VAR_0;

    return VAR_2->format == VAR_3 ? VAR_1 : VAR_0;
}
