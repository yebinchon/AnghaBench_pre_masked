
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mem_table; } ;
struct vega20_hwmgr {TYPE_1__ dpm_table; } ;
struct pp_hwmgr {scalar_t__ backend; } ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int ) ;
 int FUNC_1 (struct pp_hwmgr*) ;
 int FUNC_2 (struct pp_hwmgr*,int *) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_1)
{
 struct vega20_hwmgr *VAR_2 = (struct vega20_hwmgr *)(VAR_1->backend);
 int VAR_3 = 0;

 FUNC_0(VAR_1,
   VAR_0, 0);

 VAR_3 = FUNC_2(VAR_1,
   &VAR_2->dpm_table.mem_table);
 if (VAR_3)
  return VAR_3;

 return FUNC_1(VAR_1);
}
