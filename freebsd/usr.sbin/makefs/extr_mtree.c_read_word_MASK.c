
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtree_fileinfo {int line; } ;
typedef int FILE ;


 int VAR_0 ;

 struct mtree_fileinfo* FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;
 int VAR_2 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int,int *) ;

__attribute__((used)) static int
FUNC_7(FILE *VAR_3, char *VAR_4, size_t VAR_5)
{
 struct mtree_fileinfo *VAR_6;
 size_t VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

 if (VAR_5 == 0)
  return (VAR_0);

 VAR_10 = 0;
 VAR_12 = 0;
 VAR_7 = 0;
 VAR_8 = -1;
 VAR_13 = 0;
 do {
  VAR_9 = FUNC_2(VAR_3);
  switch (VAR_9) {
  case 128:
   VAR_4[VAR_7] = '\0';
   VAR_11 = FUNC_1(VAR_3) ? VAR_1 : -1;
   if (VAR_11 == -1)
    FUNC_3("unexpected end of file");
   return (VAR_11);
  case '#':
   if (!VAR_12) {
    VAR_11 = FUNC_5(VAR_3, "\n");
    if (!VAR_11)
     continue;
   }
   break;
  case '\\':
   VAR_12++;
   break;
  case '`':
  case '\'':
  case '"':
   if (VAR_12)
    break;
   if (VAR_13 == 0) {
    VAR_13++;
    VAR_8 = VAR_7;
   } else if (VAR_9 == VAR_4[VAR_8]) {
    VAR_13--;
    if (VAR_13 > 0) {
     do {
      VAR_8--;
     } while (VAR_4[VAR_8] != '`' &&
         VAR_4[VAR_8] != '\'' &&
         VAR_4[VAR_8] != '"');
    } else
     VAR_8 = -1;
   } else {
    VAR_13++;
    VAR_8 = VAR_7;
   }
   break;
  case ' ':
  case '\t':
  case '\n':
   if (!VAR_12 && VAR_13 == 0) {
    FUNC_6(VAR_9, VAR_3);
    VAR_9 = '\0';
    VAR_10 = 1;
    break;
   }
   if (VAR_9 == '\n') {



    if (VAR_13 > 0)
     FUNC_4("quoted word straddles "
         "onto next line.");
    VAR_6 = FUNC_0(&VAR_2);
    VAR_6->line++;
   }
   break;
  default:
   if (VAR_12)
    VAR_4[VAR_7++] = '\\';
   break;
  }
  VAR_4[VAR_7++] = VAR_9;
  VAR_12 = 0;
 } while (VAR_7 < VAR_5 && !VAR_10);

 if (VAR_7 >= VAR_5) {
  FUNC_3("word too long to fit buffer (max %zu characters)",
      VAR_5);
  FUNC_5(VAR_3, " \t\n");
 }
 return (0);
}
