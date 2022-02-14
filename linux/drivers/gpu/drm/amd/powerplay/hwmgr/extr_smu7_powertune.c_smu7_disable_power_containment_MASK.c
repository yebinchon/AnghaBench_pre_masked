
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct smu7_hwmgr {int power_containment_features; } ;
struct pp_hwmgr {scalar_t__ backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,char*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct pp_hwmgr*,int ) ;

int FUNC_3(struct pp_hwmgr *VAR_7)
{
 struct smu7_hwmgr *VAR_8 = (struct smu7_hwmgr *)(VAR_7->backend);
 int VAR_9 = 0;

 if (FUNC_1(VAR_0) &&
     VAR_8->power_containment_features) {
  int VAR_10;

  if (VAR_8->power_containment_features &
    VAR_3) {
   VAR_10 = FUNC_2(VAR_7,
     (uint16_t)(VAR_6));
   FUNC_0((VAR_10 == 0),
     "Failed to disable TDCLimit in SMC.",
     VAR_9 = VAR_10);
  }

  if (VAR_8->power_containment_features &
    VAR_1) {
   VAR_10 = FUNC_2(VAR_7,
     (uint16_t)(VAR_4));
   FUNC_0((VAR_10 == 0),
     "Failed to disable DTE in SMC.",
     VAR_9 = VAR_10);
  }

  if (VAR_8->power_containment_features &
    VAR_2) {
   VAR_10 = FUNC_2(VAR_7,
     (uint16_t)(VAR_5));
   FUNC_0((VAR_10 == 0),
     "Failed to disable PkgPwrTracking in SMC.",
     VAR_9 = VAR_10);
  }
  VAR_8->power_containment_features = 0;
 }

 return VAR_9;
}
