
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char const* buf; int len; } ;


 scalar_t__ FUNC_0 (char const*,char const*) ;
 int FUNC_1 (struct strbuf*,int,int,char const*,int) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,char const*) ;

__attribute__((used)) static int FUNC_4(struct strbuf *VAR_0,
       const char *VAR_1,
       const char *VAR_2)
{
 const char *VAR_3 = ((void*)0);
 int VAR_4, VAR_5;

 VAR_5 = FUNC_2(VAR_1);
 if (FUNC_0(VAR_0->buf, VAR_1))
  VAR_3 = VAR_0->buf + VAR_0->len - VAR_5;
 else
  VAR_3 = FUNC_3(VAR_0->buf, VAR_1);
 if (!VAR_3)
  return 0;

 if (VAR_3 > VAR_0->buf && VAR_3[-1] != '/')
  return 0;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4 > VAR_5 && VAR_3[VAR_5] != '/')
  return 0;

 FUNC_1(VAR_0, VAR_3 - VAR_0->buf, VAR_5,
        VAR_2, FUNC_2(VAR_2));
 return 1;
}
