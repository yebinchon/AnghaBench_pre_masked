
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct exynos_drm_ipp_task {int dev; int ipp; } ;
struct exynos_drm_ipp_formats {int num_limits; int limits; } ;
struct TYPE_3__ {unsigned int width; scalar_t__ height; unsigned int* pitch; int * gem_id; int fourcc; int modifier; } ;
struct exynos_drm_ipp_buffer {int rect; TYPE_1__ buf; TYPE_2__* format; } ;
struct TYPE_4__ {int num_planes; unsigned int* cpp; int hsub; } ;


 unsigned int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (int ,char*,struct exynos_drm_ipp_task*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct exynos_drm_ipp_formats* FUNC_2 (int ,int ,int ,int ) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,int ,int ,int) ;
 int FUNC_5 (struct exynos_drm_ipp_buffer*,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_6(struct exynos_drm_ipp_task *VAR_4,
           struct exynos_drm_ipp_buffer *VAR_5,
           struct exynos_drm_ipp_buffer *VAR_6,
           struct exynos_drm_ipp_buffer *VAR_7,
           bool VAR_8, bool VAR_9)
{
 const struct exynos_drm_ipp_formats *VAR_10;
 int VAR_11, VAR_12;

 VAR_10 = FUNC_2(VAR_4->ipp, VAR_5->buf.fourcc, VAR_5->buf.modifier,
          VAR_5 == VAR_6 ? VAR_1 :
         VAR_0);
 if (!VAR_10) {
  FUNC_1(VAR_4->dev,
         "Task %pK: %s format not supported\n",
         VAR_4, VAR_5 == VAR_6 ? "src" : "dst");
  return -VAR_2;
 }


 if (VAR_5->buf.width == 0 || VAR_5->buf.height == 0)
  return -VAR_2;

 VAR_5->format = FUNC_3(VAR_5->buf.fourcc);
 for (VAR_12 = 0; VAR_12 < VAR_5->format->num_planes; VAR_12++) {
  unsigned int VAR_13 = (VAR_12 == 0) ? VAR_5->buf.width :
        FUNC_0(VAR_5->buf.width, VAR_5->format->hsub);

  if (VAR_5->buf.pitch[VAR_12] == 0)
   VAR_5->buf.pitch[VAR_12] = VAR_13 * VAR_5->format->cpp[VAR_12];
  if (VAR_5->buf.pitch[VAR_12] < VAR_13 * VAR_5->format->cpp[VAR_12])
   return -VAR_2;
  if (!VAR_5->buf.gem_id[VAR_12])
   return -VAR_3;
 }


 if (VAR_5->format->num_planes > 2 &&
     VAR_5->buf.pitch[1] != VAR_5->buf.pitch[2])
  return -VAR_2;


 VAR_11 = FUNC_5(VAR_5, VAR_10->limits,
            VAR_10->num_limits,
            VAR_8,
            VAR_5 == VAR_7 ? VAR_9 : 0);
 if (VAR_11)
  return VAR_11;
 VAR_11 = FUNC_4(&VAR_6->rect, &VAR_7->rect,
      VAR_10->limits,
      VAR_10->num_limits, VAR_9);
 return VAR_11;
}
