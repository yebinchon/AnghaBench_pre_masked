
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,char*,char const*,char*) ;
 int FUNC_2 (int ,char const*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_0, const char *VAR_1)
{
 if (!VAR_0)
  VAR_0 = "man";
 FUNC_1(VAR_0, "man", VAR_1, (char *)((void*)0));
 FUNC_2(FUNC_0("failed to exec '%s'"), VAR_0);
}
