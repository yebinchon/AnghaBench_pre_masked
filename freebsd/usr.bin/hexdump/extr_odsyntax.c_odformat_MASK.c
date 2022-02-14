
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,char) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char,char const*) ;
 char* FUNC_3 (char,char const*) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_0)
{
 char VAR_1;

 while (*VAR_0 != '\0') {
  switch ((VAR_1 = *VAR_0++)) {
  case 'a':
   FUNC_1("16/1 \"%3_u \" \"\\n\"");
   break;
  case 'c':
   FUNC_1("16/1 \"%3_c \" \"\\n\"");
   break;
  case 'o': case 'u': case 'd': case 'x':
   VAR_0 = FUNC_3(VAR_1, VAR_0);
   break;
  case 'f':
   VAR_0 = FUNC_2(VAR_1, VAR_0);
   break;
  default:
   FUNC_0(1, "%c: unrecognised format character", VAR_1);
  }
 }
}
