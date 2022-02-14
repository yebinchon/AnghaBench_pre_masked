
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int func_uploadTexture; int func_getBufferWidth; int func_use; int program; int * us2_sampler; } ;
typedef TYPE_1__ IJK_GLES2_Renderer ;


 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

IJK_GLES2_Renderer *FUNC_6()
{
    FUNC_0("create render rgb565\n");
    IJK_GLES2_Renderer *VAR_3 = FUNC_1(FUNC_4());
    if (!VAR_3)
        goto fail;

    VAR_3->us2_sampler[0] = FUNC_5(VAR_3->program, "us2_SamplerX"); FUNC_3("glGetUniformLocation(us2_SamplerX)");

    VAR_3->func_use = VAR_2;
    VAR_3->func_getBufferWidth = VAR_0;
    VAR_3->func_uploadTexture = VAR_1;

    return VAR_3;
fail:
    FUNC_2(VAR_3);
    return ((void*)0);
}
