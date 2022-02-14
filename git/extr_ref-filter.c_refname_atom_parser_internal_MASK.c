
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct refname_atom {int rstrip; int option; int lstrip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char*,char const**) ;
 int FUNC_2 (struct strbuf*,int,int ,char const*,...) ;
 int FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (char const*,int,int *) ;

__attribute__((used)) static int FUNC_5(struct refname_atom *VAR_4, const char *VAR_5,
      const char *VAR_6, struct strbuf *VAR_7)
{
 if (!VAR_5)
  VAR_4->option = VAR_1;
 else if (!FUNC_3(VAR_5, "short"))
  VAR_4->option = VAR_3;
 else if (FUNC_1(VAR_5, "lstrip=", &VAR_5) ||
   FUNC_1(VAR_5, "strip=", &VAR_5)) {
  VAR_4->option = VAR_0;
  if (FUNC_4(VAR_5, 10, &VAR_4->lstrip))
   return FUNC_2(VAR_7, -1, FUNC_0("Integer value expected refname:lstrip=%s"), VAR_5);
 } else if (FUNC_1(VAR_5, "rstrip=", &VAR_5)) {
  VAR_4->option = VAR_2;
  if (FUNC_4(VAR_5, 10, &VAR_4->rstrip))
   return FUNC_2(VAR_7, -1, FUNC_0("Integer value expected refname:rstrip=%s"), VAR_5);
 } else
  return FUNC_2(VAR_7, -1, FUNC_0("unrecognized %%(%s) argument: %s"), VAR_6, VAR_5);
 return 0;
}
