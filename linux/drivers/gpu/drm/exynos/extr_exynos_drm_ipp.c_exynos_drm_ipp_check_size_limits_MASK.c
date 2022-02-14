
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int w; int h; int y; int x; } ;
struct TYPE_5__ {int* pitch; int height; } ;
struct exynos_drm_ipp_buffer {TYPE_3__ rect; TYPE_2__ buf; TYPE_1__* format; } ;
struct drm_exynos_ipp_limit_val {int align; } ;
struct drm_ipp_limit {struct drm_exynos_ipp_limit_val v; struct drm_exynos_ipp_limit_val h; } ;
struct drm_exynos_ipp_limit {int dummy; } ;
typedef enum drm_ipp_size_id { ____Placeholder_drm_ipp_size_id } drm_ipp_size_id ;
struct TYPE_4__ {int* cpp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct drm_exynos_ipp_limit const*,unsigned int,int,struct drm_ipp_limit*) ;
 int FUNC_2 (int,struct drm_exynos_ipp_limit_val*) ;

__attribute__((used)) static int FUNC_3(struct exynos_drm_ipp_buffer *VAR_4,
 const struct drm_exynos_ipp_limit *VAR_5, unsigned int VAR_6,
 bool VAR_7, bool VAR_8)
{
 enum drm_ipp_size_id VAR_9 = VAR_7 ? VAR_3 : VAR_1;
 struct drm_ipp_limit VAR_10;
 struct drm_exynos_ipp_limit_val *VAR_11 = &VAR_10.h, *VAR_12 = &VAR_10.v;
 int VAR_13 = VAR_4->buf.pitch[0] / VAR_4->format->cpp[0];

 if (!VAR_5)
  return 0;

 FUNC_1(VAR_5, VAR_6, VAR_2, &VAR_10);
 if (!FUNC_2(VAR_13, &VAR_10.h) ||
     !FUNC_2(VAR_4->buf.height, &VAR_10.v))
  return -VAR_0;

 if (VAR_8) {
  VAR_12 = &VAR_10.h;
  VAR_11 = &VAR_10.v;
 }
 FUNC_1(VAR_5, VAR_6, VAR_9, &VAR_10);
 if (!FUNC_2(VAR_4->rect.w, VAR_11) ||
     !FUNC_0(VAR_4->rect.x, VAR_11->align) ||
     !FUNC_2(VAR_4->rect.h, VAR_12) ||
     !FUNC_0(VAR_4->rect.y, VAR_12->align))
  return -VAR_0;

 return 0;
}
