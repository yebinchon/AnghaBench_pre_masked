
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct amdgpu_iv_entry {int ring_id; } ;
struct amdgpu_irq_src {int dummy; } ;
struct TYPE_4__ {TYPE_1__* instance; } ;
struct amdgpu_device {TYPE_2__ sdma; } ;
struct TYPE_3__ {int ring; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_0,
          struct amdgpu_irq_src *VAR_1,
          struct amdgpu_iv_entry *VAR_2)
{
 u8 VAR_3, VAR_4;

 VAR_3 = (VAR_2->ring_id & 0x3) >> 0;
 VAR_4 = (VAR_2->ring_id & 0xc) >> 2;
 FUNC_0("IH: SDMA trap\n");
 switch (VAR_3) {
 case 0:
  switch (VAR_4) {
  case 0:
   FUNC_1(&VAR_0->sdma.instance[0].ring);
   break;
  case 1:

   break;
  case 2:

   break;
  }
  break;
 case 1:
  switch (VAR_4) {
  case 0:
   FUNC_1(&VAR_0->sdma.instance[1].ring);
   break;
  case 1:

   break;
  case 2:

   break;
  }
  break;
 }
 return 0;
}
