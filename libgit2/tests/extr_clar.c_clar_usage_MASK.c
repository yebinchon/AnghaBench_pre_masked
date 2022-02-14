
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_0)
{
 FUNC_1("Usage: %s [options]\n\n", VAR_0);
 FUNC_1("Options:\n");
 FUNC_1("  -sname        Run only the suite with `name` (can go to individual test name)\n");
 FUNC_1("  -iname        Include the suite with `name`\n");
 FUNC_1("  -xname        Exclude the suite with `name`\n");
 FUNC_1("  -v            Increase verbosity (show suite names)\n");
 FUNC_1("  -q            Only report tests that had an error\n");
 FUNC_1("  -Q            Quit as soon as a test fails\n");
 FUNC_1("  -l            Print suite names\n");
 FUNC_1("  -r[filename]  Write summary file (to the optional filename)\n");
 FUNC_0(-1);
}
