
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int start; } ;
struct TYPE_6__ {int size; struct drm_device* dev; } ;
struct rockchip_gem_object {int size; TYPE_3__ mm; TYPE_2__ base; TYPE_1__* sgt; int dma_addr; } ;
struct rockchip_drm_private {int mm_lock; int domain; int mm; } ;
struct drm_device {struct rockchip_drm_private* dev_private; } ;
typedef int ssize_t ;
struct TYPE_5__ {int nents; int sgl; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,TYPE_3__*,int,int ,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int ,int ,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct rockchip_gem_object *VAR_4)
{
 struct drm_device *VAR_5 = VAR_4->base.dev;
 struct rockchip_drm_private *VAR_6 = VAR_5->dev_private;
 int VAR_7 = VAR_1 | VAR_2;
 ssize_t VAR_8;

 FUNC_4(&VAR_6->mm_lock);
 VAR_8 = FUNC_1(&VAR_6->mm, &VAR_4->mm,
      VAR_4->base.size, VAR_3,
      0, 0);
 FUNC_5(&VAR_6->mm_lock);

 if (VAR_8 < 0) {
  FUNC_0("out of I/O virtual memory: %zd\n", VAR_8);
  return VAR_8;
 }

 VAR_4->dma_addr = VAR_4->mm.start;

 VAR_8 = FUNC_3(VAR_6->domain, VAR_4->dma_addr, VAR_4->sgt->sgl,
      VAR_4->sgt->nents, VAR_7);
 if (VAR_8 < VAR_4->base.size) {
  FUNC_0("failed to map buffer: size=%zd request_size=%zd\n",
     VAR_8, VAR_4->base.size);
  VAR_8 = -VAR_0;
  goto err_remove_node;
 }

 VAR_4->size = VAR_8;

 return 0;

err_remove_node:
 FUNC_4(&VAR_6->mm_lock);
 FUNC_2(&VAR_4->mm);
 FUNC_5(&VAR_6->mm_lock);

 return VAR_8;
}
