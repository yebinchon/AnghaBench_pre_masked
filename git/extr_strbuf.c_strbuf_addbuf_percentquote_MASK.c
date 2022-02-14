
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; char* buf; } ;


 int FUNC_0 (struct strbuf*,char) ;

void FUNC_1(struct strbuf *VAR_0, const struct strbuf *VAR_1)
{
 size_t VAR_2, VAR_3 = VAR_1->len;

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  if (VAR_1->buf[VAR_2] == '%')
   FUNC_0(VAR_0, '%');
  FUNC_0(VAR_0, VAR_1->buf[VAR_2]);
 }
}
