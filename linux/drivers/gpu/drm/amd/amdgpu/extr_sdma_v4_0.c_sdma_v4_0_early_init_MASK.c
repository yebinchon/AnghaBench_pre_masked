
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_instances; int has_page_queue; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_1__ sdma; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_8(void *VAR_4)
{
 struct amdgpu_device *VAR_5 = (struct amdgpu_device *)VAR_4;
 int VAR_6;

 if (VAR_5->asic_type == VAR_1 || VAR_5->asic_type == VAR_2)
  VAR_5->sdma.num_instances = 1;
 else if (VAR_5->asic_type == VAR_0)
  VAR_5->sdma.num_instances = 8;
 else
  VAR_5->sdma.num_instances = 2;

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6) {
  FUNC_0("Failed to load sdma firmware!\n");
  return VAR_6;
 }


 if ((VAR_5->asic_type == VAR_3) && FUNC_1((VAR_5)))
  VAR_5->sdma.has_page_queue = 0;
 else if (FUNC_2(VAR_5))
  VAR_5->sdma.has_page_queue = 1;

 FUNC_6(VAR_5);
 FUNC_4(VAR_5);
 FUNC_7(VAR_5);
 FUNC_5(VAR_5);

 return 0;
}
