
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_iv_entry {int src_id; int* src_data; } ;
struct amdgpu_irq_src {int dummy; } ;
struct amdgpu_device {int ddev; } ;
struct TYPE_2__ {int vblank; int vline; int reg; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct amdgpu_device*,unsigned int) ;
 int FUNC_3 (struct amdgpu_device*,struct amdgpu_irq_src*,unsigned int) ;
 int FUNC_4 (struct amdgpu_device*,unsigned int) ;
 int FUNC_5 (struct amdgpu_device*,unsigned int) ;
 int FUNC_6 (int ,unsigned int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_7(struct amdgpu_device *VAR_1,
    struct amdgpu_irq_src *VAR_2,
    struct amdgpu_iv_entry *VAR_3)
{
 unsigned VAR_4 = VAR_3->src_id - 1;
 uint32_t VAR_5 = FUNC_1(VAR_0[VAR_4].reg);
 unsigned int VAR_6 = FUNC_2(VAR_1,
            VAR_4);

 switch (VAR_3->src_data[0]) {
 case 0:
  if (VAR_5 & VAR_0[VAR_4].vblank)
   FUNC_4(VAR_1, VAR_4);
  else
   FUNC_0("IH: IH event w/o asserted irq bit?\n");

  if (FUNC_3(VAR_1, VAR_2, VAR_6)) {
   FUNC_6(VAR_1->ddev, VAR_4);
  }
  FUNC_0("IH: D%d vblank\n", VAR_4 + 1);

  break;
 case 1:
  if (VAR_5 & VAR_0[VAR_4].vline)
   FUNC_5(VAR_1, VAR_4);
  else
   FUNC_0("IH: IH event w/o asserted irq bit?\n");

  FUNC_0("IH: D%d vline\n", VAR_4 + 1);

  break;
 default:
  FUNC_0("Unhandled interrupt: %d %d\n", VAR_3->src_id, VAR_3->src_data[0]);
  break;
 }

 return 0;
}
