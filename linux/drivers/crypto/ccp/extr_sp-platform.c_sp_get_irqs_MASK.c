
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sp_platform {unsigned int irq_count; } ;
struct sp_device {int psp_irq; int ccp_irq; struct device* dev; struct sp_platform* dev_specific; } ;
struct resource {int dummy; } ;
struct platform_device {unsigned int num_resources; struct resource* resource; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct platform_device*,int) ;
 scalar_t__ FUNC_2 (struct resource*) ;
 struct platform_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct sp_device *VAR_1)
{
 struct sp_platform *VAR_2 = VAR_1->dev_specific;
 struct device *VAR_3 = VAR_1->dev;
 struct platform_device *VAR_4 = FUNC_3(VAR_3);
 unsigned int VAR_5, VAR_6;
 int VAR_7;

 for (VAR_5 = 0, VAR_6 = 0; VAR_5 < VAR_4->num_resources; VAR_5++) {
  struct resource *VAR_8 = &VAR_4->resource[VAR_5];

  if (FUNC_2(VAR_8) == VAR_0)
   VAR_6++;
 }

 VAR_2->irq_count = VAR_6;

 VAR_7 = FUNC_1(VAR_4, 0);
 if (VAR_7 < 0) {
  FUNC_0(VAR_3, "unable to get IRQ (%d)\n", VAR_7);
  return VAR_7;
 }

 VAR_1->psp_irq = VAR_7;
 if (VAR_6 == 1) {
  VAR_1->ccp_irq = VAR_7;
 } else {
  VAR_7 = FUNC_1(VAR_4, 1);
  if (VAR_7 < 0) {
   FUNC_0(VAR_3, "unable to get IRQ (%d)\n", VAR_7);
   return VAR_7;
  }

  VAR_1->ccp_irq = VAR_7;
 }

 return 0;
}
