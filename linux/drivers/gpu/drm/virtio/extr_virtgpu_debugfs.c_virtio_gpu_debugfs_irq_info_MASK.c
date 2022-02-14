
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {int sync_seq; int last_seq; } ;
struct virtio_gpu_device {TYPE_3__ fence_drv; } ;
struct seq_file {scalar_t__ private; } ;
struct drm_info_node {TYPE_2__* minor; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_4__ {struct virtio_gpu_device* dev_private; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct seq_file*,char*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct drm_info_node *VAR_2 = (struct drm_info_node *) VAR_0->private;
 struct virtio_gpu_device *VAR_3 = VAR_2->minor->dev->dev_private;

 FUNC_1(VAR_0, "fence %llu %lld\n",
     (u64)FUNC_0(&VAR_3->fence_drv.last_seq),
     VAR_3->fence_drv.sync_seq);
 return 0;
}
