
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static void
FUNC_2(char const *VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_1, "%s\n", VAR_3);
 FUNC_1(VAR_1,
     "Usage: ministat [-C column] [-c confidence] [-d delimiter(s)] [-Ans] [-w width] [file [file ...]]\n");
 FUNC_1(VAR_1, "\tconfidence = {");
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_1(VAR_1, "%s%d%%",
      VAR_4 ? ", " : "",
      VAR_2[VAR_4]);
 }
 FUNC_1(VAR_1, "}\n");
 FUNC_1(VAR_1, "\t-A : print statistics only. suppress the graph.\n");
 FUNC_1(VAR_1, "\t-C : column number to extract (starts and defaults to 1)\n");
 FUNC_1(VAR_1, "\t-d : delimiter(s) string, default to \" \\t\"\n");
 FUNC_1(VAR_1, "\t-n : print summary statistics only, no graph/test\n");
 FUNC_1(VAR_1, "\t-s : print avg/median/stddev bars on separate lines\n");
 FUNC_1(VAR_1, "\t-w : width of graph/test output (default 74 or terminal width)\n");
 FUNC_0 (2);
}
