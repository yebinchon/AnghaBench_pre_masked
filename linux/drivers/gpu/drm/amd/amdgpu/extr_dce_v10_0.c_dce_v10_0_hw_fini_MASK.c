
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_pins; int * pin; } ;
struct TYPE_4__ {TYPE_1__ audio; } ;
struct amdgpu_device {TYPE_2__ mode_info; } ;


 int FUNC_0 (struct amdgpu_device*,int *,int) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0)
{
 int VAR_1;
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_0;

 FUNC_1(VAR_2);

 for (VAR_1 = 0; VAR_1 < VAR_2->mode_info.audio.num_pins; VAR_1++) {
  FUNC_0(VAR_2, &VAR_2->mode_info.audio.pin[VAR_1], 0);
 }

 FUNC_2(VAR_2);

 return 0;
}
