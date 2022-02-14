
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int dummy; } ;
struct drm_exynos_ioctl_ipp_get_res {scalar_t__ count_ipps; } ;
struct drm_device {int dummy; } ;



__attribute__((used)) static inline int FUNC_0(struct drm_device *VAR_0,
  void *VAR_1, struct drm_file *VAR_2)
{
 struct drm_exynos_ioctl_ipp_get_res *VAR_3 = VAR_1;

 VAR_3->count_ipps = 0;
 return 0;
}
