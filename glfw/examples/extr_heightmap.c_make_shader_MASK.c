
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GLuint ;
typedef int GLsizei ;
typedef scalar_t__ GLint ;
typedef scalar_t__ GLenum ;
typedef int GLchar ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int,int *,char*) ;
 int FUNC_5 (scalar_t__,int ,scalar_t__*) ;
 int FUNC_6 (scalar_t__,int,int const**,int *) ;
 int VAR_3 ;

__attribute__((used)) static GLuint FUNC_7(GLenum VAR_4, const char* VAR_5)
{
    GLuint VAR_6;
    GLint VAR_7;
    GLsizei VAR_8;
    char VAR_9[8192];

    VAR_6 = FUNC_2(VAR_4);
    if (VAR_6 != 0)
    {
        FUNC_6(VAR_6, 1, (const GLchar**)&VAR_5, ((void*)0));
        FUNC_1(VAR_6);
        FUNC_5(VAR_6, VAR_0, &VAR_7);
        if (VAR_7 != VAR_2)
        {
            FUNC_0(VAR_3, "ERROR: Failed to compile %s shader\n", (VAR_4 == VAR_1) ? "fragment" : "vertex" );
            FUNC_4(VAR_6, 8192, &VAR_8,VAR_9);
            FUNC_0(VAR_3, "ERROR: \n%s\n\n", VAR_9);
            FUNC_3(VAR_6);
            VAR_6 = 0;
        }
    }
    return VAR_6;
}
