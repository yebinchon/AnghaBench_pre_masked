
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int mst_mgr; int can_mst; } ;
struct intel_digital_port {struct intel_dp dp; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct intel_digital_port *VAR_0)
{
 struct intel_dp *VAR_1 = &VAR_0->dp;

 if (!VAR_1->can_mst)
  return;

 FUNC_0(&VAR_1->mst_mgr);

}
