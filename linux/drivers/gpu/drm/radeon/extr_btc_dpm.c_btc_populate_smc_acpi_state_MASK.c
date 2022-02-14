
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct radeon_device {int dummy; } ;
struct TYPE_7__ {TYPE_1__* levels; } ;
struct TYPE_8__ {TYPE_2__ ACPIState; } ;
struct TYPE_6__ {scalar_t__ ACIndex; } ;
typedef TYPE_3__ RV770_SMC_STATETABLE ;


 int FUNC_0 (struct radeon_device*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_1(struct radeon_device *VAR_0,
           RV770_SMC_STATETABLE *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (VAR_2 == 0) {
  VAR_1->ACPIState.levels[0].ACIndex = 0;
  VAR_1->ACPIState.levels[1].ACIndex = 0;
  VAR_1->ACPIState.levels[2].ACIndex = 0;
 }

 return VAR_2;
}
