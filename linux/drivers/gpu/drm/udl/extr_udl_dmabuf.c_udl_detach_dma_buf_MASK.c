
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_table {int nents; int sgl; } ;
struct udl_drm_dmabuf_attachment {scalar_t__ dir; struct sg_table sgt; } ;
struct dma_buf_attachment {struct udl_drm_dmabuf_attachment* priv; int dev; TYPE_1__* dmabuf; } ;
struct dma_buf {int dummy; } ;
struct TYPE_2__ {int size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;
 int FUNC_3 (struct udl_drm_dmabuf_attachment*) ;
 int FUNC_4 (struct sg_table*) ;

__attribute__((used)) static void FUNC_5(struct dma_buf *VAR_1,
          struct dma_buf_attachment *VAR_2)
{
 struct udl_drm_dmabuf_attachment *VAR_3 = VAR_2->priv;
 struct sg_table *VAR_4;

 if (!VAR_3)
  return;

 FUNC_0("[DEV:%s] size:%zd\n", FUNC_1(VAR_2->dev),
   VAR_2->dmabuf->size);

 VAR_4 = &VAR_3->sgt;

 if (VAR_3->dir != VAR_0)
  FUNC_2(VAR_2->dev, VAR_4->sgl, VAR_4->nents,
    VAR_3->dir);

 FUNC_4(VAR_4);
 FUNC_3(VAR_3);
 VAR_2->priv = ((void*)0);
}
