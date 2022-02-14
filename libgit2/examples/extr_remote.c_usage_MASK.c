
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*,...) ;
 int FUNC_2 (char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(const char *VAR_1, const char *VAR_2)
{
 FUNC_2("usage: remote add <name> <url>\n", VAR_0);
 FUNC_2("       remote remove <name>\n", VAR_0);
 FUNC_2("       remote rename <old> <new>\n", VAR_0);
 FUNC_2("       remote set-url [--push] <name> <newurl>\n", VAR_0);
 FUNC_2("       remote show [-v|--verbose]\n", VAR_0);

 if (VAR_1 && !VAR_2)
  FUNC_1(VAR_0, "\n%s\n", VAR_1);
 else if (VAR_1 && VAR_2)
  FUNC_1(VAR_0, "\n%s: %s\n", VAR_1, VAR_2);
 FUNC_0(1);
}
