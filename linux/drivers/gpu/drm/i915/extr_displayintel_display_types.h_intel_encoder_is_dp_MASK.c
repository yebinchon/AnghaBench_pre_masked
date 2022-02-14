
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_encoder {int type; int base; } ;
struct TYPE_2__ {int output_reg; } ;





 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline bool FUNC_2(struct intel_encoder *VAR_0)
{
 switch (VAR_0->type) {
 case 129:
 case 128:
  return 1;
 case 130:

  return FUNC_1(FUNC_0(&VAR_0->base)->output_reg);
 default:
  return 0;
 }
}
