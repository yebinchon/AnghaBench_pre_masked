
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; char* buf; } ;



void FUNC_0(struct strbuf *VAR_0)
{
 if (VAR_0->len > 0 && VAR_0->buf[VAR_0->len - 1] == '\n') {
  if (--VAR_0->len > 0 && VAR_0->buf[VAR_0->len - 1] == '\r')
   --VAR_0->len;
  VAR_0->buf[VAR_0->len] = '\0';
 }
}
