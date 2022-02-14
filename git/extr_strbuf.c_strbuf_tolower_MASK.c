
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; int len; } ;


 char FUNC_0 (char) ;

void FUNC_1(struct strbuf *VAR_0)
{
 char *VAR_1 = VAR_0->buf, *VAR_2 = VAR_0->buf + VAR_0->len;
 for (; VAR_1 < VAR_2; VAR_1++)
  *VAR_1 = FUNC_0(*VAR_1);
}
