
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_2(int VAR_2, int VAR_3, int VAR_4)
{

 if (VAR_4) {
  FUNC_1(" [%s Read %s]  [%s Write %s]  "
      "%s[=========== Total ============]\n"
      " KB/t   tps    MB/s%s  KB/t   tps    MB/s%s  "
      "%sKB/t   tps    MB/s    ms  ql  %%b",
      VAR_1 ? "========" : "=====",
      VAR_1 ? "========" : "=====",
      VAR_1 ? "========" : "=====",
      VAR_1 ? "=======" : "====",
      VAR_1 ? "[Commit ]  " : "",
      VAR_1 ? "    ms" : "",
      VAR_1 ? "    ms" : "",
      VAR_1 ? "tps    ms  " : "");
 } else {
  FUNC_1("%s%6.6s %6.6s %6.6s %6.6s %6.6s %6.6s %6.6s %6.6s",
      ((VAR_3 && VAR_2) ? "        " : " "),
      "GtAttr", "Lookup", "Rdlink", "Read", "Write", "Rename",
      "Access", "Rddir");
  if (VAR_1 && VAR_2) {
   FUNC_1(" Attr Lkup BioR BioW Accs BioD");
  }
 }
 FUNC_1("\n");
 FUNC_0(VAR_0);
}
