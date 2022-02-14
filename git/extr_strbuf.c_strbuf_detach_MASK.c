
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; size_t len; } ;


 int FUNC_0 (struct strbuf*,int ) ;
 int FUNC_1 (struct strbuf*,int ) ;

char *FUNC_2(struct strbuf *VAR_0, size_t *VAR_1)
{
 char *VAR_2;
 FUNC_0(VAR_0, 0);
 VAR_2 = VAR_0->buf;
 if (VAR_1)
  *VAR_1 = VAR_0->len;
 FUNC_1(VAR_0, 0);
 return VAR_2;
}
