
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_file_private {int * aspace; } ;
struct msm_drm_private {TYPE_1__* gpu; } ;
struct drm_file {struct msm_file_private* driver_priv; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;
struct TYPE_2__ {int * aspace; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct msm_file_private* FUNC_0 (int,int ) ;
 int FUNC_1 (struct drm_device*,struct msm_file_private*) ;

__attribute__((used)) static int FUNC_2(struct drm_device *VAR_2, struct drm_file *VAR_3)
{
 struct msm_drm_private *VAR_4 = VAR_2->dev_private;
 struct msm_file_private *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_1(VAR_2, VAR_5);

 VAR_5->aspace = VAR_4->gpu ? VAR_4->gpu->aspace : ((void*)0);
 VAR_3->driver_priv = VAR_5;

 return 0;
}
