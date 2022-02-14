
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int number; TYPE_2__* registers; } ;
struct intel_vgpu_display {TYPE_1__ sbi; } ;
struct intel_vgpu {struct intel_vgpu_display display; } ;
struct TYPE_4__ {unsigned int offset; int value; } ;



__attribute__((used)) static u32 FUNC_0(struct intel_vgpu *VAR_0,
  unsigned int VAR_1)
{
 struct intel_vgpu_display *VAR_2 = &VAR_0->display;
 int VAR_3 = VAR_2->sbi.number;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
  if (VAR_2->sbi.registers[VAR_4].offset == VAR_1)
   break;

 if (VAR_4 == VAR_3)
  return 0;

 return VAR_2->sbi.registers[VAR_4].value;
}
