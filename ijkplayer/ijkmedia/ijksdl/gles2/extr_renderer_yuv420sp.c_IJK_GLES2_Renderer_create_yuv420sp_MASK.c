
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int func_uploadTexture; int func_getBufferWidth; int func_use; int program; void* um3_color_conversion; void** us2_sampler; } ;
typedef TYPE_1__ IJK_GLES2_Renderer ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 void* FUNC_4 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

IJK_GLES2_Renderer *FUNC_5()
{
    IJK_GLES2_Renderer *VAR_3 = FUNC_0(FUNC_3());
    if (!VAR_3)
        goto fail;

    VAR_3->us2_sampler[0] = FUNC_4(VAR_3->program, "us2_SamplerX"); FUNC_2("glGetUniformLocation(us2_SamplerX)");
    VAR_3->us2_sampler[1] = FUNC_4(VAR_3->program, "us2_SamplerY"); FUNC_2("glGetUniformLocation(us2_SamplerY)");

    VAR_3->um3_color_conversion = FUNC_4(VAR_3->program, "um3_ColorConversion"); FUNC_2("glGetUniformLocation(um3_ColorConversionMatrix)");

    VAR_3->func_use = VAR_2;
    VAR_3->func_getBufferWidth = VAR_0;
    VAR_3->func_uploadTexture = VAR_1;

    return VAR_3;
fail:
    FUNC_1(VAR_3);
    return ((void*)0);
}
