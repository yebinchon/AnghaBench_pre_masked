
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int orig_nents; int sgl; } ;
struct vb2_dc_attachment {scalar_t__ dma_dir; struct sg_table sgt; } ;
struct dma_buf_attachment {struct vb2_dc_attachment* priv; int dev; } ;
struct dma_buf {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,scalar_t__,int ) ;
 int FUNC_1 (struct vb2_dc_attachment*) ;
 int FUNC_2 (struct sg_table*) ;

__attribute__((used)) static void FUNC_3(struct dma_buf *VAR_2,
 struct dma_buf_attachment *VAR_3)
{
 struct vb2_dc_attachment *VAR_4 = VAR_3->priv;
 struct sg_table *VAR_5;

 if (!VAR_4)
  return;

 VAR_5 = &VAR_4->sgt;


 if (VAR_4->dma_dir != VAR_1)






  FUNC_0(VAR_3->dev, VAR_5->sgl, VAR_5->orig_nents,
       VAR_4->dma_dir, VAR_0);
 FUNC_2(VAR_5);
 FUNC_1(VAR_4);
 VAR_3->priv = ((void*)0);
}
