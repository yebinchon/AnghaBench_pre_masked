
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rr_si {int * tail; int head; } ;
struct dn_sch_inst {int dummy; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(struct dn_sch_inst *VAR_0)
{
 struct rr_si *VAR_1 = (struct rr_si *)(VAR_0 + 1);

 FUNC_0("called");
 VAR_1->head = *(VAR_1->tail = ((void*)0));

 return 0;
}
