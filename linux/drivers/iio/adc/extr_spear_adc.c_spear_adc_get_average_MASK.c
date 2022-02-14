
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct spear_adc_state {TYPE_3__* adc_base_spear3xx; TYPE_2__* adc_base_spear6xx; int np; } ;
struct TYPE_6__ {int average; } ;
struct TYPE_4__ {int msb; } ;
struct TYPE_5__ {TYPE_1__ average; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,char*) ;

__attribute__((used)) static u32 FUNC_2(struct spear_adc_state *VAR_1)
{
 if (FUNC_1(VAR_1->np, "st,spear600-adc")) {
  return FUNC_0(&VAR_1->adc_base_spear6xx->average.msb) &
   VAR_0;
 } else {
  return FUNC_0(&VAR_1->adc_base_spear3xx->average) &
   VAR_0;
 }
}
