
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mock_dmabuf {int npages; int pages; } ;
struct dma_buf {int dummy; } ;


 int VAR_0 ;
 struct mock_dmabuf* FUNC_0 (struct dma_buf*) ;
 void* FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void *FUNC_2(struct dma_buf *VAR_1)
{
 struct mock_dmabuf *VAR_2 = FUNC_0(VAR_1);

 return FUNC_1(VAR_2->pages, VAR_2->npages, 0, VAR_0);
}
