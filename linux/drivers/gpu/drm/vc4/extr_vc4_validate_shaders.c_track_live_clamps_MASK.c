
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef size_t uint32_t ;
struct vc4_validated_shader_info {int uniforms_size; } ;
struct vc4_shader_validation_state {int* shader; size_t ip; int* live_max_clamp_regs; int * live_min_clamp_offsets; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t FUNC_0 (int,int ) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 size_t FUNC_1 (int) ;
 size_t FUNC_2 (size_t,int) ;

__attribute__((used)) static void
FUNC_3(struct vc4_validated_shader_info *VAR_17,
    struct vc4_shader_validation_state *VAR_18)
{
 uint64_t VAR_19 = VAR_18->shader[VAR_18->ip];
 uint32_t VAR_20 = FUNC_0(VAR_19, VAR_8);
 uint32_t VAR_21 = FUNC_0(VAR_19, VAR_14);
 uint32_t VAR_22 = FUNC_0(VAR_19, VAR_15);
 uint32_t VAR_23 = FUNC_0(VAR_19, VAR_4);
 uint32_t VAR_24 = FUNC_0(VAR_19, VAR_0);
 uint32_t VAR_25 = FUNC_0(VAR_19, VAR_1);
 uint32_t VAR_26 = FUNC_0(VAR_19, VAR_9);
 uint32_t VAR_27 = FUNC_0(VAR_19, VAR_10);
 uint32_t VAR_28 = FUNC_0(VAR_19, VAR_12);
 bool VAR_29 = VAR_19 & VAR_16;
 uint32_t VAR_30, VAR_31, VAR_32;
 bool VAR_33;




 VAR_30 = FUNC_1(VAR_19);
 VAR_33 = (VAR_30 != ~0 &&
     VAR_18->live_max_clamp_regs[VAR_30]);


 VAR_31 = FUNC_2(VAR_21, VAR_29);
 VAR_32 = FUNC_2(VAR_22, !VAR_29);
 if (VAR_32 != ~0) {
  VAR_18->live_max_clamp_regs[VAR_32] = 0;
  VAR_18->live_min_clamp_offsets[VAR_32] = ~0;
 }
 if (VAR_31 != ~0) {
  VAR_18->live_max_clamp_regs[VAR_31] = 0;
  VAR_18->live_min_clamp_offsets[VAR_31] = ~0;
 } else {



  return;
 }



 if (VAR_23 != VAR_5)
  return;

 if (VAR_20 == VAR_2) {



  if (VAR_28 != VAR_13 || VAR_27 != 0 ||
      (VAR_24 != VAR_7 && VAR_25 != VAR_7)) {
   return;
  }

  VAR_18->live_max_clamp_regs[VAR_31] = 1;
 } else if (VAR_20 == VAR_3) {



  if (!VAR_33)
   return;

  if (!(VAR_25 == VAR_6 && VAR_26 == VAR_11) &&
      !(VAR_25 == VAR_7 && VAR_27 == VAR_11 &&
        VAR_28 != VAR_13)) {
   return;
  }

  VAR_18->live_min_clamp_offsets[VAR_31] =
   VAR_17->uniforms_size;
 }
}
