
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int platformCaps; } ;
struct pp_hwmgr {int smu_lock; TYPE_1__ platform_descriptor; int pm_en; } ;
struct amd_pp_simple_clock_info {int level; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct pp_hwmgr*,struct amd_pp_simple_clock_info*) ;

__attribute__((used)) static int FUNC_4(void *VAR_3,
  struct amd_pp_simple_clock_info *VAR_4)
{
 struct pp_hwmgr *VAR_5 = VAR_3;
 int VAR_6 = 0;

 if (!VAR_5 || !VAR_5->pm_en ||!VAR_4)
  return -VAR_0;

 VAR_4->level = VAR_2;

 FUNC_0(&VAR_5->smu_lock);

 if (FUNC_2(VAR_5->platform_descriptor.platformCaps, VAR_1))
  VAR_6 = FUNC_3(VAR_5, VAR_4);

 FUNC_1(&VAR_5->smu_lock);
 return VAR_6;
}
