
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct smu7_hwmgr {scalar_t__ voltage_control; scalar_t__ vddci_control; scalar_t__ mvdd_control; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
struct TYPE_3__ {int VRConfig; } ;
typedef TYPE_1__ SMU7_Discrete_DpmTable ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_9, SMU7_Discrete_DpmTable *VAR_10)
{
 struct smu7_hwmgr *VAR_11 = (struct smu7_hwmgr *)(VAR_9->backend);
 uint16_t VAR_12;

 VAR_12 = VAR_7;
 VAR_10->VRConfig |= (VAR_12<<VAR_4);

 if (VAR_1 == VAR_11->voltage_control) {
  VAR_12 = VAR_8;
  VAR_10->VRConfig |= VAR_12;
 } else {
  FUNC_0("VDDCshould be on SVI2 controller!");
 }

 if (VAR_1 == VAR_11->vddci_control) {
  VAR_12 = VAR_8;
  VAR_10->VRConfig |= (VAR_12<<VAR_3);
 } else if (VAR_0 == VAR_11->vddci_control) {
  VAR_12 = VAR_5;
  VAR_10->VRConfig |= (VAR_12<<VAR_3);
 }

 if (VAR_0 == VAR_11->mvdd_control) {
  VAR_12 = VAR_6;
  VAR_10->VRConfig |= (VAR_12<<VAR_2);
 }

 return 0;
}
