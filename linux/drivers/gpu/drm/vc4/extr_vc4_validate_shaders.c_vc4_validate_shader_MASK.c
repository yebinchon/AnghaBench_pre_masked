
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int validation_state ;
typedef int uint64_t ;
typedef size_t uint32_t ;
struct vc4_validated_shader_info {int is_threaded; int num_texture_samples; struct vc4_validated_shader_info* texture_samples; struct vc4_validated_shader_info* uniform_addr_offsets; scalar_t__ uniforms_size; scalar_t__ uniforms_src_size; } ;
struct vc4_shader_validation_state {int max_ip; size_t ip; int* live_max_clamp_regs; struct vc4_validated_shader_info* branch_targets; scalar_t__ needs_uniform_address_for_loop; scalar_t__ all_registers_used; int * live_immediates; int * live_min_clamp_offsets; int * shader; } ;
struct TYPE_2__ {int size; } ;
struct drm_gem_cma_object {TYPE_1__ base; int * vaddr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,struct vc4_validated_shader_info*,struct vc4_shader_validation_state*,size_t) ;
 int FUNC_4 (struct vc4_validated_shader_info*,struct vc4_shader_validation_state*) ;
 int FUNC_5 (struct vc4_validated_shader_info*,struct vc4_shader_validation_state*) ;
 void* FUNC_6 (int,int,int ) ;
 int FUNC_7 (struct vc4_validated_shader_info*) ;
 int FUNC_8 (struct vc4_shader_validation_state*,int ,int) ;
 int FUNC_9 (struct vc4_validated_shader_info*) ;
 int FUNC_10 (struct vc4_shader_validation_state*) ;
 int FUNC_11 (struct vc4_shader_validation_state*) ;
 int FUNC_12 (struct vc4_shader_validation_state*) ;

struct vc4_validated_shader_info *
FUNC_13(struct drm_gem_cma_object *VAR_3)
{
 bool VAR_4 = 0;
 int VAR_5 = 0;
 uint32_t VAR_6 = -3;
 uint32_t VAR_7;
 struct vc4_validated_shader_info *VAR_8 = ((void*)0);
 struct vc4_shader_validation_state VAR_9;

 FUNC_8(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.shader = VAR_3->vaddr;
 VAR_9.max_ip = VAR_3->base.size / sizeof(uint64_t);

 FUNC_10(&VAR_9);

 VAR_9.branch_targets =
  FUNC_6(FUNC_0(VAR_9.max_ip),
   sizeof(unsigned long), VAR_0);
 if (!VAR_9.branch_targets)
  goto fail;

 VAR_8 = FUNC_6(1, sizeof(*VAR_8), VAR_0);
 if (!VAR_8)
  goto fail;

 if (!FUNC_12(&VAR_9))
  goto fail;

 for (VAR_7 = 0; VAR_7 < VAR_9.max_ip; VAR_7++) {
  uint64_t VAR_10 = VAR_9.shader[VAR_7];
  uint32_t VAR_11 = FUNC_2(VAR_10, VAR_2);

  VAR_9.ip = VAR_7;

  if (!FUNC_11(&VAR_9))
   goto fail;

  if (VAR_7 == VAR_6 + 3) {

   int VAR_12;

   for (VAR_12 = 64; VAR_12 < VAR_1; VAR_12++) {
    VAR_9.live_min_clamp_offsets[VAR_12] = ~0;
    VAR_9.live_max_clamp_regs[VAR_12] = 0;
    VAR_9.live_immediates[VAR_12] = ~0;
   }
  }

  switch (VAR_11) {
  case 133:
  case 128:
  case 131:
  case 138:
  case 135:
  case 134:
  case 132:
  case 130:
  case 129:
  case 137:
   if (!FUNC_5(VAR_8,
            &VAR_9)) {
    FUNC_1("Bad write at ip %d\n", VAR_7);
    goto fail;
   }

   if (!FUNC_4(VAR_8,
           &VAR_9))
    goto fail;

   if (VAR_11 == 132) {
    VAR_4 = 1;
    VAR_5 = VAR_7;
   }

   if (VAR_11 == 129 ||
       VAR_11 == 137) {
    VAR_8->is_threaded = 1;

    if (VAR_7 < VAR_6 + 3) {
     FUNC_1("Thread switch too soon after "
        "last switch at ip %d\n", VAR_7);
     goto fail;
    }
    VAR_6 = VAR_7;
   }

   break;

  case 136:
   if (!FUNC_5(VAR_8,
            &VAR_9)) {
    FUNC_1("Bad LOAD_IMM write at ip %d\n", VAR_7);
    goto fail;
   }
   break;

  case 139:
   if (!FUNC_3(VAR_10, VAR_8,
       &VAR_9, VAR_7))
    goto fail;

   if (VAR_7 < VAR_6 + 3) {
    FUNC_1("Branch in thread switch at ip %d",
       VAR_7);
    goto fail;
   }

   break;
  default:
   FUNC_1("Unsupported QPU signal %d at "
      "instruction %d\n", VAR_11, VAR_7);
   goto fail;
  }




  if (VAR_4 && VAR_7 == VAR_5 + 2)
   break;
 }

 if (VAR_7 == VAR_9.max_ip) {
  FUNC_1("shader failed to terminate before "
     "shader BO end at %zd\n",
     VAR_3->base.size);
  goto fail;
 }


 if (VAR_8->is_threaded &&
     VAR_9.all_registers_used) {
  FUNC_1("Shader uses threading, but uses the upper "
     "half of the registers, too\n");
  goto fail;
 }
 if (VAR_9.needs_uniform_address_for_loop) {
  if (!FUNC_9(VAR_8))
   goto fail;
  VAR_8->uniforms_size += 4;
 }





 VAR_8->uniforms_src_size =
  (VAR_8->uniforms_size +
   4 * VAR_8->num_texture_samples);

 FUNC_7(VAR_9.branch_targets);

 return VAR_8;

fail:
 FUNC_7(VAR_9.branch_targets);
 if (VAR_8) {
  FUNC_7(VAR_8->uniform_addr_offsets);
  FUNC_7(VAR_8->texture_samples);
  FUNC_7(VAR_8);
 }
 return ((void*)0);
}
