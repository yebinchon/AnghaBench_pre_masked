
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ip_fw_chain {int n_rules; int * map; } ;
struct TYPE_4__ {scalar_t__ opcode; } ;
struct TYPE_6__ {TYPE_2__* nat; TYPE_1__ o; } ;
typedef TYPE_3__ ipfw_insn_nat ;
struct TYPE_5__ {int const id; } ;


 int FUNC_0 (struct ip_fw_chain*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct ip_fw_chain *VAR_1, const int VAR_2)
{
 ipfw_insn_nat *VAR_3;
 int VAR_4;

 FUNC_0(VAR_1);
 for (VAR_4 = 0; VAR_4 < VAR_1->n_rules; VAR_4++) {
  VAR_3 = (ipfw_insn_nat *)FUNC_1(VAR_1->map[VAR_4]);
  if (VAR_3->o.opcode == VAR_0 && VAR_3->nat != ((void*)0) &&
       (VAR_2 < 0 || VAR_3->nat->id == VAR_2))
   VAR_3->nat = ((void*)0);
 }
}
