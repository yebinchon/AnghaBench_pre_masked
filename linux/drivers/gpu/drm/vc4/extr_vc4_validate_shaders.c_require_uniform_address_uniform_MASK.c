
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vc4_validated_shader_info {int num_uniform_addr_offsets; int uniforms_size; int* uniform_addr_offsets; } ;


 int VAR_0 ;
 int* FUNC_0 (int*,int,int ) ;

__attribute__((used)) static bool FUNC_1(struct vc4_validated_shader_info *VAR_1)
{
 uint32_t VAR_2 = VAR_1->num_uniform_addr_offsets;
 uint32_t VAR_3 = VAR_1->uniforms_size / 4;

 VAR_1->uniform_addr_offsets =
  FUNC_0(VAR_1->uniform_addr_offsets,
    (VAR_2 + 1) *
    sizeof(*VAR_1->uniform_addr_offsets),
    VAR_0);
 if (!VAR_1->uniform_addr_offsets)
  return 0;

 VAR_1->uniform_addr_offsets[VAR_2] = VAR_3;
 VAR_1->num_uniform_addr_offsets++;

 return 1;
}
