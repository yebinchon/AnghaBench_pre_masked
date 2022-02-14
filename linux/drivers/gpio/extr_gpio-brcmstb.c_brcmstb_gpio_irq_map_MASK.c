
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct irq_domain {struct brcmstb_gpio_priv* host_data; } ;
struct brcmstb_gpio_priv {int irq_chip; struct platform_device* pdev; } ;
struct brcmstb_gpio_bank {int gc; int id; } ;
typedef scalar_t__ irq_hw_number_t ;


 int VAR_0 ;
 struct brcmstb_gpio_bank* FUNC_0 (struct brcmstb_gpio_priv*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,unsigned int,int,int ) ;
 int VAR_3 ;
 int FUNC_2 (unsigned int,int *,int ) ;
 int FUNC_3 (unsigned int,int *) ;
 int FUNC_4 (unsigned int,int *,int *) ;
 int FUNC_5 (unsigned int) ;

__attribute__((used)) static int FUNC_6(struct irq_domain *VAR_4, unsigned int VAR_5,
  irq_hw_number_t VAR_6)
{
 struct brcmstb_gpio_priv *VAR_7 = VAR_4->host_data;
 struct brcmstb_gpio_bank *VAR_8 =
  FUNC_0(VAR_7, VAR_6);
 struct platform_device *VAR_9 = VAR_7->pdev;
 int VAR_10;

 if (!VAR_8)
  return -VAR_0;

 FUNC_1(&VAR_9->dev, "Mapping irq %d for gpio line %d (bank %d)\n",
  VAR_5, (int)VAR_6, VAR_8->id);
 VAR_10 = FUNC_3(VAR_5, &VAR_8->gc);
 if (VAR_10 < 0)
  return VAR_10;
 FUNC_4(VAR_5, &VAR_1,
         &VAR_2);
 FUNC_2(VAR_5, &VAR_7->irq_chip, VAR_3);
 FUNC_5(VAR_5);
 return 0;
}
