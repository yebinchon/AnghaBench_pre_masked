
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ip_fw {int dummy; } ;
struct TYPE_3__ {scalar_t__ opcode; } ;
struct TYPE_4__ {int max_log; int log_left; TYPE_1__ o; } ;
typedef TYPE_2__ ipfw_insn_log ;


 scalar_t__ FUNC_0 (struct ip_fw*) ;
 int FUNC_1 (struct ip_fw*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct ip_fw *VAR_1, int VAR_2)
{
 ipfw_insn_log *VAR_3 = (ipfw_insn_log *)FUNC_0(VAR_1);

 if (VAR_2 == 0)
  FUNC_1(VAR_1);
 if (VAR_3->o.opcode == VAR_0)
  VAR_3->log_left = VAR_3->max_log;
}
