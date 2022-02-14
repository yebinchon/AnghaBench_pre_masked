
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct arm_smmu_device {TYPE_1__* smrs; TYPE_2__* s2crs; } ;
struct TYPE_4__ {scalar_t__ count; } ;
struct TYPE_3__ {int valid; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct arm_smmu_device *VAR_1, int VAR_2)
{
 if (--VAR_1->s2crs[VAR_2].count)
  return 0;

 VAR_1->s2crs[VAR_2] = VAR_0;
 if (VAR_1->smrs)
  VAR_1->smrs[VAR_2].valid = 0;

 return 1;
}
