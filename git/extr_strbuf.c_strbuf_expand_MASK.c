
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
typedef size_t (* expand_fn_t ) (struct strbuf*,char const*,void*) ;


 int FUNC_0 (struct strbuf*,char const*,int) ;
 int FUNC_1 (struct strbuf*,char) ;
 char* FUNC_2 (char const*,char) ;

void FUNC_3(struct strbuf *VAR_0, const char *VAR_1, expand_fn_t VAR_2,
     void *VAR_3)
{
 for (;;) {
  const char *VAR_4;
  size_t VAR_5;

  VAR_4 = FUNC_2(VAR_1, '%');
  FUNC_0(VAR_0, VAR_1, VAR_4 - VAR_1);
  if (!*VAR_4)
   break;
  VAR_1 = VAR_4 + 1;

  if (*VAR_1 == '%') {
   FUNC_1(VAR_0, '%');
   VAR_1++;
   continue;
  }

  VAR_5 = VAR_2(VAR_0, VAR_1, VAR_3);
  if (VAR_5)
   VAR_1 += VAR_5;
  else
   FUNC_1(VAR_0, '%');
 }
}
