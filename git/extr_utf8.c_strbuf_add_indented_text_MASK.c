
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (struct strbuf*,char const*,int) ;
 int FUNC_1 (struct strbuf*,char,int) ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static void FUNC_3(struct strbuf *VAR_0, const char *VAR_1,
         int VAR_2, int VAR_3)
{
 if (VAR_2 < 0)
  VAR_2 = 0;
 while (*VAR_1) {
  const char *VAR_4 = FUNC_2(VAR_1, '\n');
  if (*VAR_4 == '\n')
   VAR_4++;
  FUNC_1(VAR_0, ' ', VAR_2);
  FUNC_0(VAR_0, VAR_1, VAR_4 - VAR_1);
  VAR_1 = VAR_4;
  VAR_2 = VAR_3;
 }
}
