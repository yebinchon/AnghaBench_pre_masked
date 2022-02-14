
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct strbuf*,char const*) ;

int FUNC_4(const char *VAR_0, struct strbuf *VAR_1)
{
 if (FUNC_3(VAR_1, VAR_0))
  FUNC_1(FUNC_0("'%s' is not a valid branch name."), VAR_0);

 return FUNC_2(VAR_1->buf);
}
