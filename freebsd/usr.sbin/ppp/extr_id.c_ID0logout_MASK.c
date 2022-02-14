
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utmpx {int ut_id; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int,int ) ;
 int FUNC_3 (struct utmpx const*) ;

void
FUNC_4(const struct utmpx *VAR_1)
{
  FUNC_0();
  FUNC_3(VAR_1);
  FUNC_2(VAR_0, "pututxline(\"%.*s\")\n",
      (int)sizeof VAR_1->ut_id, VAR_1->ut_id);
  FUNC_1();
}
