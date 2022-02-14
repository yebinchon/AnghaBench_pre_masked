
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mock_dmabuf {int npages; int * pages; } ;
struct dma_buf {int dummy; } ;


 int FUNC_0 (struct mock_dmabuf*) ;
 int FUNC_1 (int ) ;
 struct mock_dmabuf* FUNC_2 (struct dma_buf*) ;

__attribute__((used)) static void FUNC_3(struct dma_buf *VAR_0)
{
 struct mock_dmabuf *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->npages; VAR_2++)
  FUNC_1(VAR_1->pages[VAR_2]);

 FUNC_0(VAR_1);
}
