
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* plane_textures; int um3_color_conversion; int * us2_sampler; int program; } ;
typedef TYPE_1__ IJK_GLES2_Renderer ;
typedef int GLboolean ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int,scalar_t__*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int,int ,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static GLboolean FUNC_12(IJK_GLES2_Renderer *VAR_11)
{
    FUNC_0("use render yuv420p\n");
    FUNC_6(VAR_10, 1);

    FUNC_11(VAR_11->program); FUNC_1("glUseProgram");

    if (0 == VAR_11->plane_textures[0])
        FUNC_5(3, VAR_11->plane_textures);

    for (int VAR_12 = 0; VAR_12 < 3; ++VAR_12) {
        FUNC_3(VAR_3 + VAR_12);
        FUNC_4(VAR_4, VAR_11->plane_textures[VAR_12]);

        FUNC_8(VAR_4, VAR_5, VAR_2);
        FUNC_8(VAR_4, VAR_6, VAR_2);
        FUNC_7(VAR_4, VAR_7, VAR_0);
        FUNC_7(VAR_4, VAR_8, VAR_0);

        FUNC_9(VAR_11->us2_sampler[VAR_12], VAR_12);
    }

    FUNC_10(VAR_11->um3_color_conversion, 1, VAR_1, FUNC_2());

    return VAR_9;
}
