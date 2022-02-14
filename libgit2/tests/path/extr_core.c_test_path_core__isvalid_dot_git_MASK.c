
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,char*,int ,int ) ;

void FUNC_2(void)
{
 FUNC_0(1, FUNC_1(((void*)0), ".git", 0, 0));
 FUNC_0(1, FUNC_1(((void*)0), ".git/foo", 0, 0));
 FUNC_0(1, FUNC_1(((void*)0), "foo/.git", 0, 0));
 FUNC_0(1, FUNC_1(((void*)0), "foo/.git/bar", 0, 0));
 FUNC_0(1, FUNC_1(((void*)0), "foo/.GIT/bar", 0, 0));
 FUNC_0(1, FUNC_1(((void*)0), "foo/bar/.Git", 0, 0));

 FUNC_0(0, FUNC_1(((void*)0), ".git", 0, VAR_0));
 FUNC_0(0, FUNC_1(((void*)0), ".git/foo", 0, VAR_0));
 FUNC_0(0, FUNC_1(((void*)0), "foo/.git", 0, VAR_0));
 FUNC_0(0, FUNC_1(((void*)0), "foo/.git/bar", 0, VAR_0));
 FUNC_0(0, FUNC_1(((void*)0), "foo/.GIT/bar", 0, VAR_0));
 FUNC_0(0, FUNC_1(((void*)0), "foo/bar/.Git", 0, VAR_0));

 FUNC_0(1, FUNC_1(((void*)0), "!git", 0, 0));
 FUNC_0(1, FUNC_1(((void*)0), "foo/!git", 0, 0));
 FUNC_0(1, FUNC_1(((void*)0), "!git/bar", 0, 0));
 FUNC_0(1, FUNC_1(((void*)0), ".tig", 0, 0));
 FUNC_0(1, FUNC_1(((void*)0), "foo/.tig", 0, 0));
 FUNC_0(1, FUNC_1(((void*)0), ".tig/bar", 0, 0));
}
