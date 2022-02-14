
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_table {int nents; int orig_nents; int sgl; } ;
struct vb2_dma_sg_attachment {int dma_dir; struct sg_table sgt; } ;
struct mutex {int dummy; } ;
struct dma_buf_attachment {int dev; TYPE_1__* dmabuf; struct vb2_dma_sg_attachment* priv; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_2__ {struct mutex lock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct sg_table* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;
 int FUNC_3 (struct mutex*) ;
 int FUNC_4 (struct mutex*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static struct sg_table *FUNC_6(
 struct dma_buf_attachment *VAR_2, enum dma_data_direction VAR_3)
{
 struct vb2_dma_sg_attachment *VAR_4 = VAR_2->priv;

 struct mutex *VAR_5 = &VAR_2->dmabuf->lock;
 struct sg_table *VAR_6;

 FUNC_3(VAR_5);

 VAR_6 = &VAR_4->sgt;

 if (VAR_4->dma_dir == VAR_3) {
  FUNC_4(VAR_5);
  return VAR_6;
 }


 if (VAR_4->dma_dir != VAR_0) {
  FUNC_2(VAR_2->dev, VAR_6->sgl, VAR_6->orig_nents,
   VAR_4->dma_dir);
  VAR_4->dma_dir = VAR_0;
 }


 VAR_6->nents = FUNC_1(VAR_2->dev, VAR_6->sgl, VAR_6->orig_nents,
    VAR_3);
 if (!VAR_6->nents) {
  FUNC_5("failed to map scatterlist\n");
  FUNC_4(VAR_5);
  return FUNC_0(-VAR_1);
 }

 VAR_4->dma_dir = VAR_3;

 FUNC_4(VAR_5);

 return VAR_6;
}
