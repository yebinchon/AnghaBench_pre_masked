
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int platformCaps; } ;
struct pp_hwmgr {TYPE_1__ platform_descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct pp_hwmgr*) ;
 int FUNC_2 (struct pp_hwmgr*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_2)
{
 if (FUNC_1(VAR_2)) {
  if (FUNC_0(VAR_2->platform_descriptor.platformCaps,
      VAR_0)) {
   return FUNC_2(VAR_2,
     VAR_1, 1);
  } else {
   return FUNC_2(VAR_2,
     VAR_1, 0);
  }
 }

 return 0;
}
