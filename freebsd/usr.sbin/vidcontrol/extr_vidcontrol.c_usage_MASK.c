
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,char*,char*,char*,char*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_2(void)
{
 if (VAR_1)
  FUNC_1(VAR_0, "%s\n%s\n%s\n%s\n%s\n%s\n",
"usage: vidcontrol [-CHPpx] [-b color] [-c appearance] [-f [[size] file]]",
"                  [-g geometry] [-h size] [-i active | adapter | mode]",
"                  [-M char] [-m on | off]",
"                  [-r foreground background] [-S on | off] [-s number]",
"                  [-T xterm | cons25] [-t N | off] [mode]",
"                  [foreground [background]] [show]");
 else
  FUNC_1(VAR_0, "%s\n%s\n%s\n%s\n%s\n%s\n",
"usage: vidcontrol [-CdHLPpx] [-b color] [-c appearance] [-E emulator]",
"                  [-f [[size] file]] [-g geometry] [-h size]",
"                  [-i active | adapter | mode] [-l screen_map] [-M char]",
"                  [-m on | off] [-r foreground background] [-S on | off]",
"                  [-s number] [-T xterm | cons25] [-t N | off] [mode]",
"                  [foreground [background]] [show]");
 FUNC_0(1);
}
