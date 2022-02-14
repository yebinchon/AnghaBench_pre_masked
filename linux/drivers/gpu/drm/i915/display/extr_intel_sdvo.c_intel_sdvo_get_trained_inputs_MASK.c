
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_sdvo_get_trained_inputs_response {int input0_trained; int input1_trained; } ;
struct intel_sdvo {int dummy; } ;
typedef int response ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct intel_sdvo*,int ,struct intel_sdvo_get_trained_inputs_response*,int) ;

__attribute__((used)) static bool FUNC_2(struct intel_sdvo *VAR_1, bool *VAR_2, bool *VAR_3)
{
 struct intel_sdvo_get_trained_inputs_response VAR_4;

 FUNC_0(sizeof(VAR_4) != 1);
 if (!FUNC_1(VAR_1, VAR_0,
      &VAR_4, sizeof(VAR_4)))
  return 0;

 *VAR_2 = VAR_4.input0_trained;
 *VAR_3 = VAR_4.input1_trained;
 return 1;
}
