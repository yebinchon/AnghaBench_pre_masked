
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc4_shader_validation_state {int* live_max_clamp_regs; int * live_immediates; int * live_min_clamp_offsets; TYPE_1__* tmu_setup; } ;
struct TYPE_2__ {int * p_offset; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct vc4_shader_validation_state *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
  VAR_1->tmu_setup[VAR_2 / 4].p_offset[VAR_2 % 4] = ~0;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_1->live_min_clamp_offsets[VAR_2] = ~0;
  VAR_1->live_max_clamp_regs[VAR_2] = 0;
  VAR_1->live_immediates[VAR_2] = ~0;
 }
}
