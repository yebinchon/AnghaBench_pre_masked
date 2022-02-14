
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct titsc {int coordinate_readouts; int input; int mfd_tscadc; int irq; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,struct titsc*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct titsc*) ;
 struct titsc* FUNC_6 (struct platform_device*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct titsc *VAR_1 = FUNC_6(VAR_0);
 u32 VAR_2;

 FUNC_1(&VAR_0->dev);
 FUNC_2(&VAR_0->dev, 0);
 FUNC_3(VAR_1->irq, VAR_1);


 VAR_2 = 2 * VAR_1->coordinate_readouts + 2;
 VAR_2 = (1 << VAR_2) - 1;
 FUNC_0(VAR_1->mfd_tscadc, VAR_2);

 FUNC_4(VAR_1->input);

 FUNC_5(VAR_1);
 return 0;
}
