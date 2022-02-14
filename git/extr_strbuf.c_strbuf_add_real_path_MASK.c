
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ len; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,struct strbuf*) ;
 int FUNC_1 (struct strbuf*,char const*,int) ;
 int FUNC_2 (struct strbuf*) ;

void FUNC_3(struct strbuf *VAR_1, const char *VAR_2)
{
 if (VAR_1->len) {
  struct strbuf VAR_3 = VAR_0;
  FUNC_1(&VAR_3, VAR_2, 1);
  FUNC_0(VAR_1, &VAR_3);
  FUNC_2(&VAR_3);
 } else
  FUNC_1(VAR_1, VAR_2, 1);
}
