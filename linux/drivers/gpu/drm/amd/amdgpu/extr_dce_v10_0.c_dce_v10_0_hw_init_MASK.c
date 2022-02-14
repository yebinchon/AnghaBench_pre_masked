
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int num_pins; int * pin; } ;
struct TYPE_5__ {TYPE_3__ audio; } ;
struct TYPE_4__ {int default_dispclk; } ;
struct amdgpu_device {TYPE_2__ mode_info; TYPE_1__ clock; } ;


 int FUNC_0 (struct amdgpu_device*,int ) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*,int *,int) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*,int) ;

__attribute__((used)) static int FUNC_7(void *VAR_0)
{
 int VAR_1;
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_0;

 FUNC_4(VAR_2);


 FUNC_6(VAR_2, 0);

 FUNC_1(VAR_2);
 FUNC_0(VAR_2, VAR_2->clock.default_dispclk);


 FUNC_3(VAR_2);

 for (VAR_1 = 0; VAR_1 < VAR_2->mode_info.audio.num_pins; VAR_1++) {
  FUNC_2(VAR_2, &VAR_2->mode_info.audio.pin[VAR_1], 0);
 }

 FUNC_5(VAR_2);

 return 0;
}
