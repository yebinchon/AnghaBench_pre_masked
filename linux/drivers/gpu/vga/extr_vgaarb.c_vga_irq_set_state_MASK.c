
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vga_device {int cookie; int (* irq_set_state ) (int ,int) ;} ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct vga_device *VAR_0, bool VAR_1)
{
 if (VAR_0->irq_set_state)
  VAR_0->irq_set_state(VAR_0->cookie, VAR_1);
}
