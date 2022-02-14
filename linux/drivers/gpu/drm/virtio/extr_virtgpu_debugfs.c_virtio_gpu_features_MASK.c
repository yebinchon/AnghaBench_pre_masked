
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtio_gpu_device {int num_scanouts; int num_capsets; int has_edid; int has_virgl_3d; } ;
struct seq_file {scalar_t__ private; } ;
struct drm_info_node {TYPE_2__* minor; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {struct virtio_gpu_device* dev_private; } ;


 int FUNC_0 (struct seq_file*,char*,int ) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct drm_info_node *VAR_2 = (struct drm_info_node *) VAR_0->private;
 struct virtio_gpu_device *VAR_3 = VAR_2->minor->dev->dev_private;

 FUNC_0(VAR_0, "virgl", VAR_3->has_virgl_3d);
 FUNC_0(VAR_0, "edid", VAR_3->has_edid);
 FUNC_1(VAR_0, "cap sets", VAR_3->num_capsets);
 FUNC_1(VAR_0, "scanouts", VAR_3->num_scanouts);
 return 0;
}
