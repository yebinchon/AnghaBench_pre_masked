
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    char VAR_0[160];
    int VAR_1;


    VAR_1 = FUNC_1(VAR_0, FUNC_0("hello\nworld\n"), 1, 1);
    FUNC_2(VAR_1 == 0);
    FUNC_2(FUNC_3(VAR_0, "hello\n^\n") == 0);

    VAR_1 = FUNC_1(VAR_0, FUNC_0("hello\nworld\n"), 1, 5);
    FUNC_2(VAR_1 == 0);
    FUNC_2(FUNC_3(VAR_0, "hello\n    ^\n") == 0);

    VAR_1 = FUNC_1(VAR_0, FUNC_0("hello\nworld\n"), 1, 6);
    FUNC_2(VAR_1 == 0);
    FUNC_2(FUNC_3(VAR_0, "hello\n     ^\n") == 0);

    VAR_1 = FUNC_1(VAR_0, FUNC_0("hello\nworld\n"), 1, 7);
    FUNC_2(VAR_1 == 0);
    FUNC_2(FUNC_3(VAR_0, "hello\n     ^\n") == 0);

    VAR_1 = FUNC_1(VAR_0, FUNC_0("hello\nworld\n"), 2, 1);
    FUNC_2(VAR_1 == 0);
    FUNC_2(FUNC_3(VAR_0, "world\n^\n") == 0);

    VAR_1 = FUNC_1(VAR_0, FUNC_0("hello\nworld\n"), 2, 5);
    FUNC_2(VAR_1 == 0);
    FUNC_2(FUNC_3(VAR_0, "world\n    ^\n") == 0);

    VAR_1 = FUNC_1(VAR_0, FUNC_0("hello\nworld\n"), 1, 7);
    FUNC_2(VAR_1 == 0);
    FUNC_2(FUNC_3(VAR_0, "hello\n     ^\n") == 0);

    VAR_1 = FUNC_1(
        VAR_0, FUNC_0("_________1_________2_________3_________4_________5_________6_________7_________\nworld\n"), 1, 5);
    FUNC_2(VAR_1 == 0);
    FUNC_2(FUNC_3(VAR_0, "_________1_________2_________3_________4_________5_________6_________7______\n    ^\n") == 0);

    VAR_1 = FUNC_1(
        VAR_0, FUNC_0("_________1_________2_________3_________4_________5_________6_________7_________\nworld\n"), 1, 60);
    FUNC_2(VAR_1 == 0);
    FUNC_2(FUNC_3(VAR_0, "_________3_________4_________5_________6_________7_________\n                                       ^\n") == 0);

    VAR_1 = FUNC_1(VAR_0, FUNC_0("hello"), 1, 20);
    FUNC_2(VAR_1 == 0);
    FUNC_2(FUNC_3(VAR_0, "hello\n     ^\n") == 0);


    VAR_1 = FUNC_1(VAR_0, FUNC_0("hello\nworld\n"), 0, 1);
    FUNC_2(VAR_1 != 0);

    VAR_1 = FUNC_1(VAR_0, FUNC_0("hello\nworld\n"), 1, 0);
    FUNC_2(VAR_1 != 0);

    VAR_1 = FUNC_1(VAR_0, FUNC_0("hello\nworld\n"), 4, 1);
    FUNC_2(VAR_1 != 0);
}
