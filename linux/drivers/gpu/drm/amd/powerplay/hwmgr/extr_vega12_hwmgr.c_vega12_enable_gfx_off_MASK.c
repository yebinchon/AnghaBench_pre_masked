
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vega12_hwmgr {scalar_t__ gfxoff_controlled_by_driver; } ;
struct pp_hwmgr {scalar_t__ backend; } ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_1)
{
 struct vega12_hwmgr *VAR_2 =
   (struct vega12_hwmgr *)(VAR_1->backend);
 int VAR_3 = 0;

 if (VAR_2->gfxoff_controlled_by_driver)
  VAR_3 = FUNC_0(VAR_1, VAR_0);

 return VAR_3;
}
