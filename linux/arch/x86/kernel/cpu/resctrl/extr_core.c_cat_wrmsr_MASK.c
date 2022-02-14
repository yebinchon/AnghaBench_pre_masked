
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdt_resource {scalar_t__ msr_base; } ;
struct rdt_domain {int * ctrl_val; } ;
struct msr_param {unsigned int low; unsigned int high; } ;


 scalar_t__ FUNC_0 (struct rdt_resource*,unsigned int) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_2(struct rdt_domain *VAR_0, struct msr_param *VAR_1, struct rdt_resource *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = VAR_1->low; VAR_3 < VAR_1->high; VAR_3++)
  FUNC_1(VAR_2->msr_base + FUNC_0(VAR_2, VAR_3), VAR_0->ctrl_val[VAR_3]);
}
