
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int platformCaps; } ;
struct pp_hwmgr {TYPE_1__ platform_descriptor; } ;





 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct pp_hwmgr*,int) ;
 int FUNC_2 (struct pp_hwmgr*,int) ;
 int FUNC_3 (struct pp_hwmgr*) ;
 int FUNC_4 (struct pp_hwmgr*) ;

__attribute__((used)) static void FUNC_5(struct pp_hwmgr *VAR_1, uint32_t VAR_2)
{
 switch (VAR_2) {
 case 128:
  FUNC_1(VAR_1, 100);
  break;
 case 129:
  if (FUNC_0(VAR_1->platform_descriptor.platformCaps,
   VAR_0))
   FUNC_4(VAR_1);
  break;
 case 130:
  if (!FUNC_2(VAR_1, VAR_2))
   FUNC_3(VAR_1);
  break;
 default:
  break;
 }
}
