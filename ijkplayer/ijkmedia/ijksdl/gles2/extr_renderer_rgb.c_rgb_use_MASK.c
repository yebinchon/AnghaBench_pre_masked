
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* plane_textures; int * us2_sampler; int program; } ;
typedef TYPE_1__ IJK_GLES2_Renderer ;
typedef int GLboolean ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int,scalar_t__*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static GLboolean FUNC_10(IJK_GLES2_Renderer *VAR_10)
{
    FUNC_0("use render rgb\n");
    FUNC_5(VAR_9, 1);

    FUNC_9(VAR_10->program); FUNC_1("glUseProgram");

    if (0 == VAR_10->plane_textures[0])
        FUNC_4(1, VAR_10->plane_textures);

    for (int VAR_11 = 0; VAR_11 < 1; ++VAR_11) {
        FUNC_2(VAR_2 + VAR_11);
        FUNC_3(VAR_3, VAR_10->plane_textures[VAR_11]);

        FUNC_7(VAR_3, VAR_4, VAR_1);
        FUNC_7(VAR_3, VAR_5, VAR_1);
        FUNC_6(VAR_3, VAR_6, VAR_0);
        FUNC_6(VAR_3, VAR_7, VAR_0);

        FUNC_8(VAR_10->us2_sampler[VAR_11], VAR_11);
    }

    return VAR_8;
}
