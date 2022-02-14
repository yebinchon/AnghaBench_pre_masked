
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char) ;

int FUNC_3(char *VAR_3, char *VAR_4, int VAR_5)
{
 char VAR_6[VAR_0];
 char *VAR_7;
 int VAR_8, VAR_9;

 while(*VAR_3) {
  if (*VAR_3 == '*') {
   VAR_3++;
   for (VAR_8 = 0; *VAR_3; VAR_8++) {
    if (*VAR_3 == '*' || *VAR_3 == '?') break;
    VAR_6[VAR_8] = *VAR_3;
    VAR_3++;
   }
   VAR_6[VAR_8] = '\0';
   if (FUNC_1(VAR_6)) {
    VAR_7 = FUNC_0(VAR_4, VAR_6, VAR_5);
    if (!VAR_7) return VAR_1;
    VAR_4 = VAR_7 + FUNC_1(VAR_6);
   }
  }
  else if (*VAR_3 == '?') {
   VAR_3++;
   VAR_4++;
  }
  else if (*VAR_3 == '[' && *(VAR_3+1) == '[') {
   VAR_3++;
  }
  else if (*VAR_3 == '[') {
   VAR_3++;
   VAR_9 = VAR_1;
   while(*VAR_3 && !VAR_9) {
    if (*VAR_3 == ']' && *(VAR_3+1) != ']') break;
    if (*(VAR_3+1) == '-' && *(VAR_3+2) && (*(VAR_3+2) != ']' || *(VAR_3+3) == ']')) {
     if (VAR_5) {
      if (*VAR_4 >= *VAR_3 && *VAR_4 <= *(VAR_3+2)) VAR_9 = VAR_2;
     }
     else {
      if (FUNC_2(*VAR_4) >= FUNC_2(*VAR_3) &&
       FUNC_2(*VAR_4) <= FUNC_2(*(VAR_3+2))) VAR_9 = VAR_2;
     }
     VAR_3 += 3;
    }
    else {
     if (VAR_5) {
      if (*VAR_3 == *VAR_4) VAR_9 = VAR_2;
     }
     else {
      if (FUNC_2(*VAR_3) == FUNC_2(*VAR_4)) VAR_9 = VAR_2;
     }
     VAR_3++;
    }
   }
   if (!VAR_9) return VAR_1;
   while(*VAR_3) {
    if (*VAR_3 == ']' && *(VAR_3+1) != ']') break;
    VAR_3++;
   }
   VAR_3++;
   VAR_4++;
  }
  else {
   if (VAR_5) {
    if (*VAR_3 != *VAR_4) return VAR_1;
   }
   else {
    if (FUNC_2(*VAR_3) != FUNC_2(*VAR_4)) return VAR_1;
   }
   VAR_3++;
   VAR_4++;
  }
 }
 return VAR_2;
}
