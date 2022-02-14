
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {int dummy; } ;
struct drm_minor {int debugfs_root; struct drm_device* dev; } ;
struct drm_device {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int ,int ,struct drm_device*,int *) ;
 int FUNC_3 (int ,int ,int ,struct drm_minor*) ;
 int VAR_2 ;

int FUNC_4(struct msm_gpu *VAR_3, struct drm_minor *VAR_4)
{
 struct drm_device *VAR_5;
 int VAR_6;

 if (!VAR_4)
  return 0;

 VAR_5 = VAR_4->dev;

 VAR_6 = FUNC_3(VAR_1,
   FUNC_0(VAR_1),
   VAR_4->debugfs_root, VAR_4);

 if (VAR_6) {
  FUNC_1(VAR_5->dev, "could not install a5xx_debugfs_list\n");
  return VAR_6;
 }

 FUNC_2("reset", VAR_0, VAR_4->debugfs_root, VAR_5,
       &VAR_2);

 return 0;
}
