
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int platformCaps; } ;
struct pp_hwmgr {TYPE_1__ platform_descriptor; } ;
typedef enum phm_platform_caps { ____Placeholder_phm_platform_caps } phm_platform_caps ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct pp_hwmgr *VAR_0, bool VAR_1,
  enum phm_platform_caps VAR_2)
{
 if (VAR_1)
  FUNC_0(VAR_0->platform_descriptor.platformCaps, VAR_2);
 else
  FUNC_1(VAR_0->platform_descriptor.platformCaps, VAR_2);
}
