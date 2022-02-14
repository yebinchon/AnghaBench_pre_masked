
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(char *VAR_0, const char *VAR_1) {
    FUNC_0("%-6s before: %d expected 1\n", VAR_1, ((int (*)()) VAR_0)());
    VAR_0[1] = 2;
    FUNC_0("%-6s after:  %d expected 2\n", VAR_1, ((int (*)()) VAR_0)());
}
