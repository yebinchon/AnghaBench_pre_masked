
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct page {int dummy; } ;
struct mock_dmabuf {int npages; int * pages; } ;
struct dma_buf {int dummy; } ;
struct TYPE_4__ {int size; struct mock_dmabuf* priv; int flags; int * ops; } ;


 int FUNC_0 (TYPE_1__) ;
 int VAR_0 ;
 struct dma_buf* FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct dma_buf*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 struct dma_buf* FUNC_4 (TYPE_1__*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_5 (struct mock_dmabuf*) ;
 struct mock_dmabuf* FUNC_6 (int,int ) ;
 int VAR_5 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static struct dma_buf *FUNC_8(int VAR_6)
{
 struct mock_dmabuf *VAR_7;
 FUNC_0(VAR_4);
 struct dma_buf *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_6(sizeof(*VAR_7) + VAR_6 * sizeof(struct page *),
         VAR_1);
 if (!VAR_7)
  return FUNC_1(-VAR_0);

 VAR_7->npages = VAR_6;
 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  VAR_7->pages[VAR_9] = FUNC_3(VAR_1);
  if (!VAR_7->pages[VAR_9])
   goto err;
 }

 VAR_4.ops = &VAR_5;
 VAR_4.size = VAR_6 * VAR_3;
 VAR_4.flags = VAR_2;
 VAR_4.priv = VAR_7;

 VAR_8 = FUNC_4(&VAR_4);
 if (FUNC_2(VAR_8))
  goto err;

 return VAR_8;

err:
 while (VAR_9--)
  FUNC_7(VAR_7->pages[VAR_9]);
 FUNC_5(VAR_7);
 return FUNC_1(-VAR_0);
}
