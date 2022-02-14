
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int) ;

void FUNC_1(void)
{
    FUNC_0("ne", 1, 1);
    FUNC_0("ne", 1, 0);

    FUNC_0("e", 1, 1);
    FUNC_0("e", 1, 0);

    FUNC_0("l", 1, 1);
    FUNC_0("l", 1, 0);
    FUNC_0("l", 1, -1);

    FUNC_0("le", 1, 1);
    FUNC_0("le", 1, 0);
    FUNC_0("le", 1, -1);

    FUNC_0("ge", 1, 1);
    FUNC_0("ge", 1, 0);
    FUNC_0("ge", -1, 1);

    FUNC_0("g", 1, 1);
    FUNC_0("g", 1, 0);
    FUNC_0("g", 1, -1);

    FUNC_0("b", 1, 1);
    FUNC_0("b", 1, 0);
    FUNC_0("b", 1, -1);

    FUNC_0("be", 1, 1);
    FUNC_0("be", 1, 0);
    FUNC_0("be", 1, -1);

    FUNC_0("ae", 1, 1);
    FUNC_0("ae", 1, 0);
    FUNC_0("ae", 1, -1);

    FUNC_0("a", 1, 1);
    FUNC_0("a", 1, 0);
    FUNC_0("a", 1, -1);


    FUNC_0("p", 1, 1);
    FUNC_0("p", 1, 0);

    FUNC_0("np", 1, 1);
    FUNC_0("np", 1, 0);

    FUNC_0("o", 0x7fffffff, 0);
    FUNC_0("o", 0x7fffffff, -1);

    FUNC_0("no", 0x7fffffff, 0);
    FUNC_0("no", 0x7fffffff, -1);

    FUNC_0("s", 0, 1);
    FUNC_0("s", 0, -1);
    FUNC_0("s", 0, 0);

    FUNC_0("ns", 0, 1);
    FUNC_0("ns", 0, -1);
    FUNC_0("ns", 0, 0);
}
