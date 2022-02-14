
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_shader_validation_state {scalar_t__* tmu_write_count; } ;



__attribute__((used)) static bool
FUNC_0(struct vc4_shader_validation_state *VAR_0)
{
 return (VAR_0->tmu_write_count[0] != 0 ||
  VAR_0->tmu_write_count[1] != 0);
}
