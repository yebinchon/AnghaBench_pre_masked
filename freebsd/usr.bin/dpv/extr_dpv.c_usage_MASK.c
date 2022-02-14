
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 char* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2(void)
{

 if (VAR_2)
  FUNC_0(VAR_0);

 FUNC_1(VAR_4, "Usage: %s [options] bytes:label\n", VAR_3);
 FUNC_1(VAR_4, "       %s [options] -m bytes1:label1 path1 "
     "[bytes2:label2 path2 ...]\n", VAR_3);
 FUNC_1(VAR_4, "OPTIONS:\n");

 FUNC_1(VAR_4, "\t%-14s %s\n", "-a text",
     "Append text. Displayed below file progress indicators.");
 FUNC_1(VAR_4, "\t%-14s %s\n", "-b backtitle",
     "String to be displayed on the backdrop, at top-left.");
 FUNC_1(VAR_4, "\t%-14s %s\n", "-d",
     "Debug. Write to standard output instead of dialog.");
 FUNC_1(VAR_4, "\t%-14s %s\n", "-D",
     "Use dialog(1) instead of dialog(3) [default].");
 FUNC_1(VAR_4, "\t%-14s %s\n", "-h",
     "Produce this output on standard error and exit.");
 FUNC_1(VAR_4, "\t%-14s %s\n", "-i format",
     "Customize status line format. See fdpv(1) for details.");
 FUNC_1(VAR_4, "\t%-14s %s\n", "-I format",
     "Customize status line format. See fdpv(1) for details.");
 FUNC_1(VAR_4, "\t%-14s %s\n", "-L size",
     "Label size. Must be a number greater than 0, or -1.");
 FUNC_1(VAR_4, "\t%-14s %s\n", "-m",
     "Enable processing of multiple file argiments.");
 FUNC_1(VAR_4, "\t%-14s %s\n", "-n num",
     "Display at-most num files per screen. Default is -1.");
 FUNC_1(VAR_4, "\t%-14s %s\n", "-N",
     "No overrun. Stop reading input at stated length, if any.");
 FUNC_1(VAR_4, "\t%-14s %s\n", "-o file",
     "Output data to file. First %s replaced with label text.");
 FUNC_1(VAR_4, "\t%-14s %s\n", "-p text",
     "Prefix text. Displayed above file progress indicators.");
 FUNC_1(VAR_4, "\t%-14s %s\n", "-P size",
     "Mini-progressbar size. Must be a number greater than 3.");
 FUNC_1(VAR_4, "\t%-14s %s\n", "-t title",
     "Title string to be displayed at top of dialog(1) box.");
 FUNC_1(VAR_4, "\t%-14s %s\n", "-T",
     "Test mode. Don't actually read any data, but fake it.");
 FUNC_1(VAR_4, "\t%-14s %s\n", "-U num",
     "Update status line num times per-second. Default is 2.");
 FUNC_1(VAR_4, "\t%-14s %s\n", "-w",
     "Wide. Width of `-p' and `-a' text bump dialog(1) width.");
 FUNC_1(VAR_4, "\t%-14s %s\n", "-x cmd",
     "Send data to executed cmd. First %s replaced with label.");
 FUNC_1(VAR_4, "\t%-14s %s\n", "-X",
     "X11. Use Xdialog(1) instead of dialog(1).");
 FUNC_0(VAR_0);
}
