
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (char) ;
 int FUNC_1 (struct strbuf*,char) ;
 int FUNC_2 (struct strbuf*) ;

void FUNC_3(struct strbuf *VAR_0, const char *VAR_1)
{
 char VAR_2;
 int VAR_3 = 1;

 FUNC_1(VAR_0, '\t');
 while ((VAR_2 = *VAR_1++)) {
  if (VAR_3 && FUNC_0(VAR_2))
   continue;
  VAR_3 = FUNC_0(VAR_2);
  if (VAR_3)
   VAR_2 = ' ';
  FUNC_1(VAR_0, VAR_2);
 }
 FUNC_2(VAR_0);
}
