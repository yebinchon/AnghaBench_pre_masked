
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; char* buf; } ;


 int FUNC_0 (struct strbuf*,char const) ;
 int FUNC_1 (struct strbuf*,int) ;

__attribute__((used)) static void FUNC_2(struct strbuf *VAR_0, const char *VAR_1)
{
 for (; *VAR_1; VAR_1++) {
  if (*VAR_1 == '/')
   continue;
  if (*VAR_1 == '.' && (!VAR_0->len || VAR_0->buf[VAR_0->len - 1] == '.'))
   continue;
  FUNC_0(VAR_0, *VAR_1);
 }

 while (VAR_0->len && VAR_0->buf[VAR_0->len - 1] == '.')
  FUNC_1(VAR_0, VAR_0->len - 1);
}
