
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static void
FUNC_2(char *VAR_0, const char *VAR_1)
{
 const char *VAR_2;
 char VAR_3, *VAR_4;
 bool VAR_5;


 if ((VAR_2 = FUNC_1(VAR_1, '=')) == ((void*)0)) {
  *VAR_0 = 0;
  return;
 }
 VAR_4 = VAR_0;


 VAR_5 = 1;
 while (VAR_1 < VAR_2) {
  VAR_3 = *VAR_1++;
  if (VAR_5 && (FUNC_0(VAR_3) || VAR_3 == '"'))
   continue;
  *VAR_4++ = VAR_3;
  VAR_5 = 0;
 }


 if (VAR_5) {
  *VAR_0 = 0;
  return;
 }


 while (FUNC_0(VAR_4[-1]) || VAR_4[-1] == '"')
  --VAR_4;
 *VAR_4++ = *VAR_1++;


 VAR_5 = 1;
 while ((VAR_3 = *VAR_1++) != 0) {
  if (VAR_5 && (FUNC_0(VAR_3) || VAR_3 == '"'))
   continue;
  *VAR_4++ = VAR_3;
  VAR_5 = 0;
 }


 if (VAR_5) {
  *VAR_4 = 0;
  return;
 }


 while (FUNC_0(VAR_4[-1]) || VAR_4[-1] == '"')
  --VAR_4;

 *VAR_4 = 0;
}
