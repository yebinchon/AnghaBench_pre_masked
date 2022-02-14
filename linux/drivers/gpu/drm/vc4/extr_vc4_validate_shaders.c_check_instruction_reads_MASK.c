
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct vc4_validated_shader_info {int uniforms_size; } ;
struct vc4_shader_validation_state {size_t ip; int all_registers_used; scalar_t__ needs_uniform_address_update; int * shader; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static bool
FUNC_2(struct vc4_validated_shader_info *VAR_5,
   struct vc4_shader_validation_state *VAR_6)
{
 uint64_t VAR_7 = VAR_6->shader[VAR_6->ip];
 uint32_t VAR_8 = FUNC_1(VAR_7, VAR_0);
 uint32_t VAR_9 = FUNC_1(VAR_7, VAR_1);
 uint32_t VAR_10 = FUNC_1(VAR_7, VAR_3);

 if (VAR_8 == VAR_2 ||
     (VAR_9 == VAR_2 && VAR_10 != VAR_4)) {




  VAR_5->uniforms_size += 4;

  if (VAR_6->needs_uniform_address_update) {
   FUNC_0("Uniform read with undefined uniform "
      "address\n");
   return 0;
  }
 }

 if ((VAR_8 >= 16 && VAR_8 < 32) ||
     (VAR_9 >= 16 && VAR_9 < 32 && VAR_10 != VAR_4)) {
  VAR_6->all_registers_used = 1;
 }

 return 1;
}
