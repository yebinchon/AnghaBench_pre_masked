
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int argv; } ;
struct child_process {int clean_on_exit; int wait_after_clean; int silent_exec_failure; char* trace2_child_class; TYPE_1__ args; } ;


 struct child_process VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,char*,char const*) ;
 int FUNC_2 (TYPE_1__*,char const**) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char const*) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (struct child_process*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ,char*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_12(const char **VAR_4)
{
 struct child_process VAR_5 = VAR_0;
 int VAR_6;

 if (FUNC_7())
  FUNC_5(FUNC_0("%s doesn't support --super-prefix"), VAR_4[0]);

 if (VAR_3 == -1 && !FUNC_8(VAR_4[0]))
  VAR_3 = FUNC_3(VAR_4[0]);
 FUNC_4();

 FUNC_1(&VAR_5.args, "git-%s", VAR_4[0]);
 FUNC_2(&VAR_5.args, VAR_4 + 1);
 VAR_5.clean_on_exit = 1;
 VAR_5.wait_after_clean = 1;
 VAR_5.silent_exec_failure = 1;
 VAR_5.trace2_child_class = "dashed";

 FUNC_10("_run_dashed_");





 FUNC_11(VAR_5.args.argv, "trace: exec:");







 VAR_6 = FUNC_9(&VAR_5);






 if (VAR_6 >= 0)
  FUNC_6(VAR_6);
 else if (VAR_2 != VAR_1)
  FUNC_6(128);
}
