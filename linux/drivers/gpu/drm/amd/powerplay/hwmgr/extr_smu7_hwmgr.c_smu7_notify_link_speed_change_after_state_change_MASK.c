
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct smu7_power_state {int dummy; } ;
struct smu7_hwmgr {scalar_t__ pspp_notify_required; } ;
struct pp_hwmgr {int adev; scalar_t__ backend; } ;
struct phm_set_power_state_input {int pnew_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int) ;
 struct smu7_power_state* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct pp_hwmgr*) ;
 scalar_t__ FUNC_4 (struct pp_hwmgr*,struct smu7_power_state const*) ;

__attribute__((used)) static int FUNC_5(
  struct pp_hwmgr *VAR_5, const void *VAR_6)
{
 const struct phm_set_power_state_input *VAR_7 =
   (const struct phm_set_power_state_input *)VAR_6;
 struct smu7_hwmgr *VAR_8 = (struct smu7_hwmgr *)(VAR_5->backend);
 const struct smu7_power_state *VAR_9 =
   FUNC_1(VAR_7->pnew_state);
 uint16_t VAR_10 = FUNC_4(VAR_5, VAR_9);
 uint8_t VAR_11;

 if (VAR_8->pspp_notify_required) {
  if (VAR_10 == VAR_4)
   VAR_11 = VAR_2;
  else if (VAR_10 == VAR_3)
   VAR_11 = VAR_1;
  else
   VAR_11 = VAR_0;

  if (VAR_11 == VAR_0 &&
    FUNC_3(VAR_5) > 0)
   return 0;
 }

 return 0;
}
