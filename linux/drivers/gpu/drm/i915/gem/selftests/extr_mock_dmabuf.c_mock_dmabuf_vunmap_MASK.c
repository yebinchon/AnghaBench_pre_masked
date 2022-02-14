
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mock_dmabuf {int npages; } ;
struct dma_buf {int dummy; } ;


 struct mock_dmabuf* FUNC_0 (struct dma_buf*) ;
 int FUNC_1 (void*,int ) ;

__attribute__((used)) static void FUNC_2(struct dma_buf *VAR_0, void *VAR_1)
{
 struct mock_dmabuf *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_1, VAR_2->npages);
}
