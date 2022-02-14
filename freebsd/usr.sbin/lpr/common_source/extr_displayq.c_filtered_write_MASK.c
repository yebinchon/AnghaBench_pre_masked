
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int destbuf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char,int *) ;
 int FUNC_1 (char*,int,int,int *) ;
 int FUNC_2 (char) ;

__attribute__((used)) static void
FUNC_3(char *VAR_1, int VAR_2, FILE *VAR_3)
{
 static char VAR_4, VAR_5;
 char *VAR_6, *VAR_7, *VAR_8, *VAR_9, *VAR_10;
 int VAR_11;
 char VAR_12[VAR_0];

 if (VAR_1 == ((void*)0)) {
  if (VAR_5 != '\0') {
   if (VAR_5 == '\r')
    VAR_5 = '\n';
   FUNC_0(VAR_5, VAR_3);
   VAR_4 = VAR_5;
   VAR_5 = '\0';
  }
  if (VAR_4 != '\0' && VAR_4 != '\n')
   FUNC_0('\n', VAR_3);
  VAR_4 = '\0';
  return;
 }

 VAR_8 = &VAR_12[0];
 VAR_7 = VAR_8 + sizeof(VAR_12);
 VAR_6 = VAR_1;
 VAR_10 = VAR_1 + VAR_2;
 VAR_4 = '\0';
 if (VAR_5 != '\0') {
  VAR_6 = &VAR_5;
  VAR_9 = VAR_1;
 } else
  VAR_9 = VAR_6 + 1;

 while (VAR_6 < VAR_10) {
  if (VAR_9 < VAR_10) {
   if ((*VAR_6 == '\r' && *VAR_9 == '\n') ||
       (*VAR_6 == '\n' && *VAR_9 == '\r')) {
    *VAR_8++ = '\n';

    VAR_9++;
    goto check_next;
   }
  } else {






   VAR_5 = '\0';
   if (*VAR_6 == '\r' || *VAR_6 == '\n') {
    VAR_5 = *VAR_6;
    break;
   }
  }
  if (*VAR_6 == '\r')
   *VAR_8++ = '\n';





  else
   *VAR_8++ = *VAR_6;

check_next:
  VAR_6 = VAR_9;
  VAR_9 = VAR_6 + 1;
  if (VAR_8 >= VAR_7) {
   VAR_11 = VAR_8 - &VAR_12[0];
   FUNC_1(VAR_12, 1, VAR_11, VAR_3);
   VAR_4 = VAR_12[VAR_11 - 1];
   VAR_8 = &VAR_12[0];
  }
 }
 VAR_11 = VAR_8 - &VAR_12[0];
 if (VAR_11 > 0) {
  FUNC_1(VAR_12, 1, VAR_11, VAR_3);
  VAR_4 = VAR_12[VAR_11 - 1];
 }
}
