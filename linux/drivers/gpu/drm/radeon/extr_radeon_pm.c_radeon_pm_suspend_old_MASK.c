
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pm_method; scalar_t__ dynpm_state; int dynpm_idle_work; int mutex; } ;
struct radeon_device {TYPE_1__ pm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_3)
{
 FUNC_1(&VAR_3->pm.mutex);
 if (VAR_3->pm.pm_method == VAR_2) {
  if (VAR_3->pm.dynpm_state == VAR_0)
   VAR_3->pm.dynpm_state = VAR_1;
 }
 FUNC_2(&VAR_3->pm.mutex);

 FUNC_0(&VAR_3->pm.dynpm_idle_work);
}
