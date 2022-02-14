
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GLuint ;
typedef scalar_t__ GLint ;
typedef int GLenum ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,int ,scalar_t__*) ;
 int FUNC_8 (scalar_t__,int,char const**,int *) ;

GLuint FUNC_9(GLenum VAR_1, const char *VAR_2)
{
    FUNC_3(VAR_2);

    GLuint VAR_3 = FUNC_5(VAR_1); FUNC_0("glCreateShader");
    if (!VAR_3)
        return 0;

    FUNC_3(VAR_2);

    FUNC_8(VAR_3, 1, &VAR_2, ((void*)0)); FUNC_1("glShaderSource");
    FUNC_4(VAR_3); FUNC_1("glCompileShader");

    GLint VAR_4 = 0;
    FUNC_7(VAR_3, VAR_0, &VAR_4);
    if (!VAR_4)
        goto fail;

    return VAR_3;

fail:

    if (VAR_3) {
        FUNC_2(VAR_3);
        FUNC_6(VAR_3);
    }

    return 0;
}
