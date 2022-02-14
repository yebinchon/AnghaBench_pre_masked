
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_dma_sg_buf {int dummy; } ;
struct dma_buf {struct vb2_dma_sg_buf* priv; } ;


 void* FUNC_0 (struct vb2_dma_sg_buf*) ;

__attribute__((used)) static void *FUNC_1(struct dma_buf *VAR_0)
{
 struct vb2_dma_sg_buf *VAR_1 = VAR_0->priv;

 return FUNC_0(VAR_1);
}
