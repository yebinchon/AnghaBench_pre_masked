
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct mt7620_gsw {int irq; int * dev; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct resource*) ;
 struct mt7620_gsw* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct platform_device*,int ) ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (struct platform_device*,struct mt7620_gsw*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_3)
{
 struct resource *VAR_4 = FUNC_5(VAR_3, VAR_2, 0);
 struct mt7620_gsw *VAR_5;

 VAR_5 = FUNC_3(&VAR_3->dev, sizeof(struct mt7620_gsw), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->base = FUNC_2(&VAR_3->dev, VAR_4);
 if (FUNC_0(VAR_5->base))
  return FUNC_1(VAR_5->base);

 VAR_5->dev = &VAR_3->dev;
 VAR_5->irq = FUNC_4(VAR_3, 0);

 FUNC_6(VAR_3, VAR_5);

 return 0;
}
