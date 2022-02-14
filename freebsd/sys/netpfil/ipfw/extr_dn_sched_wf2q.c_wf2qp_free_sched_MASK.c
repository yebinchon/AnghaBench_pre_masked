
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wf2qp_si {int idle_heap; int ne_heap; int sch_heap; } ;
struct dn_sch_inst {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(struct dn_sch_inst *VAR_0)
{
 struct wf2qp_si *VAR_1 = (struct wf2qp_si *)(VAR_0 + 1);

 FUNC_0(&VAR_1->sch_heap);
 FUNC_0(&VAR_1->ne_heap);
 FUNC_0(&VAR_1->idle_heap);

 return 0;
}
