
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct smu7_power_state {int dummy; } ;
struct smu7_hwmgr {scalar_t__ force_pcie_gen; int pspp_notify_required; } ;
struct pp_hwmgr {int adev; scalar_t__ backend; } ;
struct phm_set_power_state_input {int pcurrent_state; int pnew_state; } ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 struct smu7_power_state* FUNC_1 (int ) ;
 int FUNC_2 (struct pp_hwmgr*) ;
 int FUNC_3 (struct pp_hwmgr*,struct smu7_power_state const*) ;

__attribute__((used)) static int FUNC_4(
  struct pp_hwmgr *VAR_3, const void *VAR_4)
{
 const struct phm_set_power_state_input *VAR_5 =
   (const struct phm_set_power_state_input *)VAR_4;
 struct smu7_hwmgr *VAR_6 = (struct smu7_hwmgr *)(VAR_3->backend);
 const struct smu7_power_state *VAR_7 =
   FUNC_1(VAR_5->pnew_state);
 const struct smu7_power_state *VAR_8 =
   FUNC_1(VAR_5->pcurrent_state);

 uint16_t VAR_9 = FUNC_3(VAR_3, VAR_7);
 uint16_t VAR_10;

 if (VAR_6->force_pcie_gen == VAR_2)
  VAR_10 = FUNC_3(VAR_3, VAR_8);
 else
  VAR_10 = VAR_6->force_pcie_gen;

 VAR_6->force_pcie_gen = VAR_2;
 VAR_6->pspp_notify_required = 0;

 if (VAR_9 > VAR_10) {
  switch (VAR_9) {
  default:
   VAR_6->force_pcie_gen = FUNC_2(VAR_3);
   break;
  }
 } else {
  if (VAR_9 < VAR_10)
   VAR_6->pspp_notify_required = 1;
 }

 return 0;
}
