
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int*,int*) ;
 char* FUNC_1 () ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(void)
{
    int VAR_3, VAR_4, VAR_5;
    FUNC_0(&VAR_3, &VAR_4, &VAR_5);

    FUNC_2("GLFW header version: %u.%u.%u\n",
           VAR_0,
           VAR_1,
           VAR_2);
    FUNC_2("GLFW library version: %u.%u.%u\n", VAR_3, VAR_4, VAR_5);
    FUNC_2("GLFW library version string: \"%s\"\n", FUNC_1());
}
