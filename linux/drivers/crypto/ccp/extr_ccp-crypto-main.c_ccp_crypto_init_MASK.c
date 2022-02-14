
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cmd_count; int cmds; int * backlog; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(void)
{
 int VAR_2;

 VAR_2 = FUNC_1();
 if (VAR_2) {
  FUNC_4("Cannot load: there are no available CCPs\n");
  return VAR_2;
 }

 FUNC_5(&VAR_1);
 FUNC_0(&VAR_0.cmds);
 VAR_0.backlog = &VAR_0.cmds;
 VAR_0.cmd_count = 0;

 VAR_2 = FUNC_2();
 if (VAR_2)
  FUNC_3();

 return VAR_2;
}
