
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,int ,int*) ;

int FUNC_1(const char *VAR_1, int VAR_2,
 int *VAR_3, int *VAR_4)
{
 int VAR_5 = 0, VAR_6 = 0;
 bool VAR_7 = 1, VAR_8 = 0;

 if (VAR_2 == 0) {
  *VAR_4 = 0;

  return FUNC_0(VAR_1, 0, VAR_3);
 }

 if (VAR_1[0] == '-') {
  VAR_8 = 1;
  VAR_1++;
 } else if (VAR_1[0] == '+') {
  VAR_1++;
 }

 while (*VAR_1) {
  if ('0' <= *VAR_1 && *VAR_1 <= '9') {
   if (VAR_7) {
    VAR_5 = VAR_5 * 10 + *VAR_1 - '0';
   } else {
    VAR_6 += VAR_2 * (*VAR_1 - '0');
    VAR_2 /= 10;
   }
  } else if (*VAR_1 == '\n') {
   if (*(VAR_1 + 1) == '\0')
    break;
   else
    return -VAR_0;
  } else if (*VAR_1 == '.' && VAR_7) {
   VAR_7 = 0;
  } else {
   return -VAR_0;
  }
  VAR_1++;
 }

 if (VAR_8) {
  if (VAR_5)
   VAR_5 = -VAR_5;
  else
   VAR_6 = -VAR_6;
 }

 *VAR_3 = VAR_5;
 *VAR_4 = VAR_6;

 return 0;
}
