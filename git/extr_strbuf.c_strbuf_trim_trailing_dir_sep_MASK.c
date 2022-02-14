
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; char* buf; } ;


 scalar_t__ FUNC_0 (unsigned char) ;

void FUNC_1(struct strbuf *VAR_0)
{
 while (VAR_0->len > 0 && FUNC_0((unsigned char)VAR_0->buf[VAR_0->len - 1]))
  VAR_0->len--;
 VAR_0->buf[VAR_0->len] = '\0';
}
