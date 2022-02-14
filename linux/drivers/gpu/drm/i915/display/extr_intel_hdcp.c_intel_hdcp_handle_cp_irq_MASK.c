
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_hdcp {int check_work; int cp_irq_queue; int cp_irq_count; int shim; } ;
struct intel_connector {struct intel_hdcp hdcp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct intel_connector *VAR_0)
{
 struct intel_hdcp *VAR_1 = &VAR_0->hdcp;

 if (!VAR_1->shim)
  return;

 FUNC_0(&VAR_0->hdcp.cp_irq_count);
 FUNC_2(&VAR_0->hdcp.cp_irq_queue);

 FUNC_1(&VAR_1->check_work, 0);
}
