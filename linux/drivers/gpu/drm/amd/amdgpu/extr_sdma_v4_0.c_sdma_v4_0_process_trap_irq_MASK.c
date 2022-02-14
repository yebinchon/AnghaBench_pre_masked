
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct amdgpu_iv_entry {int ring_id; int client_id; } ;
struct amdgpu_irq_src {int dummy; } ;
struct TYPE_3__ {TYPE_2__* instance; } ;
struct amdgpu_device {TYPE_1__ sdma; int asic_type; } ;
struct TYPE_4__ {int page; int ring; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_1,
          struct amdgpu_irq_src *VAR_2,
          struct amdgpu_iv_entry *VAR_3)
{
 uint32_t VAR_4;

 FUNC_0("IH: SDMA trap\n");
 VAR_4 = FUNC_2(VAR_3->client_id);
 switch (VAR_3->ring_id) {
 case 0:
  FUNC_1(&VAR_1->sdma.instance[VAR_4].ring);
  break;
 case 1:
  if (VAR_1->asic_type == VAR_0)
   FUNC_1(&VAR_1->sdma.instance[VAR_4].page);
  break;
 case 2:

  break;
 case 3:
  if (VAR_1->asic_type != VAR_0)
   FUNC_1(&VAR_1->sdma.instance[VAR_4].page);
  break;
 }
 return 0;
}
