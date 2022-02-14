
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct drm_info_node* private; } ;
struct drm_printer {int dummy; } ;
struct drm_info_node {TYPE_1__* minor; } ;
struct drm_device {struct armada_private* dev_private; } ;
struct armada_private {int linear_lock; int linear; } ;
struct TYPE_2__ {struct drm_device* dev; } ;


 int FUNC_0 (int *,struct drm_printer*) ;
 struct drm_printer FUNC_1 (struct seq_file*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_0, void *VAR_1)
{
 struct drm_info_node *VAR_2 = VAR_0->private;
 struct drm_device *VAR_3 = VAR_2->minor->dev;
 struct armada_private *VAR_4 = VAR_3->dev_private;
 struct drm_printer VAR_5 = FUNC_1(VAR_0);

 FUNC_2(&VAR_4->linear_lock);
 FUNC_0(&VAR_4->linear, &VAR_5);
 FUNC_3(&VAR_4->linear_lock);

 return 0;
}
