
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; size_t len; } ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,char*,size_t) ;

void FUNC_2(struct strbuf *VAR_0)
{
 char *VAR_1 = VAR_0->buf;
 while (VAR_0->len > 0 && FUNC_0(*VAR_1)) {
  VAR_1++;
  VAR_0->len--;
 }
 FUNC_1(VAR_0->buf, VAR_1, VAR_0->len);
 VAR_0->buf[VAR_0->len] = '\0';
}
