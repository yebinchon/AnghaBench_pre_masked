
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int orig_nents; int sgl; } ;
struct vb2_dma_sg_attachment {scalar_t__ dma_dir; struct sg_table sgt; } ;
struct dma_buf_attachment {struct vb2_dma_sg_attachment* priv; int dev; } ;
struct dma_buf {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;
 int FUNC_1 (struct vb2_dma_sg_attachment*) ;
 int FUNC_2 (struct sg_table*) ;

__attribute__((used)) static void FUNC_3(struct dma_buf *VAR_1,
 struct dma_buf_attachment *VAR_2)
{
 struct vb2_dma_sg_attachment *VAR_3 = VAR_2->priv;
 struct sg_table *VAR_4;

 if (!VAR_3)
  return;

 VAR_4 = &VAR_3->sgt;


 if (VAR_3->dma_dir != VAR_0)
  FUNC_0(VAR_2->dev, VAR_4->sgl, VAR_4->orig_nents,
   VAR_3->dma_dir);
 FUNC_2(VAR_4);
 FUNC_1(VAR_3);
 VAR_2->priv = ((void*)0);
}
