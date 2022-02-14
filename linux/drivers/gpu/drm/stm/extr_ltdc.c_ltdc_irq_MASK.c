
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltdc_device {int irq_status; int regs; } ;
struct drm_device {struct ltdc_device* dev_private; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct drm_device *VAR_5 = VAR_4;
 struct ltdc_device *VAR_6 = VAR_5->dev_private;


 VAR_6->irq_status = FUNC_0(VAR_6->regs, VAR_2);
 FUNC_1(VAR_6->regs, VAR_1, VAR_6->irq_status);

 return VAR_0;
}
