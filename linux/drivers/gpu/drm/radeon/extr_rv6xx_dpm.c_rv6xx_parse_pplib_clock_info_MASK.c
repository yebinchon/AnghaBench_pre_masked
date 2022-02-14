
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ucEngineClockHigh; int ucMemoryClockHigh; int ulFlags; int usVDDC; int usMemoryClockLow; int usEngineClockLow; } ;
union pplib_clock_info {TYPE_1__ r600; } ;
typedef int u32 ;
typedef void* u16 ;
struct rv6xx_pl {int mclk; int sclk; int vddc; int flags; } ;
struct rv6xx_ps {struct rv6xx_pl high; struct rv6xx_pl medium; struct rv6xx_pl low; } ;
struct radeon_ps {int class; } ;
struct TYPE_4__ {int default_mclk; int default_sclk; } ;
struct radeon_device {scalar_t__ family; TYPE_2__ clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct radeon_device*,int ,int ,void**) ;
 int FUNC_3 (struct radeon_device*,void**,void**,void**) ;
 struct rv6xx_ps* FUNC_4 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_5(struct radeon_device *VAR_4,
      struct radeon_ps *VAR_5, int VAR_6,
      union pplib_clock_info *VAR_7)
{
 struct rv6xx_ps *VAR_8 = FUNC_4(VAR_5);
 u32 VAR_9, VAR_10;
 u16 VAR_11;
 struct rv6xx_pl *VAR_12;

 switch (VAR_6) {
 case 0:
  VAR_12 = &VAR_8->low;
  break;
 case 1:
  VAR_12 = &VAR_8->medium;
  break;
 case 2:
 default:
  VAR_12 = &VAR_8->high;
  break;
 }

 VAR_9 = FUNC_0(VAR_7->r600.usEngineClockLow);
 VAR_9 |= VAR_7->r600.ucEngineClockHigh << 16;
 VAR_10 = FUNC_0(VAR_7->r600.usMemoryClockLow);
 VAR_10 |= VAR_7->r600.ucMemoryClockHigh << 16;

 VAR_12->mclk = VAR_10;
 VAR_12->sclk = VAR_9;
 VAR_12->vddc = FUNC_0(VAR_7->r600.usVDDC);
 VAR_12->flags = FUNC_1(VAR_7->r600.ulFlags);


 if (VAR_12->vddc == 0xff01) {
  if (FUNC_2(VAR_4, 0, 0, &VAR_11) == 0)
   VAR_12->vddc = VAR_11;
 }


 if (VAR_12->flags & VAR_1) {
  if ((VAR_4->family == VAR_2) || (VAR_4->family == VAR_3)) {
   if (VAR_12->vddc < 1100)
    VAR_12->flags &= ~VAR_1;
  }
 }


 if (VAR_5->class & VAR_0) {
  u16 VAR_13, VAR_14, VAR_15;
  FUNC_3(VAR_4, &VAR_13, &VAR_14, &VAR_15);
  VAR_12->mclk = VAR_4->clock.default_mclk;
  VAR_12->sclk = VAR_4->clock.default_sclk;
  VAR_12->vddc = VAR_13;
 }
}
