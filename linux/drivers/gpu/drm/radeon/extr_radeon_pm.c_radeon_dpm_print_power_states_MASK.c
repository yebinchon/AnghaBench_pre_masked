
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_ps; int * ps; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct radeon_device*,int *) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->pm.dpm.num_ps; VAR_1++) {
  FUNC_0("== power state %d ==\n", VAR_1);
  FUNC_1(VAR_0, &VAR_0->pm.dpm.ps[VAR_1]);
 }
}
