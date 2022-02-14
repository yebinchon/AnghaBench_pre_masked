
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,int*) ;
 int FUNC_2 (struct strbuf*,char const*,int) ;
 int FUNC_3 (struct strbuf*,char const*) ;
 int FUNC_4 (struct strbuf*,int) ;

const char *FUNC_5(struct strbuf *VAR_0, const char *VAR_1,
      const char *VAR_2)
{
 int VAR_3 = 1;

 for (;;) {
  const char *VAR_4 = VAR_1;
  int VAR_5 = FUNC_0(VAR_4);

  VAR_1 += VAR_5;
  if (!VAR_5 || FUNC_1(VAR_4, &VAR_5))
   break;

  if (!VAR_0)
   continue;
  FUNC_4(VAR_0, VAR_5 + 2);
  if (!VAR_3)
   FUNC_3(VAR_0, VAR_2);
  FUNC_2(VAR_0, VAR_4, VAR_5);
  VAR_3 = 0;
 }
 return VAR_1;
}
