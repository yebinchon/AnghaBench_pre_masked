
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,...) ;
 int * VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static void
FUNC_2(const char *VAR_3, int VAR_4)
{
 FILE *VAR_5 = (VAR_4 != VAR_0) ? VAR_1 : VAR_2;
 int VAR_6;

 FUNC_1(VAR_5, "Usage: %s [OPTIONS...]\n", VAR_3);
 FUNC_1(VAR_5, "\n"
   "Options:\n"
   "  -f <file>		generate a factory flash image <file>\n"
   "  -s <file>		generate a sysupgrade flash image <file>\n"
   "  -h			show this screen\n");
 FUNC_0(VAR_4);
}
