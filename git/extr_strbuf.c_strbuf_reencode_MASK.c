
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;


 char* FUNC_0 (int ,int ,char const*,char const*,size_t*) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 int FUNC_2 (struct strbuf*,char*,size_t,size_t) ;

int FUNC_3(struct strbuf *VAR_0, const char *VAR_1, const char *VAR_2)
{
 char *VAR_3;
 size_t VAR_4;

 if (FUNC_1(VAR_1, VAR_2))
  return 0;

 VAR_3 = FUNC_0(VAR_0->buf, VAR_0->len, VAR_2, VAR_1, &VAR_4);
 if (!VAR_3)
  return -1;

 FUNC_2(VAR_0, VAR_3, VAR_4, VAR_4);
 return 0;
}
