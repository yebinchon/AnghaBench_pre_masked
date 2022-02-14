
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int u32 ;
struct vc4_validated_shader_info {int dummy; } ;
struct vc4_shader_validation_state {int* shader; size_t ip; int all_registers_used; scalar_t__* live_immediates; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct vc4_validated_shader_info*,struct vc4_shader_validation_state*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct vc4_validated_shader_info*,struct vc4_shader_validation_state*,int) ;
 int FUNC_5 (scalar_t__,int) ;

__attribute__((used)) static bool
FUNC_6(struct vc4_validated_shader_info *VAR_11,
  struct vc4_shader_validation_state *VAR_12,
  bool VAR_13)
{
 uint64_t VAR_14 = VAR_12->shader[VAR_12->ip];
 uint32_t VAR_15 = (VAR_13 ?
     FUNC_1(VAR_14, VAR_9) :
     FUNC_1(VAR_14, VAR_8));
 uint32_t VAR_16 = FUNC_1(VAR_14, VAR_6);
 bool VAR_17 = VAR_14 & VAR_10;
 bool VAR_18 = VAR_13 ^ VAR_17;
 u32 VAR_19 = FUNC_5(VAR_15, VAR_18);

 if (VAR_19 != -1) {
  uint32_t VAR_20 = FUNC_1(VAR_14, VAR_0);
  uint32_t VAR_21 = FUNC_1(VAR_14, VAR_2);

  if (VAR_16 == VAR_7 &&
      FUNC_1(VAR_14, VAR_4) == VAR_5 &&
      ((VAR_13 && VAR_21 == VAR_1) ||
       (!VAR_13 && VAR_20 == VAR_1))) {
   VAR_12->live_immediates[VAR_19] =
    FUNC_1(VAR_14, VAR_3);
  } else {
   VAR_12->live_immediates[VAR_19] = ~0;
  }

  if (FUNC_3(VAR_19))
   VAR_12->all_registers_used = 1;
 }

 switch (VAR_15) {
 case 131:
  if (VAR_18) {
   FUNC_0("relative uniforms address change "
      "unsupported\n");
   return 0;
  }

  return FUNC_4(VAR_11,
            VAR_12,
            VAR_13);

 case 143:
 case 144:
 case 141:



  return 1;

 case 138:
 case 137:
 case 139:
 case 140:
 case 134:
 case 133:
 case 135:
 case 136:
  return FUNC_2(VAR_11, VAR_12,
           VAR_13);

 case 147:
 case 132:
 case 145:
 case 146:



  FUNC_0("Unsupported waddr %d\n", VAR_15);
  return 0;

 case 128:
  FUNC_0("General VPM DMA unsupported\n");
  return 0;

 case 130:
 case 129:




  return 1;

 case 142:
  return 1;
 }

 return 1;
}
