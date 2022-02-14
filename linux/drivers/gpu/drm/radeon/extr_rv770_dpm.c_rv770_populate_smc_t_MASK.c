
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_9__ {scalar_t__ sclk; } ;
struct TYPE_8__ {scalar_t__ sclk; } ;
struct TYPE_7__ {scalar_t__ sclk; } ;
struct rv7xx_ps {TYPE_3__ high; TYPE_2__ medium; TYPE_1__ low; } ;
struct rv7xx_power_info {int lmp; int rlp; int lhp; int rmp; int bsp; int pbsp; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
struct TYPE_11__ {TYPE_4__* levels; } ;
struct TYPE_10__ {void* aT; } ;
typedef TYPE_5__ RV770_SMC_SWSTATE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_2 (int) ;
 struct rv7xx_power_info* FUNC_3 (struct radeon_device*) ;
 struct rv7xx_ps* FUNC_4 (struct radeon_ps*) ;

int FUNC_5(struct radeon_device *VAR_2,
    struct radeon_ps *VAR_3,
    RV770_SMC_SWSTATE *VAR_4)
{
 struct rv7xx_ps *VAR_5 = FUNC_4(VAR_3);
 struct rv7xx_power_info *VAR_6 = FUNC_3(VAR_2);
 int VAR_7;
 int VAR_8;
 int VAR_9;
 u8 VAR_10[VAR_1];
 u8 VAR_11[VAR_1];
 u32 VAR_12;

 VAR_10[0] = 0;
 VAR_11[2] = 100;

 VAR_8 = (int)VAR_5->medium.sclk * VAR_6->lmp +
  (int)VAR_5->low.sclk * (VAR_0 - VAR_6->rlp);
 VAR_9 = (int)VAR_5->low.sclk * (100 - (int)VAR_6->rlp) +
  (int)VAR_5->medium.sclk * VAR_6->lmp;

 VAR_10[1] = (u8)(VAR_6->lmp - (int)VAR_6->lmp * VAR_8 / VAR_9);
 VAR_11[0] = (u8)(VAR_6->rlp + (100 - (int)VAR_6->rlp) * VAR_8 / VAR_9);

 VAR_8 = (int)VAR_5->high.sclk * VAR_6->lhp + (int)VAR_5->medium.sclk *
  (VAR_0 - VAR_6->rmp);
 VAR_9 = (int)VAR_5->medium.sclk * (100 - (int)VAR_6->rmp) +
  (int)VAR_5->high.sclk * VAR_6->lhp;

 VAR_10[2] = (u8)(VAR_6->lhp - (int)VAR_6->lhp * VAR_8 / VAR_9);
 VAR_11[1] = (u8)(VAR_6->rmp + (100 - (int)VAR_6->rmp) * VAR_8 / VAR_9);

 for (VAR_7 = 0; VAR_7 < (VAR_1 - 1); VAR_7++) {
  VAR_12 = FUNC_1(VAR_11[VAR_7] * VAR_6->bsp / 200) | FUNC_0(VAR_10[VAR_7] * VAR_6->bsp / 200);
  VAR_4->levels[VAR_7].aT = FUNC_2(VAR_12);
 }

 VAR_12 = FUNC_1(VAR_11[VAR_1 - 1] * VAR_6->pbsp / 200) |
  FUNC_0(VAR_10[VAR_1 - 1] * VAR_6->pbsp / 200);

 VAR_4->levels[VAR_1 - 1].aT =
  FUNC_2(VAR_12);

 return 0;
}
