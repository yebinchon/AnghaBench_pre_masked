
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
"  -B <board_id>   set board ID to <board_id>\n"
"  -i <file>       read input from the file <file>\n"
"  -F              load factory defaults\n"
"  -o <file>       write output to the file <file>\n"
"  -T <type>       set image type to <type>\n"
"  -h              show this screen\n"
 );

 FUNC_0(VAR_4);
}
