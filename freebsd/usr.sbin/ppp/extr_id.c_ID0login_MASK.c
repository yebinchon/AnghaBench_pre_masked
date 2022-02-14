
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utmpx {int ut_host; int ut_line; int ut_user; int ut_id; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int,int ,int,int ,int,int ,int,int ) ;
 int FUNC_3 (struct utmpx const*) ;

void
FUNC_4(const struct utmpx *VAR_1)
{
  FUNC_0();
  FUNC_3(VAR_1);
  FUNC_2(VAR_0, "pututxline(\"%.*s\", \"%.*s\", \"%.*s\", \"%.*s\")\n",
      (int)sizeof VAR_1->ut_id, VAR_1->ut_id,
      (int)sizeof VAR_1->ut_user, VAR_1->ut_user,
      (int)sizeof VAR_1->ut_line, VAR_1->ut_line,
      (int)sizeof VAR_1->ut_host, VAR_1->ut_host);
  FUNC_1();
}
