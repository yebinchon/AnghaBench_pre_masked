
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (struct strbuf*,int) ;

size_t FUNC_2(struct strbuf *VAR_0,
    const char *VAR_1,
    void *VAR_2)
{
 int VAR_3;

 switch (VAR_1[0]) {
 case 'n':
  FUNC_1(VAR_0, '\n');
  return 1;
 case 'x':

  VAR_3 = FUNC_0(VAR_1 + 1);
  if (VAR_3 < 0)
   return 0;
  FUNC_1(VAR_0, VAR_3);
  return 3;
 }
 return 0;
}
