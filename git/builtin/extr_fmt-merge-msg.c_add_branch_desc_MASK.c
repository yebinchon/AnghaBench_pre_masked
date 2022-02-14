
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,char const*) ;
 int FUNC_1 (struct strbuf*,char*,int,char const*) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (struct strbuf*) ;
 char* FUNC_4 (char const*,char) ;

__attribute__((used)) static void FUNC_5(struct strbuf *VAR_1, const char *VAR_2)
{
 struct strbuf VAR_3 = VAR_0;

 if (!FUNC_0(&VAR_3, VAR_2)) {
  const char *VAR_4 = VAR_3.buf;
  while (*VAR_4) {
   const char *VAR_5 = FUNC_4(VAR_4, '\n');
   if (*VAR_5)
    VAR_5++;
   FUNC_1(VAR_1, "  : %.*s", (int)(VAR_5 - VAR_4), VAR_4);
   VAR_4 = VAR_5;
  }
  FUNC_2(VAR_1);
 }
 FUNC_3(&VAR_3);
}
