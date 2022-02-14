
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_irq_src {TYPE_1__* funcs; } ;
struct TYPE_4__ {int lock; } ;
struct amdgpu_device {TYPE_2__ irq; } ;
typedef enum amdgpu_interrupt_state { ____Placeholder_amdgpu_interrupt_state } amdgpu_interrupt_state ;
struct TYPE_3__ {int (* set ) (struct amdgpu_device*,struct amdgpu_irq_src*,unsigned int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct amdgpu_device*,struct amdgpu_irq_src*,unsigned int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct amdgpu_device*,struct amdgpu_irq_src*,unsigned int,int) ;

int FUNC_4(struct amdgpu_device *VAR_2,
        struct amdgpu_irq_src *VAR_3, unsigned VAR_4)
{
 unsigned long VAR_5;
 enum amdgpu_interrupt_state VAR_6;
 int VAR_7;

 FUNC_1(&VAR_2->irq.lock, VAR_5);



 if (FUNC_0(VAR_2, VAR_3, VAR_4))
  VAR_6 = VAR_1;
 else
  VAR_6 = VAR_0;

 VAR_7 = VAR_3->funcs->set(VAR_2, VAR_3, VAR_4, VAR_6);
 FUNC_2(&VAR_2->irq.lock, VAR_5);
 return VAR_7;
}
