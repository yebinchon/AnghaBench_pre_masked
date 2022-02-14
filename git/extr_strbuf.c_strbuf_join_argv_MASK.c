
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char const* buf; } ;


 int FUNC_0 (struct strbuf*,char) ;
 int FUNC_1 (struct strbuf*,char const*) ;

const char *FUNC_2(struct strbuf *VAR_0,
        int VAR_1, const char **VAR_2, char VAR_3)
{
 if (!VAR_1)
  return VAR_0->buf;

 FUNC_1(VAR_0, *VAR_2);
 while (--VAR_1) {
  FUNC_0(VAR_0, VAR_3);
  FUNC_1(VAR_0, *(++VAR_2));
 }

 return VAR_0->buf;
}
