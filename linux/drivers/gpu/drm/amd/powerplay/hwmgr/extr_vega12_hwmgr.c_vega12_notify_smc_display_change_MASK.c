
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vega12_hwmgr {TYPE_1__* smu_features; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
struct TYPE_2__ {scalar_t__ enabled; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_2,
  bool VAR_3)
{
 struct vega12_hwmgr *VAR_4 = (struct vega12_hwmgr *)(VAR_2->backend);

 if (VAR_4->smu_features[VAR_0].enabled)
  return FUNC_0(VAR_2,
   VAR_1,
   VAR_3 ? 1 : 0);

 return 0;
}
