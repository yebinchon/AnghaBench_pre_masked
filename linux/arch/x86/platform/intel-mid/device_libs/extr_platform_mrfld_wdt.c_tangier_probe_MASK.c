
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct intel_mid_wdt_pdata* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct irq_alloc_info {int dummy; } ;
struct intel_mid_wdt_pdata {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (struct irq_alloc_info*,int ,int,int ) ;
 int FUNC_3 (int,int ,struct irq_alloc_info*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 struct irq_alloc_info VAR_4;
 struct intel_mid_wdt_pdata *VAR_5 = VAR_3->dev.platform_data;
 int VAR_6 = VAR_2;
 int VAR_7;

 if (!VAR_5)
  return -VAR_0;


 FUNC_2(&VAR_4, FUNC_0(0), 1, 0);
 VAR_7 = FUNC_3(VAR_6, VAR_1, &VAR_4);
 if (VAR_7 < 0) {
  FUNC_1(&VAR_3->dev, "cannot find interrupt %d in ioapic\n", VAR_6);
  return VAR_7;
 }

 VAR_5->irq = VAR_7;
 return 0;
}
