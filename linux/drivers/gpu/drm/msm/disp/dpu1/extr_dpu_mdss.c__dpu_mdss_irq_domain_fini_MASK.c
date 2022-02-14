
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * domain; } ;
struct dpu_mdss {TYPE_1__ irq_controller; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct dpu_mdss *VAR_0)
{
 if (VAR_0->irq_controller.domain) {
  FUNC_0(VAR_0->irq_controller.domain);
  VAR_0->irq_controller.domain = ((void*)0);
 }
}
