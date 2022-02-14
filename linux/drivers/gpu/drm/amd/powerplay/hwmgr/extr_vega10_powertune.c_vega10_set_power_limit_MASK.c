
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ enable_pkg_pwr_tracking_feature; } ;
struct vega10_hwmgr {TYPE_1__ registry_data; } ;
struct pp_hwmgr {struct vega10_hwmgr* backend; } ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int ) ;

int FUNC_1(struct pp_hwmgr *VAR_1, uint32_t VAR_2)
{
 struct vega10_hwmgr *VAR_3 = VAR_1->backend;

 if (VAR_3->registry_data.enable_pkg_pwr_tracking_feature)
  FUNC_0(VAR_1,
    VAR_0, VAR_2);

 return 0;
}
