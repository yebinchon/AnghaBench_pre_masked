
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vc4_shader_validation_state {int needs_uniform_address_update; int branch_targets; int ip; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct vc4_shader_validation_state*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct vc4_shader_validation_state*) ;

__attribute__((used)) static bool
FUNC_4(struct vc4_shader_validation_state *VAR_0)
{
 uint32_t VAR_1 = VAR_0->ip;

 if (!FUNC_2(VAR_1, VAR_0->branch_targets))
  return 1;

 if (FUNC_3(VAR_0)) {
  FUNC_0("Branch target landed during TMU setup\n");
  return 0;
 }
 FUNC_1(VAR_0);
 VAR_0->needs_uniform_address_update = 1;

 return 1;
}
