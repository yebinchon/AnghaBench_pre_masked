
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct amdgpu_iv_entry {int ring_id; } ;
struct amdgpu_irq_src {int dummy; } ;
struct TYPE_4__ {TYPE_3__* instance; } ;
struct amdgpu_device {TYPE_1__ sdma; } ;
struct TYPE_5__ {int sched; } ;
struct TYPE_6__ {TYPE_2__ ring; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_0,
           struct amdgpu_irq_src *VAR_1,
           struct amdgpu_iv_entry *VAR_2)
{
 u8 VAR_3, VAR_4;

 FUNC_0("Illegal instruction in SDMA command stream\n");
 VAR_3 = (VAR_2->ring_id & 0x3) >> 0;
 VAR_4 = (VAR_2->ring_id & 0xc) >> 2;

 if (VAR_3 <= 1 && VAR_4 == 0)
  FUNC_1(&VAR_0->sdma.instance[VAR_3].ring.sched);
 return 0;
}
