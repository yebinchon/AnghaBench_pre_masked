
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_encoder {int base; } ;
struct TYPE_2__ {int * hpd_pulse; } ;


 TYPE_1__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct intel_encoder*) ;

__attribute__((used)) static bool FUNC_2(struct intel_encoder *VAR_0)
{
 return FUNC_1(VAR_0) &&
  FUNC_0(&VAR_0->base)->hpd_pulse != ((void*)0);
}
