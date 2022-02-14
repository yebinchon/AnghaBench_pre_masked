
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct testsuite {int failed; } ;
struct strbuf {int dummy; } ;


 int FUNC_0 (struct strbuf*,char*,char*,char const*) ;
 int FUNC_1 (int *,char const*) ;

__attribute__((used)) static int FUNC_2(int VAR_0, struct strbuf *VAR_1, void *VAR_2,
    void *VAR_3)
{
 struct testsuite *VAR_4 = VAR_2;
 const char *VAR_5 = (const char *)VAR_3;

 if (VAR_0)
  FUNC_1(&VAR_4->failed, VAR_5);

 FUNC_0(VAR_1, "%s: '%s'\n", VAR_0 ? "FAIL" : "SUCCESS", VAR_5);

 return 0;
}
