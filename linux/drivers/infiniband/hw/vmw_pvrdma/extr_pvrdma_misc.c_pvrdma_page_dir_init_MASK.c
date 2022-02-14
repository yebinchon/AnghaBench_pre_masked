
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct pvrdma_page_dir {scalar_t__ ntables; scalar_t__ npages; void** pages; void** tables; int * dir; int dir_dma; } ;
struct pvrdma_dev {TYPE_1__* pdev; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 void* FUNC_1 (int *,int ,int *,int ) ;
 void* FUNC_2 (scalar_t__,int,int ) ;
 int FUNC_3 (struct pvrdma_page_dir*,int ,int) ;
 int FUNC_4 (struct pvrdma_dev*,struct pvrdma_page_dir*) ;
 int FUNC_5 (struct pvrdma_page_dir*,scalar_t__,int ) ;

int FUNC_6(struct pvrdma_dev *VAR_5, struct pvrdma_page_dir *VAR_6,
    u64 VAR_7, bool VAR_8)
{
 u64 VAR_9;

 if (VAR_7 > VAR_4)
  return -VAR_0;

 FUNC_3(VAR_6, 0, sizeof(*VAR_6));

 VAR_6->dir = FUNC_1(&VAR_5->pdev->dev, VAR_3,
           &VAR_6->dir_dma, VAR_2);
 if (!VAR_6->dir)
  goto err;

 VAR_6->ntables = FUNC_0(VAR_7 - 1) + 1;
 VAR_6->tables = FUNC_2(VAR_6->ntables, sizeof(*VAR_6->tables),
          VAR_2);
 if (!VAR_6->tables)
  goto err;

 for (VAR_9 = 0; VAR_9 < VAR_6->ntables; VAR_9++) {
  VAR_6->tables[VAR_9] = FUNC_1(&VAR_5->pdev->dev, VAR_3,
      (dma_addr_t *)&VAR_6->dir[VAR_9],
      VAR_2);
  if (!VAR_6->tables[VAR_9])
   goto err;
 }

 VAR_6->npages = VAR_7;

 if (VAR_8) {
  VAR_6->pages = FUNC_2(VAR_7, sizeof(*VAR_6->pages),
          VAR_2);
  if (!VAR_6->pages)
   goto err;

  for (VAR_9 = 0; VAR_9 < VAR_6->npages; VAR_9++) {
   dma_addr_t VAR_10;

   VAR_6->pages[VAR_9] = FUNC_1(&VAR_5->pdev->dev,
           VAR_3,
           &VAR_10,
           VAR_2);
   if (!VAR_6->pages[VAR_9])
    goto err;

   FUNC_5(VAR_6, VAR_9, VAR_10);
  }
 }

 return 0;

err:
 FUNC_4(VAR_5, VAR_6);

 return -VAR_1;
}
