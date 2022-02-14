
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int um4_mvp; int (* func_use ) (TYPE_2__*) ;} ;
struct TYPE_11__ {int m; } ;
typedef TYPE_1__ IJK_GLES_Matrix ;
typedef TYPE_2__ IJK_GLES2_Renderer ;
typedef int GLboolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,float,float,float,float,float,float) ;
 int FUNC_6 (int (*) (TYPE_2__*)) ;
 int FUNC_7 (int ,int,int ,int ) ;
 int FUNC_8 (TYPE_2__*) ;

GLboolean FUNC_9(IJK_GLES2_Renderer *VAR_2)
{
    if (!VAR_2)
        return VAR_0;

    FUNC_6(VAR_2->func_use);
    if (!VAR_2->func_use(VAR_2))
        return VAR_0;

    IJK_GLES_Matrix VAR_3;
    FUNC_5(&VAR_3, -1.0f, 1.0f, -1.0f, 1.0f, -1.0f, 1.0f);
    FUNC_7(VAR_2->um4_mvp, 1, VAR_0, VAR_3.m); FUNC_4("glUniformMatrix4fv(um4_mvp)");

    FUNC_1(VAR_2);
    FUNC_0(VAR_2);

    FUNC_3(VAR_2);
    FUNC_2(VAR_2);

    return VAR_1;
}
