
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rv7xx_pl {scalar_t__ vddc; } ;
struct radeon_device {int dummy; } ;
struct TYPE_6__ {struct rv7xx_pl* pl; } ;
struct evergreen_power_info {TYPE_1__ ulv; } ;
struct TYPE_9__ {int ACIndex; int arbValue; } ;
struct TYPE_7__ {int flags; TYPE_4__* levels; } ;
struct TYPE_8__ {TYPE_2__ ULVState; } ;
typedef TYPE_3__ RV770_SMC_STATETABLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct radeon_device*,struct rv7xx_pl*,TYPE_4__*,int ) ;
 struct evergreen_power_info* FUNC_2 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_3(struct radeon_device *VAR_8,
      RV770_SMC_STATETABLE *VAR_9)
{
 int VAR_10 = -VAR_4;
 struct evergreen_power_info *VAR_11 = FUNC_2(VAR_8);
 struct rv7xx_pl *VAR_12 = VAR_11->ulv.pl;

 if (VAR_12->vddc) {
  VAR_10 = FUNC_1(VAR_8,
        VAR_12,
        &VAR_9->ULVState.levels[0],
        VAR_6);
  if (VAR_10 == 0) {
   VAR_9->ULVState.levels[0].arbValue = VAR_5;
   VAR_9->ULVState.levels[0].ACIndex = 1;

   VAR_9->ULVState.levels[1] = VAR_9->ULVState.levels[0];
   VAR_9->ULVState.levels[2] = VAR_9->ULVState.levels[0];

   VAR_9->ULVState.flags |= VAR_7;

   FUNC_0(VAR_2, VAR_0);
   FUNC_0(VAR_3, VAR_1);
  }
 }

 return VAR_10;
}
