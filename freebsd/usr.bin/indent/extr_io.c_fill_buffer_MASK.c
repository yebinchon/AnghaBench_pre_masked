
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 int VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_3 (char,int ) ;
 char* FUNC_4 (char*,int) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 int VAR_20 ;

void
FUNC_6(void)
{
    char *VAR_21;
    int VAR_22;
    FILE *VAR_23 = VAR_12;

    if (VAR_2 != ((void*)0)) {
 VAR_4 = VAR_2;
 VAR_3 = VAR_1;
 VAR_2 = VAR_1 = ((void*)0);
 if (VAR_4 < VAR_3)
     return;

    }
    for (VAR_21 = VAR_9;;) {
 if (VAR_21 >= VAR_10) {
     int VAR_24 = (VAR_10 - VAR_9) * 2 + 10;
     int VAR_25 = VAR_21 - VAR_9;
     VAR_9 = FUNC_4(VAR_9, VAR_24);
     if (VAR_9 == ((void*)0))
  FUNC_1(1, "input line too long");
     VAR_21 = VAR_9 + VAR_25;
     VAR_10 = VAR_9 + VAR_24 - 2;
 }
 if ((VAR_22 = FUNC_2(VAR_23)) == VAR_0) {
  *VAR_21++ = ' ';
  *VAR_21++ = '\n';
  VAR_8 = 1;
  break;
 }
 if (VAR_22 != '\0')
     *VAR_21++ = VAR_22;
 if (VAR_22 == '\n')
  break;
    }
    VAR_4 = VAR_9;
    VAR_3 = VAR_21;
    if (VAR_21 - VAR_9 > 2 && VAR_21[-2] == '/' && VAR_21[-3] == '*') {
 if (VAR_9[3] == 'I' && FUNC_5(VAR_9, "/**INDENT**", 11) == 0)
     FUNC_6();
 else {
     int VAR_26 = 0;

     VAR_21 = VAR_9;
     while (*VAR_21 == ' ' || *VAR_21 == '\t')
  VAR_21++;
     if (*VAR_21 == '/' && VAR_21[1] == '*') {
  VAR_21 += 2;
  while (*VAR_21 == ' ' || *VAR_21 == '\t')
      VAR_21++;
  if (VAR_21[0] == 'I' && VAR_21[1] == 'N' && VAR_21[2] == 'D' && VAR_21[3] == 'E'
   && VAR_21[4] == 'N' && VAR_21[5] == 'T') {
      VAR_21 += 6;
      while (*VAR_21 == ' ' || *VAR_21 == '\t')
   VAR_21++;
      if (*VAR_21 == '*')
   VAR_26 = 1;
      else if (*VAR_21 == 'O') {
   if (*++VAR_21 == 'N')
       VAR_21++, VAR_26 = 1;
   else if (*VAR_21 == 'F' && *++VAR_21 == 'F')
       VAR_21++, VAR_26 = 2;
      }
      while (*VAR_21 == ' ' || *VAR_21 == '\t')
   VAR_21++;
      if (VAR_21[0] == '*' && VAR_21[1] == '/' && VAR_21[2] == '\n' && VAR_26) {
   if (VAR_18 != VAR_6 || VAR_19 != VAR_7 || VAR_17 != VAR_5)
       FUNC_0();
   if (!(VAR_11 = VAR_26 - 1)) {
       VAR_13 = 0;
       VAR_15 = 0;
       VAR_16 = 0;
       VAR_20 = 1;
   }
      }
  }
     }
 }
    }
    if (VAR_11) {
 VAR_21 = VAR_9;
 do
     FUNC_3(*VAR_21, VAR_14);
 while (*VAR_21++ != '\n');
    }
}
