
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_table {int sgl; int nents; } ;
struct rockchip_gem_object {struct sg_table* sgt; int dma_addr; } ;
struct drm_device {int dev; } ;
struct dma_buf_attachment {TYPE_1__* dmabuf; } ;
struct TYPE_2__ {scalar_t__ size; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct sg_table*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct drm_device *VAR_2,
   struct dma_buf_attachment *VAR_3,
   struct sg_table *VAR_4,
   struct rockchip_gem_object *VAR_5)
{
 int VAR_6 = FUNC_1(VAR_2->dev, VAR_4->sgl, VAR_4->nents,
          VAR_0);
 if (!VAR_6)
  return -VAR_1;

 if (FUNC_3(VAR_4, VAR_6) < VAR_3->dmabuf->size) {
  FUNC_0("failed to map sg_table to contiguous linear address.\n");
  FUNC_2(VAR_2->dev, VAR_4->sgl, VAR_4->nents,
        VAR_0);
  return -VAR_1;
 }

 VAR_5->dma_addr = FUNC_4(VAR_4->sgl);
 VAR_5->sgt = VAR_4;
 return 0;
}
