
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct machine_check_event {scalar_t__ version; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct machine_check_event*,int ) ;
 int FUNC_1 (struct machine_check_event*,int ,int) ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct pt_regs*,struct machine_check_event*) ;
 int FUNC_4 (struct pt_regs*) ;

int FUNC_5(struct pt_regs *VAR_2)
{
 struct machine_check_event VAR_3;

 if (!FUNC_0(&VAR_3, VAR_0))
  return 0;


 if (VAR_3.version != VAR_1) {
  FUNC_2("Machine Check Exception, Unknown event version %d !\n",
         VAR_3.version);
  return 0;
 }
 FUNC_1(&VAR_3, FUNC_4(VAR_2), 0);

 if (FUNC_3(VAR_2, &VAR_3))
  return 1;

 return 0;
}
