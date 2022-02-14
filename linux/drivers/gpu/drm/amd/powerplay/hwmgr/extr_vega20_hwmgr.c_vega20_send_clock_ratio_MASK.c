
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fclk_gfxclk_ratio; } ;
struct vega20_hwmgr {TYPE_1__ registry_data; } ;
struct pp_hwmgr {scalar_t__ backend; } ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_1)
{
 struct vega20_hwmgr *VAR_2 =
   (struct vega20_hwmgr *)(VAR_1->backend);

 return FUNC_0(VAR_1,
   VAR_0,
   VAR_2->registry_data.fclk_gfxclk_ratio);
}
