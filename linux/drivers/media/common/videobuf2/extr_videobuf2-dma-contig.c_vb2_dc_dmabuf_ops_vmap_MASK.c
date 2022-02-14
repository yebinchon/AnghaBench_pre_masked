
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_dc_buf {void* vaddr; } ;
struct dma_buf {struct vb2_dc_buf* priv; } ;



__attribute__((used)) static void *FUNC_0(struct dma_buf *VAR_0)
{
 struct vb2_dc_buf *VAR_1 = VAR_0->priv;

 return VAR_1->vaddr;
}
