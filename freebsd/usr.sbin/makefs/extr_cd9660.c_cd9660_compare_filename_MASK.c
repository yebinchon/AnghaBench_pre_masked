
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(const char *VAR_1, const char *VAR_2)
{





 int VAR_3 = 0;
 int VAR_4 = 0;
 char VAR_5, VAR_6;


 while (VAR_3 < VAR_0-1
  && VAR_4 < VAR_0-1) {
  VAR_5 = VAR_1[VAR_3];
  VAR_6 = VAR_2[VAR_4];
  if (VAR_5 == '.' && VAR_6 =='.')
   break;
  else if (VAR_5 == '.') {
   VAR_4++;
   VAR_5 = ' ';
  } else if (VAR_6 == '.') {
   VAR_3++;
   VAR_6 = ' ';
  } else {
   VAR_3++;
   VAR_4++;
  }

  if (VAR_5 < VAR_6)
   return -1;
  else if (VAR_5 > VAR_6) {
   return 1;
  }
 }

 if (VAR_1[VAR_3] == '.' && VAR_2[VAR_4] == '.') {
  VAR_3++;
  VAR_4++;
  while (VAR_3 < VAR_0 - 1
   && VAR_4 < VAR_0 - 1) {
   VAR_5 = VAR_1[VAR_3];
   VAR_6 = VAR_2[VAR_4];
   if (VAR_5 == ';' && VAR_6 == ';')
    break;
   else if (VAR_5 == ';') {
    VAR_4++;
    VAR_5 = ' ';
   } else if (VAR_6 == ';') {
    VAR_3++;
    VAR_6 = ' ';
   } else {
    VAR_3++;
    VAR_4++;
   }

   if (VAR_5 < VAR_6)
    return -1;
   else if (VAR_5 > VAR_6)
    return 1;
  }
 }
 return 0;
}
