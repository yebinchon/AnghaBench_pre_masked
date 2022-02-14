
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct board_info {char* model; char* name; } ;
typedef int FILE ;


 int VAR_0 ;
 struct board_info* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,...) ;
 char* VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;

void
FUNC_2(int VAR_5)
{
 FILE *VAR_6 = (VAR_5 != VAR_0) ? VAR_3 : VAR_4;
 struct board_info *VAR_7;

 FUNC_1(VAR_6, "Usage: %s [OPTIONS...] <file>\n", VAR_2);
 FUNC_1(VAR_6,
"\n"
"Options:\n"
"  -B <board>      create image for the board specified with <board>.\n"
"                  valid <board> values:\n"
 );
 for (VAR_7 = VAR_1; VAR_7->model != ((void*)0); VAR_7++){
  FUNC_1(VAR_6,
"                  %-12s: %s\n",
   VAR_7->model, VAR_7->name);
 };
 FUNC_1(VAR_6,
"  -d              don't throw error on invalid images\n"
"  -k              keep invalid images\n"
"  -K <file>       add kernel to the image\n"
"  -C <file>       add custom filesystem to the image\n"
"  -h              show this screen\n"
"Parameters:\n"
"  <file>          write output to the file <file>\n"
 );

 FUNC_0(VAR_5);
}
