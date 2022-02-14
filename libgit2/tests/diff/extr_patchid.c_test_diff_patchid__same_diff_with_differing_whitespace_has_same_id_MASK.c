
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*) ;

void FUNC_1(void)
{
 const char *VAR_0 =
     "diff --git a/file.txt b/file.txt\n"
     "index 8fecc09..1d43a92 100644\n"
     "--- a/file.txt\n"
     "+++ b/file.txt\n"
     "@@ -1 +1 @@\n"
     "-old text\n"
     "+		new text\n";
 const char *VAR_1 =
     "diff --git a/file.txt b/file.txt\n"
     "index 8fecc09..1d43a92 100644\n"
     "--- a/file.txt\n"
     "+++ b/file.txt\n"
     "@@ -1 +1 @@\n"
     "-old text\n"
     "+        new text\n";
 const char *VAR_2 = "11efdd13c30f7a1056eac2ae2fb952da475e2c23";

 FUNC_0(VAR_0, VAR_2);
 FUNC_0(VAR_1, VAR_2);
}
