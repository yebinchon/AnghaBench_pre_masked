
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) __attribute__((noreturn)) static void
FUNC_3(int VAR_4)
{
    (void) VAR_4;

    FUNC_1("Intentional segfault / bus error caught\n");
    FUNC_1("OK\n");
    FUNC_0(0);
}
