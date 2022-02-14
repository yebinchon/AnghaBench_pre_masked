
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_adc_priv {int* irq; int domain; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (struct device_node*,unsigned int,int ,int *,struct stm32_adc_priv*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,struct stm32_adc_priv*) ;
 int FUNC_4 (struct platform_device*,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_5,
          struct stm32_adc_priv *VAR_6)
{
 struct device_node *VAR_7 = VAR_5->dev.of_node;
 unsigned int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_6->irq[VAR_8] = FUNC_4(VAR_5, VAR_8);
  if (VAR_6->irq[VAR_8] < 0) {







   if (VAR_8 && VAR_6->irq[VAR_8] == -VAR_1)
    continue;

   return VAR_6->irq[VAR_8];
  }
 }

 VAR_6->domain = FUNC_1(VAR_7, VAR_2, 0,
          &VAR_3,
          VAR_6);
 if (!VAR_6->domain) {
  FUNC_0(&VAR_5->dev, "Failed to add irq domain\n");
  return -VAR_0;
 }

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  if (VAR_6->irq[VAR_8] < 0)
   continue;
  FUNC_2(VAR_6->irq[VAR_8], VAR_4);
  FUNC_3(VAR_6->irq[VAR_8], VAR_6);
 }

 return 0;
}
