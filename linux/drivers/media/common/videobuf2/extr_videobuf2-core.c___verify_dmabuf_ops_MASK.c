
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int io_modes; TYPE_1__* mem_ops; } ;
struct TYPE_2__ {int unmap_dmabuf; int map_dmabuf; int detach_dmabuf; int attach_dmabuf; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct vb2_queue *VAR_2)
{
 if (!(VAR_2->io_modes & VAR_1) || !VAR_2->mem_ops->attach_dmabuf ||
     !VAR_2->mem_ops->detach_dmabuf || !VAR_2->mem_ops->map_dmabuf ||
     !VAR_2->mem_ops->unmap_dmabuf)
  return -VAR_0;

 return 0;
}
