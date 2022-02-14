
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int num_resources; } ;
struct nds32_pmu {struct platform_device* plat_device; } ;
typedef int irq_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct platform_device*,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int,int ,int ,char*,struct nds32_pmu*) ;

__attribute__((used)) static int FUNC_5(struct nds32_pmu *VAR_2, irq_handler_t VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 struct platform_device *VAR_7 = VAR_2->plat_device;

 if (!VAR_7)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_7->num_resources, FUNC_1());
 if (VAR_6 < 1) {
  FUNC_3("no irqs for PMUs defined\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_2(VAR_7, 0);
 VAR_4 = FUNC_4(VAR_5, VAR_3, VAR_1, "nds32-pfm",
     VAR_2);
 if (VAR_4) {
  FUNC_3("unable to request IRQ%d for NDS PMU counters\n",
         VAR_5);
  return VAR_4;
 }
 return 0;
}
