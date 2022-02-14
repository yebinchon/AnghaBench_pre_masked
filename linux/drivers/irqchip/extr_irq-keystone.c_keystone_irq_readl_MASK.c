
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct keystone_irq_device {int dev; int devctrl_offset; int devctrl_regs; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static inline u32 FUNC_2(struct keystone_irq_device *VAR_0)
{
 int VAR_1;
 u32 VAR_2 = 0;

 VAR_1 = FUNC_1(VAR_0->devctrl_regs, VAR_0->devctrl_offset, &VAR_2);
 if (VAR_1 < 0)
  FUNC_0(VAR_0->dev, "irq read failed ret(%d)\n", VAR_1);
 return VAR_2;
}
