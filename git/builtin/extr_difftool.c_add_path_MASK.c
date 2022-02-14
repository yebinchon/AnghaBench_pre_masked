
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; char* buf; } ;


 int FUNC_0 (struct strbuf*,char) ;
 int FUNC_1 (struct strbuf*,char const*) ;
 int FUNC_2 (struct strbuf*,size_t) ;

__attribute__((used)) static void FUNC_3(struct strbuf *VAR_0, size_t VAR_1, const char *VAR_2)
{
 FUNC_2(VAR_0, VAR_1);
 if (VAR_0->len && VAR_0->buf[VAR_0->len - 1] != '/')
  FUNC_0(VAR_0, '/');
 FUNC_1(VAR_0, VAR_2);
}
