
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u32 ;
struct vc4_validated_shader_info {int uniforms_size; } ;
struct vc4_shader_validation_state {int* shader; size_t ip; int* live_immediates; int needs_uniform_address_update; int needs_uniform_address_for_loop; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;





 int FUNC_2 (int) ;
 int FUNC_3 (struct vc4_validated_shader_info*) ;

__attribute__((used)) static bool
FUNC_4(struct vc4_validated_shader_info *VAR_14,
          struct vc4_shader_validation_state *VAR_15,
          bool VAR_16)
{
 uint64_t VAR_17 = VAR_15->shader[VAR_15->ip];
 u32 VAR_18 = FUNC_1(VAR_17, VAR_0);
 u32 VAR_19 = FUNC_1(VAR_17, VAR_10);
 u32 VAR_20 = FUNC_1(VAR_17, VAR_11);
 u32 VAR_21 = FUNC_2(VAR_17);



 u32 VAR_22 = VAR_14->uniforms_size + 4;
 switch (FUNC_1(VAR_17, VAR_13)) {
 case 129:
 case 128:
 case 132:
 case 131:
 case 130:
  break;
 default:
  FUNC_0("uniforms address change must be "
     "normal math\n");
  return 0;
 }

 if (VAR_16 || FUNC_1(VAR_17, VAR_6) != VAR_1) {
  FUNC_0("Uniform address reset must be an ADD.\n");
  return 0;
 }

 if (FUNC_1(VAR_17, VAR_2) != VAR_3) {
  FUNC_0("Uniform address reset must be unconditional.\n");
  return 0;
 }

 if (FUNC_1(VAR_17, VAR_7) != VAR_8 &&
     !(VAR_17 & VAR_9)) {
  FUNC_0("No packing allowed on uniforms reset\n");
  return 0;
 }

 if (VAR_21 == -1) {
  FUNC_0("First argument of uniform address write must be "
     "an immediate value.\n");
  return 0;
 }

 if (VAR_15->live_immediates[VAR_21] != VAR_22) {
  FUNC_0("Resetting uniforms with offset %db instead of %db\n",
     VAR_15->live_immediates[VAR_21],
     VAR_22);
  return 0;
 }

 if (!(VAR_18 == VAR_4 && VAR_19 == VAR_12) &&
     !(VAR_18 == VAR_5 && VAR_20 == VAR_12)) {
  FUNC_0("Second argument of uniform address write must be "
     "a uniform.\n");
  return 0;
 }

 VAR_15->needs_uniform_address_update = 0;
 VAR_15->needs_uniform_address_for_loop = 0;
 return FUNC_3(VAR_14);
}
