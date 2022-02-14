
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ program; int um4_mvp; void* av2_texcoord; void* av4_position; void* fragment_shader; void* vertex_shader; } ;
typedef TYPE_1__ IJK_GLES2_Renderer ;
typedef int GLint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char const* FUNC_3 () ;
 void* FUNC_4 (int ,char const*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (int,int) ;
 int FUNC_8 (scalar_t__,void*) ;
 scalar_t__ FUNC_9 () ;
 void* FUNC_10 (scalar_t__,char*) ;
 int FUNC_11 (scalar_t__,int ,int *) ;
 int FUNC_12 (scalar_t__,char*) ;
 int FUNC_13 (scalar_t__) ;

IJK_GLES2_Renderer *FUNC_14(const char *VAR_4)
{
    FUNC_6(VAR_4);

    IJK_GLES2_Renderer *VAR_5 = (IJK_GLES2_Renderer *)FUNC_7(1, sizeof(IJK_GLES2_Renderer));
    if (!VAR_5)
        goto fail;

    VAR_5->vertex_shader = FUNC_4(VAR_3, FUNC_3());
    if (!VAR_5->vertex_shader)
        goto fail;

    VAR_5->fragment_shader = FUNC_4(VAR_1, VAR_4);
    if (!VAR_5->fragment_shader)
        goto fail;

    VAR_5->program = FUNC_9(); FUNC_1("glCreateProgram");
    if (!VAR_5->program)
        goto fail;

    FUNC_8(VAR_5->program, VAR_5->vertex_shader); FUNC_1("glAttachShader(vertex)");
    FUNC_8(VAR_5->program, VAR_5->fragment_shader); FUNC_1("glAttachShader(fragment)");
    FUNC_13(VAR_5->program); FUNC_1("glLinkProgram");
    GLint VAR_6 = VAR_0;
    FUNC_11(VAR_5->program, VAR_2, &VAR_6);
    if (!VAR_6)
        goto fail;


    VAR_5->av4_position = FUNC_10(VAR_5->program, "av4_Position"); FUNC_2("glGetAttribLocation(av4_Position)");
    VAR_5->av2_texcoord = FUNC_10(VAR_5->program, "av2_Texcoord"); FUNC_2("glGetAttribLocation(av2_Texcoord)");
    VAR_5->um4_mvp = FUNC_12(VAR_5->program, "um4_ModelViewProjection"); FUNC_2("glGetUniformLocation(um4_ModelViewProjection)");

    return VAR_5;

fail:

    if (VAR_5 && VAR_5->program)
        FUNC_5(VAR_5->program);

    FUNC_0(VAR_5);
    return ((void*)0);
}
