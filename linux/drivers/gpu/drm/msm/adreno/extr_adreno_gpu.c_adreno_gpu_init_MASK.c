
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct adreno_platform_config* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct msm_gpu_config {char* ioname; int va_start; int va_end; int nr_rings; int member_0; } ;
struct msm_gpu {int dummy; } ;
struct drm_device {int dummy; } ;
struct adreno_platform_config {int rev; } ;
struct adreno_gpu_funcs {int base; } ;
struct adreno_gpu {TYPE_4__* info; struct msm_gpu base; int rev; int revn; int gmem; struct adreno_gpu_funcs const* funcs; } ;
struct TYPE_7__ {int name; int inactive_period; int revn; int gmem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,struct msm_gpu*) ;
 TYPE_4__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct adreno_gpu*) ;
 int FUNC_3 (struct drm_device*,struct platform_device*,struct msm_gpu*,int *,int ,struct msm_gpu_config*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;

int FUNC_7(struct drm_device *VAR_2, struct platform_device *VAR_3,
  struct adreno_gpu *VAR_4,
  const struct adreno_gpu_funcs *VAR_5, int VAR_6)
{
 struct adreno_platform_config *VAR_7 = VAR_3->dev.platform_data;
 struct msm_gpu_config VAR_8 = { 0 };
 struct msm_gpu *VAR_9 = &VAR_4->base;

 VAR_4->funcs = VAR_5;
 VAR_4->info = FUNC_1(VAR_7->rev);
 VAR_4->gmem = VAR_4->info->gmem;
 VAR_4->revn = VAR_4->info->revn;
 VAR_4->rev = VAR_7->rev;

 VAR_8.ioname = "kgsl_3d0_reg_memory";

 VAR_8.va_start = VAR_0;
 VAR_8.va_end = 0xffffffff;

 if (FUNC_2(VAR_4))
  VAR_8.va_end = VAR_0 + 0xfff * VAR_1;

 VAR_8.nr_rings = VAR_6;

 FUNC_0(&VAR_3->dev, VAR_9);

 FUNC_5(&VAR_3->dev,
  VAR_4->info->inactive_period);
 FUNC_6(&VAR_3->dev);
 FUNC_4(&VAR_3->dev);

 return FUNC_3(VAR_2, VAR_3, &VAR_4->base, &VAR_5->base,
   VAR_4->info->name, &VAR_8);
}
