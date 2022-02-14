
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct smu8_hwmgr {int dpm_flags; } ;
struct TYPE_2__ {int platformCaps; } ;
struct pp_hwmgr {TYPE_1__ platform_descriptor; struct smu8_hwmgr* backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct pp_hwmgr*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_5, bool VAR_6)
{
 struct smu8_hwmgr *VAR_7 = VAR_5->backend;
 uint32_t VAR_8 = 0;

 if (VAR_6 && FUNC_0(
    VAR_5->platform_descriptor.platformCaps,
    VAR_1)) {
  VAR_7->dpm_flags |= VAR_0;
  VAR_8 |= VAR_4;
  FUNC_1(VAR_5,
       VAR_3, VAR_8);
 } else {
  VAR_8 |= VAR_4;
  VAR_7->dpm_flags &= ~VAR_0;
  FUNC_1(VAR_5,
      VAR_2, VAR_8);
 }

 return 0;
}
