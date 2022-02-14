
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int,int,int,int) ;

void FUNC_1(void)
{
 FUNC_0("a", "[A-Z]", 0, 1, 0, 1);
 FUNC_0("A", "[A-Z]", 1, 1, 1, 1);
 FUNC_0("A", "[a-z]", 0, 1, 0, 1);
 FUNC_0("a", "[a-z]", 1, 1, 1, 1);
 FUNC_0("a", "[[:upper:]]", 0, 1, 0, 1);
 FUNC_0("A", "[[:upper:]]", 1, 1, 1, 1);
 FUNC_0("A", "[[:lower:]]", 0, 1, 0, 1);
 FUNC_0("a", "[[:lower:]]", 1, 1, 1, 1);
 FUNC_0("A", "[B-Za]", 0, 1, 0, 1);
 FUNC_0("a", "[B-Za]", 1, 1, 1, 1);
 FUNC_0("A", "[B-a]", 0, 1, 0, 1);
 FUNC_0("a", "[B-a]", 1, 1, 1, 1);
 FUNC_0("z", "[Z-y]", 0, 1, 0, 1);
 FUNC_0("Z", "[Z-y]", 1, 1, 1, 1);
}
