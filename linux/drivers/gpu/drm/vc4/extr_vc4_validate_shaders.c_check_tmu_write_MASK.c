
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct vc4_validated_shader_info {int uniforms_size; } ;
struct vc4_shader_validation_state {size_t ip; int* tmu_write_count; scalar_t__* live_min_clamp_offsets; scalar_t__ needs_uniform_address_update; TYPE_1__* tmu_setup; int * shader; } ;
struct TYPE_2__ {int* p_offset; int is_direct; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct vc4_validated_shader_info*,struct vc4_shader_validation_state*,int) ;

__attribute__((used)) static bool
FUNC_5(struct vc4_validated_shader_info *VAR_13,
  struct vc4_shader_validation_state *VAR_14,
  bool VAR_15)
{
 uint64_t VAR_16 = VAR_14->shader[VAR_14->ip];
 uint32_t VAR_17 = (VAR_15 ?
     FUNC_1(VAR_16, VAR_11) :
     FUNC_1(VAR_16, VAR_10));
 uint32_t VAR_18 = FUNC_1(VAR_16, VAR_5);
 uint32_t VAR_19 = FUNC_1(VAR_16, VAR_6);
 int VAR_20 = VAR_17 > VAR_12;
 bool VAR_21 = FUNC_2(VAR_17);
 bool VAR_22 = VAR_21 && VAR_14->tmu_write_count[VAR_20] == 0;
 uint32_t VAR_23 = FUNC_1(VAR_16, VAR_8);

 if (VAR_22) {
  uint32_t VAR_24 = FUNC_1(VAR_16, VAR_0);
  uint32_t VAR_25, VAR_26;

  if (VAR_23 == VAR_9) {
   FUNC_0("direct TMU read used small immediate\n");
   return 0;
  }




  if (VAR_15 ||
      FUNC_1(VAR_16, VAR_4) != VAR_1) {
   FUNC_0("direct TMU load wasn't an add\n");
   return 0;
  }






  VAR_25 = FUNC_3(VAR_16);
  if (VAR_25 == ~0) {
   FUNC_0("direct TMU load wasn't clamped\n");
   return 0;
  }

  VAR_26 = VAR_14->live_min_clamp_offsets[VAR_25];
  if (VAR_26 == ~0) {
   FUNC_0("direct TMU load wasn't clamped\n");
   return 0;
  }




  VAR_14->tmu_setup[VAR_20].p_offset[1] =
   VAR_26;

  if (!(VAR_24 == VAR_2 && VAR_18 == VAR_7) &&
      !(VAR_24 == VAR_3 && VAR_19 == VAR_7)) {
   FUNC_0("direct TMU load didn't add to a uniform\n");
   return 0;
  }

  VAR_14->tmu_setup[VAR_20].is_direct = 1;
 } else {
  if (VAR_18 == VAR_7 || (VAR_23 != VAR_9 &&
           VAR_19 == VAR_7)) {
   FUNC_0("uniform read in the same instruction as "
      "texture setup.\n");
   return 0;
  }
 }

 if (VAR_14->tmu_write_count[VAR_20] >= 4) {
  FUNC_0("TMU%d got too many parameters before dispatch\n",
     VAR_20);
  return 0;
 }
 VAR_14->tmu_setup[VAR_20].p_offset[VAR_14->tmu_write_count[VAR_20]] =
  VAR_13->uniforms_size;
 VAR_14->tmu_write_count[VAR_20]++;



 if (!VAR_22) {
  if (VAR_14->needs_uniform_address_update) {
   FUNC_0("Texturing with undefined uniform address\n");
   return 0;
  }

  VAR_13->uniforms_size += 4;
 }

 if (VAR_21) {
  if (!FUNC_4(VAR_13,
        VAR_14, VAR_20)) {
   return 0;
  }

  VAR_14->tmu_write_count[VAR_20] = 0;
 }

 return 1;
}
