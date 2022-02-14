
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_dc_buf {TYPE_1__* sgt_base; } ;
struct sg_table {unsigned int orig_nents; struct scatterlist* sgl; } ;
struct vb2_dc_attachment {int dma_dir; struct sg_table sgt; } ;
struct scatterlist {int offset; int length; } ;
struct dma_buf_attachment {struct vb2_dc_attachment* priv; } ;
struct dma_buf {struct vb2_dc_buf* priv; } ;
struct TYPE_2__ {struct scatterlist* sgl; int orig_nents; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vb2_dc_attachment*) ;
 struct vb2_dc_attachment* FUNC_1 (int,int ) ;
 int FUNC_2 (struct sg_table*,int ,int ) ;
 struct scatterlist* FUNC_3 (struct scatterlist*) ;
 int FUNC_4 (struct scatterlist*) ;
 int FUNC_5 (struct scatterlist*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct dma_buf *VAR_3,
 struct dma_buf_attachment *VAR_4)
{
 struct vb2_dc_attachment *VAR_5;
 unsigned int VAR_6;
 struct scatterlist *VAR_7, *VAR_8;
 struct sg_table *VAR_9;
 struct vb2_dc_buf *VAR_10 = VAR_3->priv;
 int VAR_11;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_9 = &VAR_5->sgt;



 VAR_11 = FUNC_2(VAR_9, VAR_10->sgt_base->orig_nents, VAR_2);
 if (VAR_11) {
  FUNC_0(VAR_5);
  return -VAR_1;
 }

 VAR_7 = VAR_10->sgt_base->sgl;
 VAR_8 = VAR_9->sgl;
 for (VAR_6 = 0; VAR_6 < VAR_9->orig_nents; ++VAR_6) {
  FUNC_5(VAR_8, FUNC_4(VAR_7), VAR_7->length, VAR_7->offset);
  VAR_7 = FUNC_3(VAR_7);
  VAR_8 = FUNC_3(VAR_8);
 }

 VAR_5->dma_dir = VAR_0;
 VAR_4->priv = VAR_5;

 return 0;
}
