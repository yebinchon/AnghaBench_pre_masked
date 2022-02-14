
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf_stack ;
typedef int GLuint ;
typedef int GLsizei ;
typedef int GLint ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int,int *,char*) ;
 int FUNC_3 (int ,int ,int*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(GLuint VAR_1)
{
    if (!VAR_1)
        return;

    GLint VAR_2 = 0;
    FUNC_3(VAR_1, VAR_0, &VAR_2);
    if (!VAR_2) {
        FUNC_0("[GLES2][Shader] empty info\n");
        return;
    }

    char VAR_3[32];
    char *VAR_4 = ((void*)0);
    char *VAR_5 = VAR_3;
    GLsizei VAR_6 = sizeof(VAR_3) - 1;
    if (VAR_2 > sizeof(VAR_3)) {
        VAR_4 = (char*) FUNC_4(VAR_2 + 1);
        if (VAR_4) {
            VAR_5 = VAR_4;
            VAR_6 = VAR_2;
        }
    }

    FUNC_2(VAR_1, VAR_6, ((void*)0), VAR_5);
    FUNC_0("[GLES2][Shader] error %s\n", VAR_5);

    if (VAR_4)
        FUNC_1(VAR_4);
}
