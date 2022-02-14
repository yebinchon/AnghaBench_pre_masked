
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char,int ) ;
 char* FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_1 ;
 int FUNC_6 (char*,char const*) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_2)
{

 FUNC_6("error: %s", VAR_2);
 FUNC_2('\n', VAR_1);
 FUNC_1(VAR_1, "usage: %s <options>\n", FUNC_3());

 FUNC_1(VAR_1, "    options:\n");
 FUNC_1(VAR_1, "\t--formats\t-  list image formats\n");
 FUNC_1(VAR_1, "\t--schemes\t-  list partition schemes\n");
 FUNC_1(VAR_1, "\t--version\t-  show version information\n");
 FUNC_2('\n', VAR_1);
 FUNC_1(VAR_1, "\t-a <num>\t-  mark num'th partion as active\n");
 FUNC_1(VAR_1, "\t-b <file>\t-  file containing boot code\n");
 FUNC_1(VAR_1, "\t-c <num>\t-  minimum capacity (in bytes) of the disk\n");
 FUNC_1(VAR_1, "\t-C <num>\t-  maximum capacity (in bytes) of the disk\n");
 FUNC_1(VAR_1, "\t-f <format>\n");
 FUNC_1(VAR_1, "\t-o <file>\t-  file to write image into\n");
 FUNC_1(VAR_1, "\t-p <partition>\n");
 FUNC_1(VAR_1, "\t-s <scheme>\n");
 FUNC_1(VAR_1, "\t-v\t\t-  increase verbosity\n");
 FUNC_1(VAR_1, "\t-y\t\t-  [developers] enable unit test\n");
 FUNC_1(VAR_1, "\t-H <num>\t-  number of heads to simulate\n");
 FUNC_1(VAR_1, "\t-P <num>\t-  physical sector size\n");
 FUNC_1(VAR_1, "\t-S <num>\t-  logical sector size\n");
 FUNC_1(VAR_1, "\t-T <num>\t-  number of tracks to simulate\n");
 FUNC_2('\n', VAR_1);
 FUNC_4(1);
 FUNC_2('\n', VAR_1);
 FUNC_5(1);
 FUNC_2('\n', VAR_1);
 FUNC_1(VAR_1, "    partition specification:\n");
 FUNC_1(VAR_1, "\t<t>[/<l>]::<size>[:[+]<offset>]\t-  "
     "empty partition of given size and\n\t\t\t\t\t"
     "   optional relative or absolute offset\n");
 FUNC_1(VAR_1, "\t<t>[/<l>]:=<file>\t\t-  partition content and size "
     "are\n\t\t\t\t\t   determined by the named file\n");
 FUNC_1(VAR_1, "\t<t>[/<l>]:-<cmd>\t\t-  partition content and size "
     "are taken\n\t\t\t\t\t   from the output of the command to run\n");
 FUNC_1(VAR_1, "\t-\t\t\t\t-  unused partition entry\n");
 FUNC_1(VAR_1, "\t    where:\n");
 FUNC_1(VAR_1, "\t\t<t>\t-  scheme neutral partition type\n");
 FUNC_1(VAR_1, "\t\t<l>\t-  optional scheme-dependent partition "
     "label\n");

 FUNC_0(VAR_0);
}
