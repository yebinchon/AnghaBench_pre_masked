
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char GLubyte ;
typedef int GLint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (int ,int*) ;
 char* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char const) ;

__attribute__((used)) static void FUNC_6(int VAR_3, int VAR_4, int VAR_5)
{
    FUNC_4("%s context extensions:\n", FUNC_0(VAR_3));

    if (VAR_3 == VAR_0 && VAR_4 > 2)
    {
        GLint VAR_6;
        FUNC_1(VAR_2, &VAR_6);

        for (int VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
            FUNC_4(" %s\n", (const char*) FUNC_3(VAR_1, VAR_7));
    }
    else
    {
        const GLubyte* VAR_8 = FUNC_2(VAR_1);
        while (*VAR_8 != '\0')
        {
            FUNC_5(' ');

            while (*VAR_8 != '\0' && *VAR_8 != ' ')
            {
                FUNC_5(*VAR_8);
                VAR_8++;
            }

            while (*VAR_8 == ' ')
                VAR_8++;

            FUNC_5('\n');
        }
    }
}
