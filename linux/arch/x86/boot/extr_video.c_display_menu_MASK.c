
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mode_info {int x; int y; int mode; int depth; } ;
struct card_info {int nmodes; char* card_name; struct mode_info* modes; } ;


 int FUNC_0 (char*,char,int,int,char*,char*) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int,...) ;
 struct card_info* VAR_0 ;
 struct card_info* VAR_1 ;

__attribute__((used)) static void FUNC_4(void)
{
 struct card_info *VAR_2;
 struct mode_info *VAR_3;
 char VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_6 = 0;
 for (VAR_2 = VAR_0; VAR_2 < VAR_1; VAR_2++)
  VAR_6 += VAR_2->nmodes;

 VAR_7 = 1;
 if (VAR_6 >= 20)
  VAR_7 = 3;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  FUNC_2("Mode: Resolution:  Type: ");
 FUNC_1('\n');

 VAR_8 = 0;
 VAR_4 = '0';
 for (VAR_2 = VAR_0; VAR_2 < VAR_1; VAR_2++) {
  VAR_3 = VAR_2->modes;
  for (VAR_5 = 0; VAR_5 < VAR_2->nmodes; VAR_5++, VAR_3++) {
   char VAR_9[32];
   int VAR_10 = VAR_3->x && VAR_3->y;
   u16 VAR_11 = VAR_3->mode ? VAR_3->mode :
    (VAR_3->y << 8)+VAR_3->x;

   if (!VAR_10)
    continue;

   if (VAR_3->depth)
    FUNC_3(VAR_9, "%dx%d", VAR_3->y, VAR_3->depth);
   else
    FUNC_3(VAR_9, "%d", VAR_3->y);

   FUNC_0("%c %03X %4dx%-7s %-6s",
          VAR_4, VAR_11, VAR_3->x, VAR_9, VAR_2->card_name);
   VAR_8++;
   if (VAR_8 >= VAR_7) {
    FUNC_1('\n');
    VAR_8 = 0;
   }

   if (VAR_4 == '9')
    VAR_4 = 'a';
   else if (VAR_4 == 'z' || VAR_4 == ' ')
    VAR_4 = ' ';
   else
    VAR_4++;
  }
 }
 if (VAR_8)
  FUNC_1('\n');
}
