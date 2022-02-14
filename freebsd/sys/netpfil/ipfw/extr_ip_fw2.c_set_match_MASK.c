
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ip_fw_chain {TYPE_1__** map; int id; } ;
struct TYPE_4__ {int slot; int rulenum; scalar_t__ rule_id; int chain_id; } ;
struct ip_fw_args {int flags; TYPE_2__ rule; } ;
struct TYPE_3__ {int rulenum; scalar_t__ id; } ;


 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(struct ip_fw_args *VAR_1, int VAR_2,
 struct ip_fw_chain *VAR_3)
{
 VAR_1->rule.chain_id = VAR_3->id;
 VAR_1->rule.slot = VAR_2 + 1;
 VAR_1->rule.rule_id = 1 + VAR_3->map[VAR_2]->id;
 VAR_1->rule.rulenum = VAR_3->map[VAR_2]->rulenum;
 VAR_1->flags |= VAR_0;
}
