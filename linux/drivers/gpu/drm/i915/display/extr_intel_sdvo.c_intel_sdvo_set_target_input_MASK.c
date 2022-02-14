
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int targets ;
struct intel_sdvo_set_target_input_args {int member_0; } ;
struct intel_sdvo {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct intel_sdvo*,int ,struct intel_sdvo_set_target_input_args*,int) ;

__attribute__((used)) static bool FUNC_1(struct intel_sdvo *VAR_1)
{
 struct intel_sdvo_set_target_input_args VAR_2 = {0};
 return FUNC_0(VAR_1,
        VAR_0,
        &VAR_2, sizeof(VAR_2));
}
