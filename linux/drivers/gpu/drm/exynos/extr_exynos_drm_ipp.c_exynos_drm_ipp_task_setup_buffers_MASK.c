
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_ipp_buffer {int dummy; } ;
struct exynos_drm_ipp_task {int dev; struct exynos_drm_ipp_buffer dst; struct exynos_drm_ipp_buffer src; } ;
struct drm_file {int dummy; } ;


 int FUNC_0 (int ,char*,struct exynos_drm_ipp_task*) ;
 int FUNC_1 (struct exynos_drm_ipp_buffer*,struct drm_file*) ;

__attribute__((used)) static int FUNC_2(struct exynos_drm_ipp_task *VAR_0,
         struct drm_file *VAR_1)
{
 struct exynos_drm_ipp_buffer *VAR_2 = &VAR_0->src, *VAR_3 = &VAR_0->dst;
 int VAR_4 = 0;

 FUNC_0(VAR_0->dev, "Setting buffer for task %pK\n",
        VAR_0);

 VAR_4 = FUNC_1(VAR_2, VAR_1);
 if (VAR_4) {
  FUNC_0(VAR_0->dev,
         "Task %pK: src buffer setup failed\n",
         VAR_0);
  return VAR_4;
 }
 VAR_4 = FUNC_1(VAR_3, VAR_1);
 if (VAR_4) {
  FUNC_0(VAR_0->dev,
         "Task %pK: dst buffer setup failed\n",
         VAR_0);
  return VAR_4;
 }

 FUNC_0(VAR_0->dev, "Task %pK: buffers prepared.\n",
        VAR_0);

 return VAR_4;
}
