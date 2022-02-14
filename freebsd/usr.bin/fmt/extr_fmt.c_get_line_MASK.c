
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wint_t ;
typedef char wchar_t ;
typedef int FILE ;


 char VAR_0 ;
 char* FUNC_0 (size_t) ;
 int VAR_1 ;
 char FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char) ;
 size_t VAR_2 ;
 int FUNC_3 (char) ;
 char* FUNC_4 (char*,size_t) ;

__attribute__((used)) static wchar_t *
FUNC_5(FILE *VAR_3, size_t *VAR_4)
{
 static wchar_t *VAR_5 = ((void*)0);
 static size_t VAR_6 = 0;
 size_t VAR_7 = 0;
 wint_t VAR_8;
 size_t VAR_9 = 0;
 int VAR_10 = 0;
 size_t VAR_11 = 0;
 int VAR_12;

 if (VAR_5 == ((void*)0)) {
  VAR_6 = 100;
  VAR_5 = FUNC_0(VAR_6 * sizeof(wchar_t));
 }
 while ((VAR_8 = FUNC_1(VAR_3)) != '\n' && VAR_8 != VAR_0) {
  if (VAR_7 + VAR_9 == 0 && VAR_8 == '.' && !VAR_1)
   VAR_10 = 1;
  if (VAR_8 == ' ')
   ++VAR_9;
  else if (VAR_10 || FUNC_2(VAR_8)) {
   while (VAR_7 + VAR_9 >= VAR_6) {
    VAR_6 *= 2;
    VAR_5 = FUNC_4(VAR_5, VAR_6 * sizeof(wchar_t));
   }
   while (VAR_9 > 0) {
    --VAR_9;
    VAR_5[VAR_7++] = ' ';
    VAR_11++;
   }
   VAR_5[VAR_7++] = VAR_8;
   VAR_11 += (VAR_12 = FUNC_3(VAR_8)) > 0 ? VAR_12 : 1;
  } else if (VAR_8 == '\t')
   VAR_9 += VAR_2 -
       (VAR_11 + VAR_9) % VAR_2;
  else if (VAR_8 == '\b') {
   if (VAR_7)
    --VAR_7;
   if (VAR_11)
    --VAR_11;
  }
 }
 *VAR_4 = VAR_7;
 return (VAR_7 > 0 || VAR_8 != VAR_0) ? VAR_5 : 0;
}
