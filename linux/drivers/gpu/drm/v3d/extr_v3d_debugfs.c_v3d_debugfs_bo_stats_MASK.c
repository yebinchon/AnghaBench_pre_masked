
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long num_allocated; scalar_t__ pages_allocated; } ;
struct v3d_dev {int bo_lock; TYPE_1__ bo_stats; } ;
struct seq_file {scalar_t__ private; } ;
struct drm_info_node {TYPE_2__* minor; } ;
struct drm_device {int dummy; } ;
struct TYPE_4__ {struct drm_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct seq_file*,char*,long) ;
 struct v3d_dev* FUNC_3 (struct drm_device*) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_1, void *VAR_2)
{
 struct drm_info_node *VAR_3 = (struct drm_info_node *)VAR_1->private;
 struct drm_device *VAR_4 = VAR_3->minor->dev;
 struct v3d_dev *VAR_5 = FUNC_3(VAR_4);

 FUNC_0(&VAR_5->bo_lock);
 FUNC_2(VAR_1, "allocated bos:          %d\n",
     VAR_5->bo_stats.num_allocated);
 FUNC_2(VAR_1, "allocated bo size (kb): %ld\n",
     (long)VAR_5->bo_stats.pages_allocated << (VAR_0 - 10));
 FUNC_1(&VAR_5->bo_lock);

 return 0;
}
