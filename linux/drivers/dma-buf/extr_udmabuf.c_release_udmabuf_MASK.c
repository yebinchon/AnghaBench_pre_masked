
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udmabuf {size_t pagecount; struct udmabuf* pages; } ;
struct dma_buf {struct udmabuf* priv; } ;
typedef size_t pgoff_t ;


 int FUNC_0 (struct udmabuf*) ;
 int FUNC_1 (struct udmabuf) ;

__attribute__((used)) static void FUNC_2(struct dma_buf *VAR_0)
{
 struct udmabuf *VAR_1 = VAR_0->priv;
 pgoff_t VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->pagecount; VAR_2++)
  FUNC_1(VAR_1->pages[VAR_2]);
 FUNC_0(VAR_1->pages);
 FUNC_0(VAR_1);
}
