
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prio_si {scalar_t__ bitmap; int q_array; } ;
struct dn_sch_inst {int dummy; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static int
FUNC_1(struct dn_sch_inst *VAR_0)
{
 struct prio_si *VAR_1 = (struct prio_si *)(VAR_0 + 1);

 FUNC_0(VAR_1->q_array, sizeof(VAR_1->q_array));
 VAR_1->bitmap = 0;

 return 0;
}
