
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,...) ;
 char* VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_2(int VAR_4)
{
 FILE *VAR_5 = (VAR_4 != VAR_0) ? VAR_2 : VAR_3;

 FUNC_1(VAR_5, "Usage: %s [OPTIONS...]\n", VAR_1);
 FUNC_1(VAR_5,
"\n"
"Options:\n"
"  -B <board>      create image for the board specified with <board>\n"
"  -H <hwid>       use hardware id specified with <hwid>\n"
"  -F <id>         use flash layout specified with <id>\n"
"  -f <file>       read firmware image from the file <file>\n"
"  -o <file>       write output to the file <file>\n"
"  -i              inspect given firmware file (requires -f)\n"
"  -x              extract combined kernel and rootfs while inspecting (implies -i)\n"
"  -h              show this screen\n"
 );

 FUNC_0(VAR_4);
}
