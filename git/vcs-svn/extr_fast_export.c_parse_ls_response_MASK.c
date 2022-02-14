
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct strbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*) ;
 int VAR_1 ;
 char* FUNC_2 (char const*,char,int) ;
 int FUNC_3 (struct strbuf*,char const*,int) ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_2, uint32_t *VAR_3,
     struct strbuf *VAR_4)
{
 const char *VAR_5;
 const char *VAR_6;

 FUNC_0(VAR_2);
 VAR_6 = VAR_2 + FUNC_4(VAR_2);

 if (*VAR_2 == 'm') {
  VAR_1 = VAR_0;
  return -1;
 }


 if (VAR_6 - VAR_2 < (signed) FUNC_4("100644") ||
     VAR_2[FUNC_4("100644")] != ' ')
  FUNC_1("invalid ls response: missing mode: %s", VAR_2);
 *VAR_3 = 0;
 for (; *VAR_2 != ' '; VAR_2++) {
  char VAR_7 = *VAR_2;
  if (VAR_7 < '0' || VAR_7 > '7')
   FUNC_1("invalid ls response: mode is not octal: %s", VAR_2);
  *VAR_3 *= 8;
  *VAR_3 += VAR_7 - '0';
 }


 if (VAR_6 - VAR_2 < (signed) FUNC_4(" blob ") ||
     (VAR_2[1] != 'b' && VAR_2[1] != 't'))
  FUNC_1("unexpected ls response: not a tree or blob: %s", VAR_2);
 VAR_2 += FUNC_4(" blob ");


 VAR_5 = FUNC_2(VAR_2, '\t', VAR_6 - VAR_2);
 if (!VAR_5)
  FUNC_1("invalid ls response: missing tab: %s", VAR_2);
 FUNC_3(VAR_4, VAR_2, VAR_5 - VAR_2);
 return 0;
}
