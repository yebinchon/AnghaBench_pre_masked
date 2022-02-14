
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uintmax_t ;
typedef scalar_t__ intmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ) ;

uintmax_t
FUNC_1(const char *restrict VAR_4, char **restrict VAR_5, int VAR_6) {
 uintmax_t VAR_7, VAR_8;
 unsigned VAR_9;
 bool VAR_10;
 const char *VAR_11, *VAR_12;

 VAR_11 = VAR_4;
 if (VAR_6 < 0 || VAR_6 == 1 || VAR_6 > 36) {
  VAR_12 = VAR_11;
  FUNC_0(VAR_0);
  VAR_7 = VAR_3;
  goto label_return;
 }
 VAR_9 = VAR_6;


 VAR_10 = 0;
 while (1) {
  switch (*VAR_11) {
  case '\t': case '\n': case '\v': case '\f': case '\r': case ' ':
   VAR_11++;
   break;
  case '-':
   VAR_10 = 1;
   VAR_2;
  case '+':
   VAR_11++;
   VAR_2;
  default:
   goto label_prefix;
  }
 }


 label_prefix:





 VAR_12 = VAR_11;
 if (*VAR_11 == '0') {
  switch (VAR_11[1]) {
  case '0': case '1': case '2': case '3': case '4': case '5':
  case '6': case '7':
   if (VAR_9 == 0) {
    VAR_9 = 8;
   }
   if (VAR_9 == 8) {
    VAR_11++;
   }
   break;
  case 'X': case 'x':
   switch (VAR_11[2]) {
   case '0': case '1': case '2': case '3': case '4':
   case '5': case '6': case '7': case '8': case '9':
   case 'A': case 'B': case 'C': case 'D': case 'E':
   case 'F':
   case 'a': case 'b': case 'c': case 'd': case 'e':
   case 'f':
    if (VAR_9 == 0) {
     VAR_9 = 16;
    }
    if (VAR_9 == 16) {
     VAR_11 += 2;
    }
    break;
   default:
    break;
   }
   break;
  default:
   VAR_11++;
   VAR_7 = 0;
   goto label_return;
  }
 }
 if (VAR_9 == 0) {
  VAR_9 = 10;
 }


 VAR_7 = 0;
 while ((*VAR_11 >= '0' && *VAR_11 <= '9' && (VAR_8 = *VAR_11 - '0') < VAR_9)
     || (*VAR_11 >= 'A' && *VAR_11 <= 'Z' && (VAR_8 = 10 + *VAR_11 - 'A') < VAR_9)
     || (*VAR_11 >= 'a' && *VAR_11 <= 'z' && (VAR_8 = 10 + *VAR_11 - 'a') < VAR_9)) {
  uintmax_t VAR_13 = VAR_7;
  VAR_7 *= VAR_9;
  VAR_7 += VAR_8;
  if (VAR_7 < VAR_13) {

   FUNC_0(VAR_1);
   VAR_7 = VAR_3;
   goto label_return;
  }
  VAR_11++;
 }
 if (VAR_10) {
  VAR_7 = (uintmax_t)(-((intmax_t)VAR_7));
 }

 if (VAR_11 == VAR_12) {

  FUNC_0(VAR_0);
  VAR_7 = VAR_3;
  goto label_return;
 }

label_return:
 if (VAR_5 != ((void*)0)) {
  if (VAR_11 == VAR_12) {

   *VAR_5 = (char *)VAR_4;
  } else {
   *VAR_5 = (char *)VAR_11;
  }
 }
 return VAR_7;
}
