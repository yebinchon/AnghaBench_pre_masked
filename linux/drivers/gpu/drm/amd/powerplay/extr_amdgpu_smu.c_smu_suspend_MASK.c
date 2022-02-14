
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct smu_context {int watermarks_bitmap; } ;
struct TYPE_5__ {TYPE_1__* funcs; } ;
struct TYPE_6__ {TYPE_2__ rlc; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_3__ gfx; scalar_t__ in_gpu_reset; struct smu_context smu; } ;
struct TYPE_4__ {int (* stop ) (struct amdgpu_device*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct smu_context*,int ) ;
 int FUNC_2 (struct smu_context*,int ,int) ;
 int FUNC_3 (struct smu_context*,int) ;
 int FUNC_4 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_5(void *VAR_3)
{
 int VAR_4;
 struct amdgpu_device *VAR_5 = (struct amdgpu_device *)VAR_3;
 struct smu_context *VAR_6 = &VAR_5->smu;
 bool VAR_7 = FUNC_1(VAR_6, VAR_1);

 VAR_4 = FUNC_3(VAR_6, 0);
 if (VAR_4)
  return VAR_4;

 if (VAR_5->in_gpu_reset && VAR_7) {
  VAR_4 = FUNC_2(VAR_6, VAR_1, 1);
  if (VAR_4) {
   FUNC_0("set BACO feature enabled failed, return %d\n", VAR_4);
   return VAR_4;
  }
 }

 VAR_6->watermarks_bitmap &= ~(VAR_2);

 if (VAR_5->asic_type >= VAR_0 &&
     VAR_5->gfx.rlc.funcs->stop)
  VAR_5->gfx.rlc.funcs->stop(VAR_5);

 return 0;
}
