
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_hwmgr {TYPE_1__* smumgr_funcs; } ;
struct TYPE_2__ {int (* is_hw_avfs_present ) (struct pp_hwmgr*) ;} ;


 int FUNC_0 (struct pp_hwmgr*) ;

bool FUNC_1(struct pp_hwmgr *VAR_0)
{
 if (VAR_0->smumgr_funcs->is_hw_avfs_present)
  return VAR_0->smumgr_funcs->is_hw_avfs_present(VAR_0);

 return 0;
}
