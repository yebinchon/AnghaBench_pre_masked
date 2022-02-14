
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cec_pin {int work_irq_change; } ;
struct cec_adapter {scalar_t__ monitor_all_cnt; scalar_t__ is_configured; scalar_t__ is_configuring; struct cec_pin* pin; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct cec_pin*,int,int) ;

void FUNC_2(struct cec_adapter *VAR_1, bool VAR_2)
{
 struct cec_pin *VAR_3 = VAR_1->pin;

 FUNC_1(VAR_3, VAR_2, 0);
 if (!VAR_2 && (VAR_1->is_configuring || VAR_1->is_configured ||
         VAR_1->monitor_all_cnt))
  FUNC_0(&VAR_3->work_irq_change, VAR_0);
}
