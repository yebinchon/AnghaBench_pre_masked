
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num_pins; int * pin; } ;
struct TYPE_6__ {TYPE_2__ audio; } ;
struct TYPE_4__ {int default_dispclk; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_3__ mode_info; TYPE_1__ clock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*,int ,int ,int ) ;
 int FUNC_2 (struct amdgpu_device*,int ) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*,int *,int) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (struct amdgpu_device*,int) ;

__attribute__((used)) static int FUNC_9(void *VAR_7)
{
 int VAR_8;
 struct amdgpu_device *VAR_9 = (struct amdgpu_device *)VAR_7;

 FUNC_6(VAR_9);


 FUNC_8(VAR_9, 0);

 FUNC_0(VAR_9);
 FUNC_3(VAR_9);
 if ((VAR_9->asic_type == VAR_1) ||
     (VAR_9->asic_type == VAR_2) ||
     (VAR_9->asic_type == VAR_3) ||
     (VAR_9->asic_type == VAR_4)) {
  FUNC_1(VAR_9, VAR_9->clock.default_dispclk,
         VAR_5, VAR_0);
  FUNC_1(VAR_9, 0,
         VAR_6, VAR_0);
 } else {
  FUNC_2(VAR_9, VAR_9->clock.default_dispclk);
 }


 FUNC_5(VAR_9);

 for (VAR_8 = 0; VAR_8 < VAR_9->mode_info.audio.num_pins; VAR_8++) {
  FUNC_4(VAR_9, &VAR_9->mode_info.audio.pin[VAR_8], 0);
 }

 FUNC_7(VAR_9);

 return 0;
}
