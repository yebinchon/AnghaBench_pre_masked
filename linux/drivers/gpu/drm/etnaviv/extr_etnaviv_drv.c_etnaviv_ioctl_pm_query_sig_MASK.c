
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etnaviv_gpu {int dummy; } ;
struct etnaviv_drm_private {struct etnaviv_gpu** gpu; } ;
struct drm_file {int dummy; } ;
struct drm_etnaviv_pm_signal {size_t pipe; } ;
struct drm_device {struct etnaviv_drm_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct etnaviv_gpu*,struct drm_etnaviv_pm_signal*) ;

__attribute__((used)) static int FUNC_1(struct drm_device *VAR_3, void *VAR_4,
 struct drm_file *VAR_5)
{
 struct etnaviv_drm_private *VAR_6 = VAR_3->dev_private;
 struct drm_etnaviv_pm_signal *VAR_7 = VAR_4;
 struct etnaviv_gpu *VAR_8;

 if (VAR_7->pipe >= VAR_2)
  return -VAR_0;

 VAR_8 = VAR_6->gpu[VAR_7->pipe];
 if (!VAR_8)
  return -VAR_1;

 return FUNC_0(VAR_8, VAR_7);
}
