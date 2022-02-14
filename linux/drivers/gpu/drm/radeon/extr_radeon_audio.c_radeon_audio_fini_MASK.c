
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enabled; int num_pins; int * pin; } ;
struct radeon_device {TYPE_1__ audio; } ;


 int FUNC_0 (struct radeon_device*,int *,int ) ;

void FUNC_1(struct radeon_device *VAR_0)
{
 int VAR_1;

 if (!VAR_0->audio.enabled)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->audio.num_pins; VAR_1++)
  FUNC_0(VAR_0, &VAR_0->audio.pin[VAR_1], 0);

 VAR_0->audio.enabled = 0;
}
