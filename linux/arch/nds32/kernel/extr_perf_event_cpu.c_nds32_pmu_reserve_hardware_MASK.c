
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct nds32_pmu {int (* request_irq ) (struct nds32_pmu*,int ) ;struct platform_device* plat_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nds32_pmu*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nds32_pmu*,int ) ;

__attribute__((used)) static int FUNC_3(struct nds32_pmu *VAR_2)
{
 int VAR_3;
 struct platform_device *VAR_4 = VAR_2->plat_device;

 if (!VAR_4)
  return -VAR_0;

 FUNC_1(&VAR_4->dev);
 VAR_3 = VAR_2->request_irq(VAR_2, VAR_1);
 if (VAR_3) {
  FUNC_0(VAR_2);
  return VAR_3;
 }

 return 0;
}
