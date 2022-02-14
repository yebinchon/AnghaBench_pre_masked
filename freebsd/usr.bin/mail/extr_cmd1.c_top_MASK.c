
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {int m_lines; } ;
typedef int linebuf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct message* VAR_1 ;
 struct message* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,char*,int) ;
 int * FUNC_4 (struct message*) ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (struct message*) ;
 char* FUNC_8 (char*) ;

int
FUNC_9(void *VAR_4)
{
 int *VAR_5 = VAR_4;
 int *VAR_6;
 struct message *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 char *VAR_12, VAR_13[VAR_0];
 FILE *VAR_14;

 VAR_9 = 5;
 VAR_12 = FUNC_8("toplines");
 if (VAR_12 != ((void*)0)) {
  VAR_9 = FUNC_0(VAR_12);
  if (VAR_9 < 0 || VAR_9 > 10000)
   VAR_9 = 5;
 }
 VAR_11 = 1;
 for (VAR_6 = VAR_5; *VAR_6 && VAR_6-VAR_5 < VAR_3; VAR_6++) {
  VAR_7 = &VAR_2[*VAR_6 - 1];
  FUNC_7(VAR_7);
  VAR_1 = VAR_7;
  if (FUNC_8("quiet") == ((void*)0))
   FUNC_1("Message %d:\n", *VAR_6);
  VAR_14 = FUNC_4(VAR_7);
  VAR_8 = VAR_7->m_lines;
  if (!VAR_11)
   FUNC_1("\n");
  for (VAR_10 = 0; VAR_10 < VAR_8 && VAR_10 <= VAR_9; VAR_10++) {
   if (FUNC_3(VAR_14, VAR_13, sizeof(VAR_13)) < 0)
    break;
   FUNC_2(VAR_13);
   VAR_11 = FUNC_6(VAR_13, " \t") == FUNC_5(VAR_13);
  }
 }
 return (0);
}
