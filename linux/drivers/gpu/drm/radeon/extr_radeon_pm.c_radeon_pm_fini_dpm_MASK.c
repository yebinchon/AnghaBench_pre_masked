
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_power_states; int power_state; int mutex; } ;
struct radeon_device {TYPE_1__ pm; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_7(struct radeon_device *VAR_4)
{
 if (VAR_4->pm.num_power_states > 1) {
  FUNC_2(&VAR_4->pm.mutex);
  FUNC_4(VAR_4);
  FUNC_3(&VAR_4->pm.mutex);

  FUNC_0(VAR_4->dev, &VAR_1);
  FUNC_0(VAR_4->dev, &VAR_0);

  FUNC_0(VAR_4->dev, &VAR_3);
  FUNC_0(VAR_4->dev, &VAR_2);
 }
 FUNC_5(VAR_4);

 FUNC_6(VAR_4);
 FUNC_1(VAR_4->pm.power_state);
}
