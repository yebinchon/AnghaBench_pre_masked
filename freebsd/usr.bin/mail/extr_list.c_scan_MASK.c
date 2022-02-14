
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lex {char l_char; int l_token; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int VAR_5 ;
 char* VAR_6 ;
 int* VAR_7 ;
 size_t VAR_8 ;
 int* VAR_9 ;
 struct lex* VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (char*,int ) ;
 int * VAR_12 ;

int
FUNC_3(char **VAR_13)
{
 char *VAR_14, *VAR_15;
 int VAR_16;
 struct lex *VAR_17;
 int VAR_18;

 if (VAR_8 >= 0) {
  FUNC_2(VAR_6, VAR_12[VAR_8]);
  VAR_5 = VAR_7[VAR_8];
  return (VAR_9[VAR_8--]);
 }
 VAR_14 = *VAR_13;
 VAR_15 = VAR_6;
 VAR_16 = *VAR_14++;





 while (VAR_16 == ' ' || VAR_16 == '\t')
  VAR_16 = *VAR_14++;






 if (VAR_16 == '\0') {
  *VAR_13 = --VAR_14;
  return (VAR_1);
 }







 if (FUNC_1((unsigned char)VAR_16)) {
  VAR_5 = 0;
  while (FUNC_1((unsigned char)VAR_16)) {
   VAR_5 = VAR_5*10 + VAR_16 - '0';
   *VAR_15++ = VAR_16;
   VAR_16 = *VAR_14++;
  }
  *VAR_15 = '\0';
  *VAR_13 = --VAR_14;
  return (VAR_3);
 }






 for (VAR_17 = &VAR_10[0]; VAR_17->l_char != '\0'; VAR_17++)
  if (VAR_16 == VAR_17->l_char) {
   VAR_6[0] = VAR_16;
   VAR_6[1] = '\0';
   *VAR_13 = VAR_14;
   return (VAR_17->l_token);
  }
 VAR_18 = 0;
 if (VAR_16 == '\'' || VAR_16 == '"') {
  VAR_18 = VAR_16;
  VAR_16 = *VAR_14++;
 }
 while (VAR_16 != '\0') {
  if (VAR_16 == VAR_18) {
   VAR_14++;
   break;
  }
  if (VAR_18 == 0 && (VAR_16 == ' ' || VAR_16 == '\t'))
   break;
  if (VAR_15 - VAR_6 < VAR_0-1)
   *VAR_15++ = VAR_16;
  VAR_16 = *VAR_14++;
 }
 if (VAR_18 && VAR_16 == '\0') {
  FUNC_0(VAR_11, "Missing %c\n", VAR_18);
  return (VAR_2);
 }
 *VAR_13 = --VAR_14;
 *VAR_15 = '\0';
 return (VAR_4);
}
