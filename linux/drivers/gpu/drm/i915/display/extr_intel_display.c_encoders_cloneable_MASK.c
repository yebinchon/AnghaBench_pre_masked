
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_encoder {int cloneable; int type; } ;



__attribute__((used)) static bool FUNC_0(const struct intel_encoder *VAR_0,
          const struct intel_encoder *VAR_1)
{

 return VAR_0 == VAR_1 || (VAR_0->cloneable & (1 << VAR_1->type) &&
     VAR_1->cloneable & (1 << VAR_0->type));
}
