
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef char u_char ;
typedef int gentext ;


 char VAR_0 ;
 char* VAR_1 ;

int
FUNC_0(const u_char *VAR_2, u_char VAR_3[12], size_t VAR_4, u_int VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 int VAR_9 = 1;
 const u_char *VAR_10, *VAR_11, *VAR_12;
 u_char VAR_13[6], *VAR_14;
 int VAR_15;





 for (VAR_6 = 0; VAR_6 < 11; VAR_6++)
  VAR_3[VAR_6] = ' ';
 VAR_3[11] = 0;





 if (VAR_2[0] == '.' && VAR_4 == 1) {
  VAR_3[0] = '.';
  return VAR_5 <= 1;
 }
 if (VAR_2[0] == '.' && VAR_2[1] == '.' && VAR_4 == 2) {
  VAR_3[0] = '.';
  VAR_3[1] = '.';
  return VAR_5 <= 1;
 }




 for (VAR_10 = VAR_2, VAR_6 = VAR_4; --VAR_6 >= 0; VAR_10++)
  if (*VAR_10 != ' ' && *VAR_10 != '.')
   break;
 if (VAR_6 < 0)
  return 0;






 VAR_11 = VAR_12 = 0;
 for (VAR_10 = VAR_2 + 1, VAR_6 = VAR_4 - 1; --VAR_6 >= 0;) {
  switch (*VAR_10++) {
  case '.':
   if (!VAR_12)
    VAR_12 = VAR_10;
   break;
  case ' ':
   break;
  default:
   if (VAR_12)
    VAR_11 = VAR_12;
   VAR_12 = 0;
   break;
  }
 }




 if (VAR_11) {
  if (VAR_12)
   VAR_8 = VAR_12 - VAR_11;
  else
   VAR_8 = VAR_4 - (VAR_11 - VAR_2);
  for (VAR_6 = 0, VAR_7 = 8; VAR_6 < VAR_8 && VAR_7 < 11; VAR_6++, VAR_7++) {
   if (VAR_11[VAR_6] != (VAR_3[VAR_7] = VAR_1[VAR_11[VAR_6]])
       && VAR_9 != 3)
    VAR_9 = 2;
   if (!VAR_3[VAR_7]) {
    VAR_9 = 3;
    VAR_3[VAR_7--] = ' ';
   }
  }
  if (VAR_6 < VAR_8)
   VAR_9 = 3;
  VAR_11--;
 } else {
  for (VAR_11 = VAR_10; *--VAR_11 == ' ' || *VAR_11 == '.';);
  VAR_11++;
 }

 VAR_15 = (VAR_11 - VAR_2) <= 8;




 for (VAR_6 = VAR_7 = 0; VAR_2 < VAR_11 && VAR_7 < 8; VAR_6++, VAR_7++, VAR_2++) {
  if ((*VAR_2 == ' ') && VAR_15)
   VAR_3[VAR_7] = ' ';
  else
   VAR_3[VAR_7] = VAR_1[*VAR_2];
  if ((*VAR_2 != VAR_3[VAR_7])
      && VAR_9 != 3)
   VAR_9 = 2;
  if (!VAR_3[VAR_7]) {
   VAR_9 = 3;
   VAR_3[VAR_7--] = ' ';
  }
 }
 if (VAR_2 < VAR_11)
  VAR_9 = 3;




 if (!VAR_7)
  VAR_3[0] = '_';





 if (VAR_3[0] == 0xe5)
  VAR_3[0] = VAR_0;





 if (VAR_9 != 3) {
  if (VAR_5 > 1)
   return 0;
  return VAR_9;
 }




 for (VAR_14 = VAR_13 + sizeof(VAR_13); VAR_14 > VAR_13 && VAR_5; VAR_5 /= 10)
  *--VAR_14 = VAR_5 % 10 + '0';
 if (VAR_5)
  return 0;
 for (VAR_6 = 8; VAR_3[--VAR_6] == ' ';);
 VAR_6++;
 if (VAR_13 + sizeof(VAR_13) - VAR_14 + 1 > 8 - VAR_6)
  VAR_6 = 8 - (VAR_13 + sizeof(VAR_13) - VAR_14 + 1);
 VAR_3[VAR_6++] = '~';
 while (VAR_14 < VAR_13 + sizeof(VAR_13))
  VAR_3[VAR_6++] = *VAR_14++;
 return 3;
}
