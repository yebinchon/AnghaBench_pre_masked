
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (struct strbuf*,char const*,int ) ;
 int FUNC_3 (struct strbuf*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0, struct strbuf *VAR_1)
{
 if (FUNC_2(VAR_1, VAR_0, 0) < 0)
  return FUNC_1(FUNC_0("could not read '%s'"), VAR_0);
 FUNC_3(VAR_1);
 return 0;
}
