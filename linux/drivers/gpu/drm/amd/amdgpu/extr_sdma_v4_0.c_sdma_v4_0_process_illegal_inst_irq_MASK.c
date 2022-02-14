
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct amdgpu_iv_entry {int ring_id; int client_id; } ;
struct amdgpu_irq_src {int dummy; } ;
struct TYPE_6__ {TYPE_2__* instance; } ;
struct amdgpu_device {TYPE_3__ sdma; } ;
struct TYPE_4__ {int sched; } ;
struct TYPE_5__ {TYPE_1__ ring; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_0,
           struct amdgpu_irq_src *VAR_1,
           struct amdgpu_iv_entry *VAR_2)
{
 int VAR_3;

 FUNC_0("Illegal instruction in SDMA command stream\n");

 VAR_3 = FUNC_2(VAR_2->client_id);
 if (VAR_3 < 0)
  return 0;

 switch (VAR_2->ring_id) {
 case 0:
  FUNC_1(&VAR_0->sdma.instance[VAR_3].ring.sched);
  break;
 }
 return 0;
}
