
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(void)
{
    FUNC_1(FUNC_0("abcd", 4, "bc", 2) == 1);
    FUNC_1(FUNC_0("abcd", 3, "bc", 2) == 1);
    FUNC_1(FUNC_0("abcd", 2, "bc", 2) == -1);
}
