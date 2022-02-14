
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
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,int ) ;
 unsigned int FUNC_3 (struct amdgpu_device*,unsigned int) ;
 int FUNC_4 (struct amdgpu_device*,struct amdgpu_irq_src*,unsigned int) ;
 scalar_t__* VAR_2 ;
 int FUNC_5 (int ,unsigned int) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_6(struct amdgpu_device *VAR_6,
        struct amdgpu_irq_src *VAR_7,
        struct amdgpu_iv_entry *VAR_8)
{
 unsigned VAR_9 = VAR_8->src_id - 1;
 uint32_t VAR_10 = FUNC_1(VAR_3[VAR_9].reg);
 unsigned int VAR_11 = FUNC_3(VAR_6,
            VAR_9);

 switch (VAR_8->src_data[0]) {
 case 0:
  if (VAR_10 & VAR_3[VAR_9].vblank)
   FUNC_2(VAR_4 + VAR_2[VAR_9], VAR_0);
  else
   FUNC_0("IH: IH event w/o asserted irq bit?\n");

  if (FUNC_4(VAR_6, VAR_7, VAR_11)) {
   FUNC_5(VAR_6->ddev, VAR_9);
  }
  FUNC_0("IH: D%d vblank\n", VAR_9 + 1);
  break;
 case 1:
  if (VAR_10 & VAR_3[VAR_9].vline)
   FUNC_2(VAR_5 + VAR_2[VAR_9], VAR_1);
  else
   FUNC_0("IH: IH event w/o asserted irq bit?\n");

  FUNC_0("IH: D%d vline\n", VAR_9 + 1);
  break;
 default:
  FUNC_0("Unhandled interrupt: %d %d\n", VAR_8->src_id, VAR_8->src_data[0]);
  break;
 }

 return 0;
}
