
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct vc4_validated_shader_info {int dummy; } ;
struct vc4_shader_validation_state {int needs_uniform_address_for_loop; int ip; } ;
typedef void* int32_t ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 void* FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool
FUNC_2(uint64_t VAR_4,
      struct vc4_validated_shader_info *VAR_5,
      struct vc4_shader_validation_state *VAR_6,
      int VAR_7)
{
 int32_t VAR_8 = FUNC_1(VAR_4, VAR_0);
 uint32_t VAR_9 = FUNC_1(VAR_4, VAR_1);
 uint32_t VAR_10 = FUNC_1(VAR_4, VAR_2);

 if ((int)VAR_8 < 0)
  VAR_6->needs_uniform_address_for_loop = 1;




 if (VAR_9 != VAR_3 || VAR_10 != VAR_3) {
  FUNC_0("branch instruction at %d wrote a register.\n",
     VAR_6->ip);
  return 0;
 }

 return 1;
}
