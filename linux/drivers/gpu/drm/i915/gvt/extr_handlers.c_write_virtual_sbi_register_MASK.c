
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int number; TYPE_1__* registers; } ;
struct intel_vgpu_display {TYPE_2__ sbi; } ;
struct intel_vgpu {struct intel_vgpu_display display; } ;
struct TYPE_3__ {unsigned int offset; int value; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(struct intel_vgpu *VAR_1,
  unsigned int VAR_2, u32 VAR_3)
{
 struct intel_vgpu_display *VAR_4 = &VAR_1->display;
 int VAR_5 = VAR_4->sbi.number;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6) {
  if (VAR_4->sbi.registers[VAR_6].offset == VAR_2)
   break;
 }

 if (VAR_6 == VAR_5) {
  if (VAR_5 == VAR_0) {
   FUNC_0("SBI caching meets maximum limits\n");
   return;
  }
  VAR_4->sbi.number++;
 }

 VAR_4->sbi.registers[VAR_6].offset = VAR_2;
 VAR_4->sbi.registers[VAR_6].value = VAR_3;
}
