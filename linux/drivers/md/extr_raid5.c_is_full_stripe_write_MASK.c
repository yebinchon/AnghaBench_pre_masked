
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe_head {scalar_t__ overwrite_disks; scalar_t__ disks; TYPE_1__* raid_conf; } ;
struct TYPE_2__ {scalar_t__ max_degraded; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(struct stripe_head *VAR_0)
{
 FUNC_0(VAR_0->overwrite_disks > (VAR_0->disks - VAR_0->raid_conf->max_degraded));
 return VAR_0->overwrite_disks == (VAR_0->disks - VAR_0->raid_conf->max_degraded);
}
