
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct spear_adc_state {TYPE_2__* adc_base_spear3xx; TYPE_1__* adc_base_spear6xx; int np; } ;
struct TYPE_4__ {int scan_rate; } ;
struct TYPE_3__ {int scan_rate_hi; int scan_rate_lo; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(struct spear_adc_state *VAR_0, u32 VAR_1)
{
 if (FUNC_3(VAR_0->np, "st,spear600-adc")) {
  FUNC_2(FUNC_1(VAR_1),
        &VAR_0->adc_base_spear6xx->scan_rate_lo);
  FUNC_2(FUNC_0(VAR_1),
        &VAR_0->adc_base_spear6xx->scan_rate_hi);
 } else {
  FUNC_2(VAR_1, &VAR_0->adc_base_spear3xx->scan_rate);
 }
}
