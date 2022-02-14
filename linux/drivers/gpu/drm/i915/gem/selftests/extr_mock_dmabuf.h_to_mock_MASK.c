
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mock_dmabuf {int dummy; } ;
struct dma_buf {struct mock_dmabuf* priv; } ;



__attribute__((used)) static struct mock_dmabuf *FUNC_0(struct dma_buf *VAR_0)
{
 return VAR_0->priv;
}
