
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udmabuf {struct page** pages; } ;
struct page {int dummy; } ;
struct dma_buf {struct udmabuf* priv; } ;


 void* FUNC_0 (struct page*) ;

__attribute__((used)) static void *FUNC_1(struct dma_buf *VAR_0, unsigned long VAR_1)
{
 struct udmabuf *VAR_2 = VAR_0->priv;
 struct page *VAR_3 = VAR_2->pages[VAR_1];

 return FUNC_0(VAR_3);
}
