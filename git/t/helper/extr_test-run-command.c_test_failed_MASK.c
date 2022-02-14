
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct testsuite {int failed; } ;
struct strbuf {int dummy; } ;


 int FUNC_0 (struct strbuf*,char*,char const*) ;
 int FUNC_1 (int *,char const*) ;

__attribute__((used)) static int FUNC_2(struct strbuf *VAR_0, void *VAR_1, void *VAR_2)
{
 struct testsuite *VAR_3 = VAR_1;
 const char *VAR_4 = (const char *)VAR_2;

 FUNC_1(&VAR_3->failed, VAR_4);
 FUNC_0(VAR_0, "FAILED TO START: '%s'\n", VAR_4);

 return 0;
}
