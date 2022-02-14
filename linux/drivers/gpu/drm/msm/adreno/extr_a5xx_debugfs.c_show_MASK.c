
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
struct msm_drm_private {struct msm_gpu* gpu; } ;
struct drm_printer {int dummy; } ;
struct drm_info_node {TYPE_2__* info_ent; TYPE_1__* minor; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;
struct TYPE_4__ {int (* data ) (struct msm_gpu*,struct drm_printer*) ;} ;
struct TYPE_3__ {struct drm_device* dev; } ;


 struct drm_printer FUNC_0 (struct seq_file*) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct drm_info_node *VAR_2 = (struct drm_info_node *) VAR_0->private;
 struct drm_device *VAR_3 = VAR_2->minor->dev;
 struct msm_drm_private *VAR_4 = VAR_3->dev_private;
 struct drm_printer VAR_5 = FUNC_0(VAR_0);
 int (*VAR_6)(struct msm_gpu *VAR_7, struct drm_printer *VAR_8) =
  VAR_2->info_ent->data;

 return VAR_6(VAR_4->gpu, &VAR_5);
}
