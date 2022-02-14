
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int enabled; int num_pins; int * pin; } ;
struct TYPE_4__ {TYPE_1__ audio; } ;
struct amdgpu_device {TYPE_2__ mode_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,int *,int) ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_1)
{
 int VAR_2;

 if (!VAR_0)
  return;

 if (!VAR_1->mode_info.audio.enabled)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->mode_info.audio.num_pins; VAR_2++)
  FUNC_0(VAR_1, &VAR_1->mode_info.audio.pin[VAR_2], 0);

 VAR_1->mode_info.audio.enabled = 0;
}
