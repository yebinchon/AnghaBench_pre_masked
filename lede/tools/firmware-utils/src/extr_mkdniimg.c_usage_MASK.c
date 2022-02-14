
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct board_info {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,...) ;
 char* VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;

void FUNC_2(int VAR_4)
{
 FILE *VAR_5 = (VAR_4 != VAR_0) ? VAR_2 : VAR_3;
 struct board_info *VAR_6;

 FUNC_1(VAR_5, "Usage: %s [OPTIONS...]\n", VAR_1);
 FUNC_1(VAR_5,
"\n"
"Options:\n"
"  -B <board>      create image for the board specified with <board>\n"
"  -i <file>       read input from the file <file>\n"
"  -o <file>       write output to the file <file>\n"
"  -v <version>    set image version to <version>\n"
"  -r <region>     set image region to <region>\n"
"  -H <hd_id>      set image hardware id to <hd_id>\n"
"  -h              show this screen\n"
 );

 FUNC_0(VAR_4);
}
