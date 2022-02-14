
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct vc4_validated_shader_info {int dummy; } ;
struct vc4_shader_validation_state {size_t ip; int * shader; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct vc4_validated_shader_info*,struct vc4_shader_validation_state*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct vc4_validated_shader_info*,struct vc4_shader_validation_state*) ;

__attribute__((used)) static bool
FUNC_5(struct vc4_validated_shader_info *VAR_2,
    struct vc4_shader_validation_state *VAR_3)
{
 uint64_t VAR_4 = VAR_3->shader[VAR_3->ip];
 uint32_t VAR_5 = FUNC_1(VAR_4, VAR_0);
 uint32_t VAR_6 = FUNC_1(VAR_4, VAR_1);
 bool VAR_7;

 if (FUNC_3(VAR_5) && FUNC_3(VAR_6)) {
  FUNC_0("ADD and MUL both set up textures\n");
  return 0;
 }

 VAR_7 = (FUNC_2(VAR_2, VAR_3, 0) &&
       FUNC_2(VAR_2, VAR_3, 1));

 FUNC_4(VAR_2, VAR_3);

 return VAR_7;
}
