
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct vc4_shader_validation_state {int max_ip; int* shader; int branch_targets; } ;
typedef int int32_t ;
typedef int inst ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static bool
FUNC_4(struct vc4_shader_validation_state *VAR_6)
{
 uint32_t VAR_7 = 0;
 int VAR_8;
 int VAR_9 = -2;

 for (VAR_8 = 0; VAR_8 < VAR_6->max_ip; VAR_8++) {
  uint64_t VAR_10 = VAR_6->shader[VAR_8];
  int32_t VAR_11 = FUNC_1(VAR_10, VAR_2);
  uint32_t VAR_12 = FUNC_1(VAR_10, VAR_3);
  uint32_t VAR_13 = VAR_8 + 4;
  uint32_t VAR_14;

  if (VAR_12 == VAR_5) {






   VAR_6->max_ip = VAR_8 + 3;
   continue;
  }

  if (VAR_12 != VAR_4)
   continue;

  if (VAR_8 - VAR_9 < 4) {
   FUNC_0("Branch at %d during delay slots\n", VAR_8);
   return 0;
  }
  VAR_9 = VAR_8;

  if (VAR_10 & VAR_0) {
   FUNC_0("branching from register relative "
      "not supported\n");
   return 0;
  }

  if (!(VAR_10 & VAR_1)) {
   FUNC_0("relative branching required\n");
   return 0;
  }






  if (VAR_11 % sizeof(VAR_10) != 0) {
   FUNC_0("branch target not aligned\n");
   return 0;
  }

  VAR_14 = VAR_13 + (VAR_11 >> 3);
  if (VAR_14 >= VAR_6->max_ip) {
   FUNC_0("Branch at %d outside of shader (ip %d/%d)\n",
      VAR_8, VAR_14,
      VAR_6->max_ip);
   return 0;
  }
  FUNC_3(VAR_14, VAR_6->branch_targets);




  if (VAR_13 >= VAR_6->max_ip) {
   FUNC_0("Branch at %d continues past shader end "
      "(%d/%d)\n",
      VAR_8, VAR_13, VAR_6->max_ip);
   return 0;
  }
  FUNC_3(VAR_13, VAR_6->branch_targets);
  VAR_7 = FUNC_2(VAR_7, VAR_13);
 }

 if (VAR_7 > VAR_6->max_ip - 3) {
  FUNC_0("Branch landed after QPU_SIG_PROG_END");
  return 0;
 }

 return 1;
}
