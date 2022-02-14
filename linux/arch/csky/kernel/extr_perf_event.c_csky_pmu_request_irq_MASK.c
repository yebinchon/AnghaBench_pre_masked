
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int num_resources; } ;
typedef int irq_handler_t ;
struct TYPE_2__ {int hw_events; struct platform_device* plat_device; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct platform_device*,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (scalar_t__,int ,char*,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(irq_handler_t VAR_3)
{
 int VAR_4, VAR_5;
 struct platform_device *VAR_6 = VAR_1.plat_device;

 if (!VAR_6)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_6->num_resources, FUNC_1());
 if (VAR_5 < 1) {
  FUNC_3("no irqs for PMUs defined\n");
  return -VAR_0;
 }

 VAR_2 = FUNC_2(VAR_6, 0);
 if (VAR_2 < 0)
  return -VAR_0;
 VAR_4 = FUNC_4(VAR_2, VAR_3, "csky-pmu",
     FUNC_5(VAR_1.hw_events));
 if (VAR_4) {
  FUNC_3("unable to request IRQ%d for CSKY PMU counters\n",
         VAR_2);
  return VAR_4;
 }

 return 0;
}
