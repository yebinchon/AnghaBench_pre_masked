
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int rotation; } ;
struct TYPE_6__ {scalar_t__ width; scalar_t__ height; scalar_t__ fourcc; } ;
struct TYPE_5__ {scalar_t__ w; scalar_t__ h; scalar_t__ x; scalar_t__ y; } ;
struct exynos_drm_ipp_buffer {TYPE_3__ buf; TYPE_2__ rect; } ;
struct exynos_drm_ipp_task {int dev; TYPE_1__ transform; struct exynos_drm_ipp_buffer dst; struct exynos_drm_ipp_buffer src; struct exynos_drm_ipp* ipp; } ;
struct exynos_drm_ipp {int capabilities; int dev; } ;


 int FUNC_0 (int ,char*,struct exynos_drm_ipp_task*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct exynos_drm_ipp_task*,struct exynos_drm_ipp_buffer*,struct exynos_drm_ipp_buffer*,struct exynos_drm_ipp_buffer*,int,int) ;

__attribute__((used)) static int FUNC_3(struct exynos_drm_ipp_task *VAR_7)
{
 struct exynos_drm_ipp *VAR_8 = VAR_7->ipp;
 struct exynos_drm_ipp_buffer *VAR_9 = &VAR_7->src, *VAR_10 = &VAR_7->dst;
 unsigned int VAR_11 = VAR_7->transform.rotation;
 int VAR_12 = 0;
 bool VAR_13 = FUNC_1(VAR_11);
 bool VAR_14 = (VAR_11 != VAR_4);
 bool VAR_15 = 0;

 FUNC_0(VAR_7->dev, "Checking task %pK\n", VAR_7);

 if (VAR_9->rect.w == VAR_6)
  VAR_9->rect.w = VAR_9->buf.width;
 if (VAR_9->rect.h == VAR_6)
  VAR_9->rect.h = VAR_9->buf.height;
 if (VAR_10->rect.w == VAR_6)
  VAR_10->rect.w = VAR_10->buf.width;
 if (VAR_10->rect.h == VAR_6)
  VAR_10->rect.h = VAR_10->buf.height;

 if (VAR_9->rect.x + VAR_9->rect.w > (VAR_9->buf.width) ||
     VAR_9->rect.y + VAR_9->rect.h > (VAR_9->buf.height) ||
     VAR_10->rect.x + VAR_10->rect.w > (VAR_10->buf.width) ||
     VAR_10->rect.y + VAR_10->rect.h > (VAR_10->buf.height)) {
  FUNC_0(VAR_7->dev,
         "Task %pK: defined area is outside provided buffers\n",
         VAR_7);
  return -VAR_5;
 }

 if ((!VAR_13 && (VAR_9->rect.w != VAR_10->rect.w ||
         VAR_9->rect.h != VAR_10->rect.h)) ||
     (VAR_13 && (VAR_9->rect.w != VAR_10->rect.h ||
        VAR_9->rect.h != VAR_10->rect.w)))
  VAR_15 = 1;

 if ((!(VAR_8->capabilities & VAR_1) &&
      (VAR_9->rect.x || VAR_9->rect.y || VAR_10->rect.x || VAR_10->rect.y)) ||
     (!(VAR_8->capabilities & VAR_2) && VAR_14) ||
     (!(VAR_8->capabilities & VAR_3) && VAR_15) ||
     (!(VAR_8->capabilities & VAR_0) &&
      VAR_9->buf.fourcc != VAR_10->buf.fourcc)) {
  FUNC_0(VAR_7->dev, "Task %pK: hw capabilities exceeded\n",
         VAR_7);
  return -VAR_5;
 }

 VAR_12 = FUNC_2(VAR_7, VAR_9, VAR_9, VAR_10, VAR_14, VAR_13);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_2(VAR_7, VAR_10, VAR_9, VAR_10, 0, VAR_13);
 if (VAR_12)
  return VAR_12;

 FUNC_0(VAR_8->dev, "Task %pK: all checks done.\n",
        VAR_7);

 return VAR_12;
}
