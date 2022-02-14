
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; char* buf; } ;


 int FUNC_0 (struct strbuf*,char) ;
 int FUNC_1 (struct strbuf*,char const*) ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static void FUNC_3(struct strbuf *VAR_0, const char *VAR_1, const char *VAR_2)
{
 const char *VAR_3 = FUNC_2(VAR_2, '/');

 FUNC_1(VAR_0, VAR_1);
 while (VAR_0->len && VAR_0->buf[VAR_0->len - 1] == '/')
  VAR_0->len--;
 FUNC_0(VAR_0, '/');
 FUNC_1(VAR_0, VAR_3 ? VAR_3 + 1 : VAR_2);
}
