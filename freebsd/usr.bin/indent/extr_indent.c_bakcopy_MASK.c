
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buff ;


 char const* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (int,char*,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (char const*,char*) ;
 char const* VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_6 (int ,char*,int) ;
 int VAR_4 ;
 int FUNC_7 (char const*,char*,char const*,int ) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (int,char*,int) ;

__attribute__((used)) static void
FUNC_10(void)
{
    int VAR_5,
                VAR_6;
    char VAR_7[8 * 1024];
    const char *VAR_8;


    for (VAR_8 = VAR_1; *VAR_8; VAR_8++);
    while (VAR_8 > VAR_1 && *VAR_8 != '/')
 VAR_8--;
    if (*VAR_8 == '/')
 VAR_8++;
    FUNC_7(VAR_0, "%s%s", VAR_8, VAR_4);


    VAR_6 = FUNC_1(VAR_0, 0600);
    if (VAR_6 < 0)
 FUNC_2(1, "%s", VAR_0);
    while ((VAR_5 = FUNC_6(FUNC_4(VAR_2), VAR_7, sizeof(VAR_7))) > 0)
 if (FUNC_9(VAR_6, VAR_7, VAR_5) != VAR_5)
     FUNC_2(1, "%s", VAR_0);
    if (VAR_5 < 0)
 FUNC_2(1, "%s", VAR_1);
    FUNC_0(VAR_6);
    FUNC_3(VAR_2);


    VAR_2 = FUNC_5(VAR_0, "r");
    if (VAR_2 == ((void*)0))
 FUNC_2(1, "%s", VAR_0);

    VAR_3 = FUNC_5(VAR_1, "w");
    if (VAR_3 == ((void*)0)) {
 FUNC_8(VAR_0);
 FUNC_2(1, "%s", VAR_1);
    }
}
