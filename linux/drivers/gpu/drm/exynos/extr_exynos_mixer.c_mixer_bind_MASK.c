
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mixer_context {int crtc; struct exynos_drm_plane* planes; int flags; } ;
struct exynos_drm_plane {int base; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 unsigned int VAR_4 ;
 struct mixer_context* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,struct mixer_context*) ;
 int FUNC_4 (struct drm_device*,int *,int ,int *,struct mixer_context*) ;
 int FUNC_5 (struct drm_device*,struct exynos_drm_plane*,unsigned int,int *) ;
 int VAR_5 ;
 int FUNC_6 (struct mixer_context*) ;
 int FUNC_7 (struct mixer_context*,struct drm_device*) ;
 int * VAR_6 ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_7, struct device *VAR_8, void *VAR_9)
{
 struct mixer_context *VAR_10 = FUNC_2(VAR_7);
 struct drm_device *VAR_11 = VAR_9;
 struct exynos_drm_plane *VAR_12;
 unsigned int VAR_13;
 int VAR_14;

 VAR_14 = FUNC_7(VAR_10, VAR_11);
 if (VAR_14)
  return VAR_14;

 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
  if (VAR_13 == VAR_4 && !FUNC_8(VAR_3,
           &VAR_10->flags))
   continue;

  VAR_14 = FUNC_5(VAR_11, &VAR_10->planes[VAR_13], VAR_13,
     &VAR_6[VAR_13]);
  if (VAR_14)
   return VAR_14;
 }

 VAR_12 = &VAR_10->planes[VAR_0];
 VAR_10->crtc = FUNC_4(VAR_11, &VAR_12->base,
   VAR_1, &VAR_5, VAR_10);
 if (FUNC_0(VAR_10->crtc)) {
  FUNC_6(VAR_10);
  VAR_14 = FUNC_1(VAR_10->crtc);
  goto free_ctx;
 }

 return 0;

free_ctx:
 FUNC_3(VAR_7, VAR_10);
 return VAR_14;
}
