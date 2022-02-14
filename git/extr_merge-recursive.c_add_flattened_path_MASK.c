
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; char* buf; } ;


 int FUNC_0 (struct strbuf*,char const*) ;

__attribute__((used)) static void FUNC_1(struct strbuf *VAR_0, const char *VAR_1)
{
 size_t VAR_2 = VAR_0->len;
 FUNC_0(VAR_0, VAR_1);
 for (; VAR_2 < VAR_0->len; VAR_2++)
  if (VAR_0->buf[VAR_2] == '/')
   VAR_0->buf[VAR_2] = '_';
}
