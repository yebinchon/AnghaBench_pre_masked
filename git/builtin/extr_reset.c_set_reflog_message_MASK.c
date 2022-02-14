
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (struct strbuf*,char*,char const*,...) ;
 int FUNC_2 (struct strbuf*) ;

__attribute__((used)) static void FUNC_3(struct strbuf *VAR_0, const char *VAR_1,
          const char *VAR_2)
{
 const char *VAR_3 = FUNC_0("GIT_REFLOG_ACTION");

 FUNC_2(VAR_0);
 if (VAR_3)
  FUNC_1(VAR_0, "%s: %s", VAR_3, VAR_1);
 else if (VAR_2)
  FUNC_1(VAR_0, "reset: moving to %s", VAR_2);
 else
  FUNC_1(VAR_0, "reset: %s", VAR_1);
}
