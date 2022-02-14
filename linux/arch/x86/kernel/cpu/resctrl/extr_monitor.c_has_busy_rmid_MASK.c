
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdt_resource {scalar_t__ num_rmid; } ;
struct rdt_domain {int rmid_busy_llc; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;

bool FUNC_1(struct rdt_resource *VAR_0, struct rdt_domain *VAR_1)
{
 return FUNC_0(VAR_1->rmid_busy_llc, VAR_0->num_rmid) != VAR_0->num_rmid;
}
