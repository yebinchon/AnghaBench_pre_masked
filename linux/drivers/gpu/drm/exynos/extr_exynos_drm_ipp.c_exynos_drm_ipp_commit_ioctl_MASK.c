
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_ipp_task {int flags; struct exynos_drm_ipp* ipp; } ;
struct exynos_drm_ipp {int done_wq; int id; int dev; } ;
struct drm_file {int dummy; } ;
struct drm_exynos_ioctl_ipp_commit {int flags; int user_data; int ipp_id; scalar_t__ reserved; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int ,char*,int ,struct exynos_drm_ipp_task*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct exynos_drm_ipp* FUNC_1 (int ) ;
 int FUNC_2 (struct exynos_drm_ipp_task*,struct drm_file*,int ) ;
 int FUNC_3 (struct exynos_drm_ipp*,struct exynos_drm_ipp_task*) ;
 int FUNC_4 (struct exynos_drm_ipp*,struct exynos_drm_ipp_task*) ;
 struct exynos_drm_ipp_task* FUNC_5 (struct exynos_drm_ipp*) ;
 int FUNC_6 (struct exynos_drm_ipp_task*) ;
 int FUNC_7 (struct exynos_drm_ipp_task*) ;
 int FUNC_8 (struct exynos_drm_ipp*,struct exynos_drm_ipp_task*) ;
 int FUNC_9 (struct exynos_drm_ipp_task*,struct drm_exynos_ioctl_ipp_commit*) ;
 int FUNC_10 (struct exynos_drm_ipp_task*,struct drm_file*) ;
 int FUNC_11 (int ,int) ;

int FUNC_12(struct drm_device *VAR_9, void *VAR_10,
    struct drm_file *VAR_11)
{
 struct drm_exynos_ioctl_ipp_commit *VAR_12 = VAR_10;
 struct exynos_drm_ipp *VAR_13;
 struct exynos_drm_ipp_task *VAR_14;
 int VAR_15 = 0;

 if ((VAR_12->flags & ~VAR_0) || VAR_12->reserved)
  return -VAR_6;


 if ((VAR_12->flags & VAR_3) &&
   (VAR_12->flags & VAR_1))
  return -VAR_6;

 VAR_13 = FUNC_1(VAR_12->ipp_id);
 if (!VAR_13)
  return -VAR_7;

 VAR_14 = FUNC_5(VAR_13);
 if (!VAR_14)
  return -VAR_8;

 VAR_15 = FUNC_9(VAR_14, VAR_12);
 if (VAR_15)
  goto free;

 VAR_15 = FUNC_6(VAR_14);
 if (VAR_15)
  goto free;

 VAR_15 = FUNC_10(VAR_14, VAR_11);
 if (VAR_15 || VAR_12->flags & VAR_3)
  goto free;

 if (VAR_12->flags & VAR_1) {
  VAR_15 = FUNC_2(VAR_14, VAR_11,
       VAR_12->user_data);
  if (VAR_15)
   goto free;
 }





 if (VAR_12->flags & VAR_2) {
  FUNC_0(VAR_13->dev,
         "ipp: %d, nonblocking processing task %pK\n",
         VAR_13->id, VAR_14);

  VAR_14->flags |= VAR_4;
  FUNC_3(VAR_14->ipp, VAR_14);
  VAR_15 = 0;
 } else {
  FUNC_0(VAR_13->dev, "ipp: %d, processing task %pK\n",
         VAR_13->id, VAR_14);
  FUNC_3(VAR_13, VAR_14);
  VAR_15 = FUNC_11(VAR_13->done_wq,
     VAR_14->flags & VAR_5);
  if (VAR_15)
   FUNC_4(VAR_13, VAR_14);
  else
   VAR_15 = FUNC_7(VAR_14);
 }
 return VAR_15;
free:
 FUNC_8(VAR_13, VAR_14);

 return VAR_15;
}
