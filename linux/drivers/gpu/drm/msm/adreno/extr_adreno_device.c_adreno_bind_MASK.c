
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct msm_gpu {int dummy; } ;
struct msm_drm_private {int is_a2xx; } ;
struct drm_device {int dev; struct msm_drm_private* dev_private; } ;
struct device {struct adreno_platform_config* platform_data; } ;
struct TYPE_3__ {int core; int patchid; int minor; int major; } ;
struct adreno_platform_config {TYPE_1__ rev; } ;
struct adreno_info {struct msm_gpu* (* init ) (struct drm_device*) ;} ;


 int FUNC_0 (char*,int,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct msm_gpu*) ;
 int FUNC_2 (struct msm_gpu*) ;
 struct adreno_info* FUNC_3 (TYPE_1__) ;
 struct drm_device* FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,struct msm_gpu*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (struct device*,TYPE_1__*) ;
 int FUNC_8 (struct drm_device*,int ) ;
 struct msm_gpu* FUNC_9 (struct drm_device*) ;
 int FUNC_10 (struct device*) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_1, struct device *VAR_2, void *VAR_3)
{
 static struct adreno_platform_config VAR_4 = {};
 const struct adreno_info *VAR_5;
 struct drm_device *VAR_6 = FUNC_4(VAR_2);
 struct msm_drm_private *VAR_7 = VAR_6->dev_private;
 struct msm_gpu *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_7(VAR_1, &VAR_4.rev);
 if (VAR_9)
  return VAR_9;

 VAR_1->platform_data = &VAR_4;
 FUNC_8(VAR_6, FUNC_10(VAR_1));

 VAR_5 = FUNC_3(VAR_4.rev);

 if (!VAR_5) {
  FUNC_6(VAR_6->dev, "Unknown GPU revision: %u.%u.%u.%u\n",
   VAR_4.rev.core, VAR_4.rev.major,
   VAR_4.rev.minor, VAR_4.rev.patchid);
  return -VAR_0;
 }

 FUNC_0("Found GPU: %u.%u.%u.%u", VAR_4.rev.core, VAR_4.rev.major,
  VAR_4.rev.minor, VAR_4.rev.patchid);

 VAR_7->is_a2xx = VAR_4.rev.core == 2;

 VAR_8 = VAR_5->init(VAR_6);
 if (FUNC_1(VAR_8)) {
  FUNC_6(VAR_6->dev, "failed to load adreno gpu\n");
  return FUNC_2(VAR_8);
 }

 FUNC_5(VAR_1, VAR_8);

 return 0;
}
