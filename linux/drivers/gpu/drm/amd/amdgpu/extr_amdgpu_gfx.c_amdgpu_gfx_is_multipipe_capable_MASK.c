
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_mec; } ;
struct TYPE_4__ {TYPE_1__ mec; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_2__ gfx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_1(struct amdgpu_device *VAR_2)
{
 if (VAR_1 != -1) {
  FUNC_0("amdgpu: forcing compute pipe policy %d\n",
    VAR_1);
  return VAR_1 == 1;
 }



 if (VAR_2->asic_type == VAR_0)
  return 0;

 return VAR_2->gfx.mec.num_mec > 1;
}
