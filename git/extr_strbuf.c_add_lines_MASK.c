
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 char* FUNC_0 (char const*,char,size_t) ;
 int FUNC_1 (struct strbuf*,char const*,int) ;
 int FUNC_2 (struct strbuf*,char const*) ;
 int FUNC_3 (struct strbuf*) ;

__attribute__((used)) static void FUNC_4(struct strbuf *VAR_0,
   const char *VAR_1,
   const char *VAR_2,
   const char *VAR_3, size_t VAR_4)
{
 while (VAR_4) {
  const char *VAR_5;
  const char *VAR_6 = FUNC_0(VAR_3, '\n', VAR_4);
  VAR_6 = VAR_6 ? (VAR_6 + 1) : (VAR_3 + VAR_4);

  VAR_5 = ((VAR_2 && (VAR_3[0] == '\n' || VAR_3[0] == '\t'))
     ? VAR_2 : VAR_1);
  FUNC_2(VAR_0, VAR_5);
  FUNC_1(VAR_0, VAR_3, VAR_6 - VAR_3);
  VAR_4 -= VAR_6 - VAR_3;
  VAR_3 = VAR_6;
 }
 FUNC_3(VAR_0);
}
