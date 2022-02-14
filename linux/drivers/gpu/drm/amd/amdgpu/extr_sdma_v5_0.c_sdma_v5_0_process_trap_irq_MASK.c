
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_iv_entry {int client_id; int ring_id; } ;
struct amdgpu_irq_src {int dummy; } ;
struct TYPE_3__ {TYPE_2__* instance; } ;
struct amdgpu_device {TYPE_1__ sdma; } ;
struct TYPE_4__ {int ring; } ;


 int FUNC_0 (char*) ;


 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_0,
          struct amdgpu_irq_src *VAR_1,
          struct amdgpu_iv_entry *VAR_2)
{
 FUNC_0("IH: SDMA trap\n");
 switch (VAR_2->client_id) {
 case 129:
  switch (VAR_2->ring_id) {
  case 0:
   FUNC_1(&VAR_0->sdma.instance[0].ring);
   break;
  case 1:

   break;
  case 2:

   break;
  case 3:

   break;
  }
  break;
 case 128:
  switch (VAR_2->ring_id) {
  case 0:
   FUNC_1(&VAR_0->sdma.instance[1].ring);
   break;
  case 1:

   break;
  case 2:

   break;
  case 3:

   break;
  }
  break;
 }
 return 0;
}
