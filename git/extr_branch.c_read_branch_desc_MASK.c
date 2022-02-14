
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char**) ;
 int FUNC_2 (struct strbuf*,char*,char const*) ;
 int FUNC_3 (struct strbuf*,char*) ;
 int FUNC_4 (struct strbuf*) ;

int FUNC_5(struct strbuf *VAR_1, const char *VAR_2)
{
 char *VAR_3 = ((void*)0);
 struct strbuf VAR_4 = VAR_0;
 FUNC_2(&VAR_4, "branch.%s.description", VAR_2);
 if (FUNC_1(VAR_4.buf, &VAR_3)) {
  FUNC_4(&VAR_4);
  return -1;
 }
 FUNC_3(VAR_1, VAR_3);
 FUNC_0(VAR_3);
 FUNC_4(&VAR_4);
 return 0;
}
