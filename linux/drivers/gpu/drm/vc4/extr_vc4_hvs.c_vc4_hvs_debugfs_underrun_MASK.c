
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc4_dev {int underrun; } ;
struct seq_file {struct drm_info_node* private; } ;
struct drm_printer {int dummy; } ;
struct drm_info_node {TYPE_1__* minor; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {struct drm_device* dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_printer*,char*,int ) ;
 struct drm_printer FUNC_2 (struct seq_file*) ;
 struct vc4_dev* FUNC_3 (struct drm_device*) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_0, void *VAR_1)
{
 struct drm_info_node *VAR_2 = VAR_0->private;
 struct drm_device *VAR_3 = VAR_2->minor->dev;
 struct vc4_dev *VAR_4 = FUNC_3(VAR_3);
 struct drm_printer VAR_5 = FUNC_2(VAR_0);

 FUNC_1(&VAR_5, "%d\n", FUNC_0(&VAR_4->underrun));

 return 0;
}
