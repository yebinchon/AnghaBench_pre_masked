
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint32_t ;
struct amdgpu_iv_entry {int ring_id; int * src_data; } ;
struct amdgpu_irq_src {int dummy; } ;
struct TYPE_4__ {void** wptr_cpu; } ;
struct TYPE_5__ {void** wptr_cpu; } ;
struct TYPE_6__ {int ih2_work; TYPE_1__ ih2; int ih1_work; TYPE_2__ ih1; } ;
struct amdgpu_device {TYPE_3__ irq; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_0,
         struct amdgpu_irq_src *VAR_1,
         struct amdgpu_iv_entry *VAR_2)
{
 uint32_t VAR_3 = FUNC_0(VAR_2->src_data[0]);

 switch (VAR_2->ring_id) {
 case 1:
  *VAR_0->irq.ih1.wptr_cpu = VAR_3;
  FUNC_1(&VAR_0->irq.ih1_work);
  break;
 case 2:
  *VAR_0->irq.ih2.wptr_cpu = VAR_3;
  FUNC_1(&VAR_0->irq.ih2_work);
  break;
 default: break;
 }
 return 0;
}
