
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_exynos_ipp_task_rect {int w; int h; } ;
struct drm_exynos_ipp_limit_val {int max; int min; } ;
struct drm_exynos_ipp_limit {int type; struct drm_exynos_ipp_limit_val h; struct drm_exynos_ipp_limit_val v; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int ,int ) ;

__attribute__((used)) static int FUNC_1(
    struct drm_exynos_ipp_task_rect *VAR_3,
    struct drm_exynos_ipp_task_rect *VAR_4,
    const struct drm_exynos_ipp_limit *VAR_5,
    unsigned int VAR_6, bool VAR_7)
{
 const struct drm_exynos_ipp_limit_val *VAR_8, *VAR_9;
 int VAR_10, VAR_11;

 for (; VAR_6; VAR_5++, VAR_6--)
  if ((VAR_5->type & VAR_0) ==
      VAR_1)
   break;
 if (!VAR_6)
  return 0;

 VAR_8 = (!VAR_7) ? &VAR_5->h : &VAR_5->v;
 VAR_9 = (!VAR_7) ? &VAR_5->v : &VAR_5->h;
 VAR_10 = (!VAR_7) ? VAR_4->w : VAR_4->h;
 VAR_11 = (!VAR_7) ? VAR_4->h : VAR_4->w;

 if (!FUNC_0(VAR_3->w, VAR_10, VAR_8->min, VAR_8->max) ||
     !FUNC_0(VAR_3->h, VAR_11, VAR_9->min, VAR_9->max))
  return -VAR_2;

 return 0;
}
