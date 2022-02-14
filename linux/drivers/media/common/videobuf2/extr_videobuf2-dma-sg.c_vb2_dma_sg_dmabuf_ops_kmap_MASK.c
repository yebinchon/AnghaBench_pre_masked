
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_dma_sg_buf {void* vaddr; } ;
struct dma_buf {struct vb2_dma_sg_buf* priv; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static void *FUNC_0(struct dma_buf *VAR_1, unsigned long VAR_2)
{
 struct vb2_dma_sg_buf *VAR_3 = VAR_1->priv;

 return VAR_3->vaddr ? VAR_3->vaddr + VAR_2 * VAR_0 : ((void*)0);
}
