
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vc4_validated_shader_info {int num_texture_samples; struct vc4_texture_sample_info* texture_samples; } ;
struct vc4_texture_sample_info {int dummy; } ;
struct vc4_shader_validation_state {TYPE_1__* tmu_setup; } ;
struct TYPE_2__ {int * p_offset; } ;


 int VAR_0 ;
 struct vc4_texture_sample_info* FUNC_0 (struct vc4_texture_sample_info*,int,int ) ;
 int FUNC_1 (struct vc4_texture_sample_info*,TYPE_1__*,int) ;

__attribute__((used)) static bool
FUNC_2(struct vc4_validated_shader_info *VAR_1,
        struct vc4_shader_validation_state *VAR_2,
        int VAR_3)
{
 uint32_t VAR_4 = VAR_1->num_texture_samples;
 int VAR_5;
 struct vc4_texture_sample_info *VAR_6;

 VAR_6 = FUNC_0(VAR_1->texture_samples,
    (VAR_4 + 1) * sizeof(*VAR_6),
    VAR_0);
 if (!VAR_6)
  return 0;

 FUNC_1(&VAR_6[VAR_4],
        &VAR_2->tmu_setup[VAR_3],
        sizeof(*VAR_6));

 VAR_1->num_texture_samples = VAR_4 + 1;
 VAR_1->texture_samples = VAR_6;

 for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
  VAR_2->tmu_setup[VAR_3].p_offset[VAR_5] = ~0;

 return 1;
}
