
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pp_hwmgr {int smu_lock; int pm_en; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, uint32_t VAR_2)
{
 struct pp_hwmgr *VAR_3 = VAR_1;
 int VAR_4 = 0;

 if (!VAR_3 || !VAR_3->pm_en)
  return -VAR_0;

 FUNC_0(&VAR_3->smu_lock);
 VAR_4 = FUNC_2(VAR_3, VAR_2);
 FUNC_1(&VAR_3->smu_lock);

 return VAR_4;
}
