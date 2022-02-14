
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct exynos_drm_ipp_formats {unsigned int type; scalar_t__ fourcc; scalar_t__ modifier; } ;
struct exynos_drm_ipp {int num_formats; struct exynos_drm_ipp_formats const* formats; } ;



__attribute__((used)) static inline const struct exynos_drm_ipp_formats *FUNC_0(
    struct exynos_drm_ipp *VAR_0, uint32_t VAR_1,
    uint64_t VAR_2, unsigned int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->num_formats; VAR_4++) {
  if ((VAR_0->formats[VAR_4].type & VAR_3) &&
      VAR_0->formats[VAR_4].fourcc == VAR_1 &&
      VAR_0->formats[VAR_4].modifier == VAR_2)
   return &VAR_0->formats[VAR_4];
 }
 return ((void*)0);
}
