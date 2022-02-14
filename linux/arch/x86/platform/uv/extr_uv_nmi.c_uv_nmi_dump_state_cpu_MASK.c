
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_4__ {scalar_t__ pid; } ;
struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (struct pt_regs*) ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int,struct pt_regs*) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(int VAR_3, struct pt_regs *VAR_4)
{
 const char *VAR_5 = " ................................. ";

 if (VAR_3 == 0)
  FUNC_5();

 if (VAR_1->pid != 0 || !FUNC_3("ips"))
  FUNC_4(VAR_3, VAR_4);

 if (FUNC_3("dump")) {
  FUNC_0("UV:%sNMI process trace for CPU %d\n", VAR_5, VAR_3);
  FUNC_1(VAR_4);
 }

 FUNC_2(VAR_2.state, VAR_0);
}
