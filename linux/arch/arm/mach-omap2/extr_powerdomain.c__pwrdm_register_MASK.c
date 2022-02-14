
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct voltagedomain {int dummy; } ;
struct TYPE_3__ {struct voltagedomain* ptr; int name; } ;
struct powerdomain {scalar_t__ prcm_partition; int* state_counter; int banks; size_t state; int name; scalar_t__* ret_mem_off_counter; scalar_t__ ret_logic_off_counter; int node; int _lock; int voltdm_node; TYPE_1__ voltdm; } ;
struct TYPE_4__ {int (* pwrdm_wait_transition ) (struct powerdomain*) ;int (* pwrdm_has_voltdm ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* VAR_4 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int ,...) ;
 int VAR_5 ;
 size_t FUNC_6 (struct powerdomain*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (struct powerdomain*) ;
 struct voltagedomain* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct powerdomain *VAR_6)
{
 int VAR_7;
 struct voltagedomain *VAR_8;

 if (!VAR_6 || !VAR_6->name)
  return -VAR_1;

 if (FUNC_2() &&
     VAR_6->prcm_partition == VAR_2) {
  FUNC_5("powerdomain: %s: missing OMAP4 PRCM partition ID\n",
         VAR_6->name);
  return -VAR_1;
 }

 if (FUNC_1(VAR_6->name))
  return -VAR_0;

 if (VAR_4 && VAR_4->pwrdm_has_voltdm)
  if (!VAR_4->pwrdm_has_voltdm())
   goto skip_voltdm;

 VAR_8 = FUNC_10(VAR_6->voltdm.name);
 if (!VAR_8) {
  FUNC_5("powerdomain: %s: voltagedomain %s does not exist\n",
         VAR_6->name, VAR_6->voltdm.name);
  return -VAR_1;
 }
 VAR_6->voltdm.ptr = VAR_8;
 FUNC_0(&VAR_6->voltdm_node);
skip_voltdm:
 FUNC_7(&VAR_6->_lock);

 FUNC_3(&VAR_6->node, &VAR_5);


 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  VAR_6->state_counter[VAR_7] = 0;

 VAR_6->ret_logic_off_counter = 0;
 for (VAR_7 = 0; VAR_7 < VAR_6->banks; VAR_7++)
  VAR_6->ret_mem_off_counter[VAR_7] = 0;

 if (VAR_4 && VAR_4->pwrdm_wait_transition)
  VAR_4->pwrdm_wait_transition(VAR_6);
 VAR_6->state = FUNC_6(VAR_6);
 VAR_6->state_counter[VAR_6->state] = 1;

 FUNC_4("powerdomain: registered %s\n", VAR_6->name);

 return 0;
}
