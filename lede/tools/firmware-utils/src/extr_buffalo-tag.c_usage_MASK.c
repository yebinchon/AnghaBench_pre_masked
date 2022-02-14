
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

void FUNC_2(int VAR_4)
{
 FILE *VAR_5 = (VAR_4 != VAR_0) ? VAR_2 : VAR_3;

 FUNC_1(VAR_5, "Usage: %s [OPTIONS...]\n", VAR_1);
 FUNC_1(VAR_5,
"\n"
"Options:\n"
"  -a <platform>   set platform to <platform>\n"
"  -b <brand>      set brand to <brand>\n"
"  -c <base1>\n"
"  -d <base2>\n"
"  -f <flag>       set flag to <flag>\n"
"  -i <file>       read input from the file <file>\n"
"  -I <file>       read input from the file <file> for DHP series\n"
"  -l <language>   set language to <language>\n"
"  -m <version>    set minor version to <version>\n"
"  -o <file>       write output to the file <file>\n"
"  -p <product>    set product to <product>\n"
"  -r <region>     set image region to <region>\n"
"		   valid regions: JP, US, EU, AP, TW, KR, M_\n"
"  -s              skip CRC calculation\n"
"  -v <version>    set major version to <version>\n"
"  -w <version>    set harwdware version to <version>\n"
"  -h              show this screen\n"
 );

 FUNC_0(VAR_4);
}
