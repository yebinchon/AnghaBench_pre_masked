
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(const char *VAR_1, const char *VAR_2)
{
 if (VAR_1 && VAR_2)
  FUNC_1(VAR_0, "%s: %s\n", VAR_1, VAR_2);
 else if (VAR_1)
  FUNC_1(VAR_0, "%s\n", VAR_1);
 FUNC_1(VAR_0, "usage: blame [options] [<commit range>] <path>\n");
 FUNC_1(VAR_0, "\n");
 FUNC_1(VAR_0, "   <commit range>      example: `HEAD~10..HEAD`, or `1234abcd`\n");
 FUNC_1(VAR_0, "   -L <n,m>            process only line range n-m, counting from 1\n");
 FUNC_1(VAR_0, "   -M                  find line moves within and across files\n");
 FUNC_1(VAR_0, "   -C                  find line copies within and across files\n");
 FUNC_1(VAR_0, "   -F                  follow only the first parent commits\n");
 FUNC_1(VAR_0, "\n");
 FUNC_0(1);
}
