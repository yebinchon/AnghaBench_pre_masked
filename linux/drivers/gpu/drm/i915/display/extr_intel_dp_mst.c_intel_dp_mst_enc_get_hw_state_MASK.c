
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_encoder {int base; } ;
struct intel_dp_mst_encoder {int pipe; scalar_t__ connector; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 struct intel_dp_mst_encoder* FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct intel_encoder *VAR_0,
          enum pipe *VAR_1)
{
 struct intel_dp_mst_encoder *VAR_2 = FUNC_0(&VAR_0->base);
 *VAR_1 = VAR_2->pipe;
 if (VAR_2->connector)
  return 1;
 return 0;
}
