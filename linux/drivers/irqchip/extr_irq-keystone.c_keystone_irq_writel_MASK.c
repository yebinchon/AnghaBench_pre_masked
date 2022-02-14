
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct keystone_irq_device {int dev; int devctrl_offset; int devctrl_regs; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct keystone_irq_device *VAR_0, u32 VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0->devctrl_regs, VAR_0->devctrl_offset, VAR_1);
 if (VAR_2 < 0)
  FUNC_0(VAR_0->dev, "irq write failed ret(%d)\n", VAR_2);
}
