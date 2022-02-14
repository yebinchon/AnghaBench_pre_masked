
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mock_dmabuf {int * pages; } ;
struct dma_buf {int dummy; } ;


 void FUNC_0 (int ) ;
 struct mock_dmabuf* FUNC_1 (struct dma_buf*) ;

__attribute__((used)) static void FUNC_2(struct dma_buf *VAR_0, unsigned long VAR_1, void *VAR_2)
{
 struct mock_dmabuf *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_3->pages[VAR_1]);
}
