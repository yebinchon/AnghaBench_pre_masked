
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(void)
{
 FUNC_1(VAR_1,
     "indent_wrapper [-v] [-d] [-D] [-g <githash>]\n"
     "\t" "[-s <svnrevision> ] [ -t <tool> ] [ -c <command> ]\n"
     "\t" "-v        Increase verbosity\n"
     "\t" "-d        Check output from git diff\n"
     "\t" "-D        Check output from svn diff\n"
     "\t" "-c <cmd>  Set custom command to produce diff\n"
     "\t" "-g <hash> Check output from git hash\n"
     "\t" "-s <rev>  Check output from svn revision\n"
     "\t" "-t <tool> Launch external diff tool\n"
     "\n"
     "Examples:\n"
     "\t" "indent_wrapper -D\n"
     "\t" "indent_wrapper -D -t meld\n"
     "\t" "indent_wrapper -D -t \"diff -u\"\n");
 FUNC_0(VAR_0);
}
