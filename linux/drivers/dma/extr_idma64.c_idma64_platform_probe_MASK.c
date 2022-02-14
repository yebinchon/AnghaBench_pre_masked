
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {struct device* parent; } ;
struct platform_device {struct device dev; } ;
struct idma64_chip {scalar_t__ irq; struct device* sysdev; struct device* dev; int regs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,struct resource*) ;
 struct idma64_chip* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,int ) ;
 int FUNC_6 (struct idma64_chip*) ;
 scalar_t__ FUNC_7 (struct platform_device*,int ) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct idma64_chip*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_3)
{
 struct idma64_chip *VAR_4;
 struct device *VAR_5 = &VAR_3->dev;
 struct device *VAR_6 = VAR_5->parent;
 struct resource *VAR_7;
 int VAR_8;

 VAR_4 = FUNC_4(VAR_5, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->irq = FUNC_7(VAR_3, 0);
 if (VAR_4->irq < 0)
  return VAR_4->irq;

 VAR_7 = FUNC_8(VAR_3, VAR_2, 0);
 VAR_4->regs = FUNC_3(VAR_5, VAR_7);
 if (FUNC_1(VAR_4->regs))
  return FUNC_2(VAR_4->regs);

 VAR_8 = FUNC_5(VAR_6, FUNC_0(64));
 if (VAR_8)
  return VAR_8;

 VAR_4->dev = VAR_5;
 VAR_4->sysdev = VAR_6;

 VAR_8 = FUNC_6(VAR_4);
 if (VAR_8)
  return VAR_8;

 FUNC_9(VAR_3, VAR_4);
 return 0;
}
