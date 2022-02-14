
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rv7xx_power_info {int rlp; int rmp; int lhp; int lmp; } ;
struct radeon_ps {int class2; int class; } ;
struct radeon_device {int dummy; } ;
struct evergreen_power_info {TYPE_1__* ats; int smu_uvd_hs; } ;
struct TYPE_2__ {int rlp; int rmp; int lhp; int lmp; } ;


 struct evergreen_power_info* FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct rv7xx_power_info* FUNC_2 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_0,
          struct radeon_ps *VAR_1)
{
 struct rv7xx_power_info *VAR_2 = FUNC_2(VAR_0);
 struct evergreen_power_info *VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = 0;

 if (FUNC_1(VAR_1->class, VAR_1->class2))
  VAR_4 = 1;

 if ((VAR_4 == 1) && !VAR_3->smu_uvd_hs) {
  VAR_2->rlp = 10;
  VAR_2->rmp = 100;
  VAR_2->lhp = 100;
  VAR_2->lmp = 10;
 } else {
  VAR_2->rlp = VAR_3->ats[VAR_4].rlp;
  VAR_2->rmp = VAR_3->ats[VAR_4].rmp;
  VAR_2->lhp = VAR_3->ats[VAR_4].lhp;
  VAR_2->lmp = VAR_3->ats[VAR_4].lmp;
 }

}
