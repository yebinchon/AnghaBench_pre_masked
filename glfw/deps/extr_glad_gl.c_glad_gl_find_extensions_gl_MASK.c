
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (char**,unsigned int) ;
 int FUNC_1 (int,char const**,unsigned int*,char***) ;
 void* FUNC_2 (int,char const*,unsigned int,char**,char*) ;

__attribute__((used)) static int FUNC_3( int VAR_3) {
    const char *VAR_4 = ((void*)0);
    unsigned int VAR_5 = 0;
    char **VAR_6 = ((void*)0);
    if (!FUNC_1(VAR_3, &VAR_4, &VAR_5, &VAR_6)) return 0;

    VAR_0 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, "GL_ARB_multisample");
    VAR_1 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, "GL_ARB_robustness");
    VAR_2 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, "GL_KHR_debug");

    FUNC_0(VAR_6, VAR_5);

    return 1;
}
