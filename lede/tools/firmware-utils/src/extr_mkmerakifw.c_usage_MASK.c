
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct board_info {char* id; int description; } ;
typedef int FILE ;


 int VAR_0 ;
 struct board_info* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,...) ;
 char* VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static void FUNC_2(int VAR_5)
{
 FILE *VAR_6 = (VAR_5 != VAR_0) ? VAR_3 : VAR_4;
 const struct board_info *VAR_7;

 FUNC_1(VAR_6, "Usage: %s [OPTIONS...]\n", VAR_2);
 FUNC_1(VAR_6,
"\n"
"Options:\n"
"  -B <board>      create image for the board specified with <board>\n"
"  -i <file>       read kernel image from the file <file>\n"
"  -o <file>       write output to the file <file>\n"
"  -s              strip padding from the end of the image\n"
"  -h              show this screen\n"
 );

 FUNC_1(VAR_6, "\nBoards:\n");
 for (VAR_7 = VAR_1; VAR_7->id != ((void*)0); VAR_7++)
  FUNC_1(VAR_6, "  %-16s%s\n", VAR_7->id, VAR_7->description);

 FUNC_0(VAR_5);
}
