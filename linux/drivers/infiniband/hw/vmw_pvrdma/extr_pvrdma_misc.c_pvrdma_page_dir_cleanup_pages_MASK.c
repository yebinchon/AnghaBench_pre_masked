
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u64 ;
struct pvrdma_page_dir {size_t npages; scalar_t__* pages; } ;
struct pvrdma_dev {TYPE_1__* pdev; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,scalar_t__,int ) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (struct pvrdma_page_dir*,size_t) ;

__attribute__((used)) static void FUNC_3(struct pvrdma_dev *VAR_1,
       struct pvrdma_page_dir *VAR_2)
{
 if (VAR_2->pages) {
  u64 VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_2->npages && VAR_2->pages[VAR_3]; VAR_3++) {
   dma_addr_t VAR_4 = FUNC_2(VAR_2, VAR_3);

   FUNC_0(&VAR_1->pdev->dev, VAR_0,
       VAR_2->pages[VAR_3], VAR_4);
  }

  FUNC_1(VAR_2->pages);
 }
}
