
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int addr; int entry; int * page; } ;
struct radeon_device {TYPE_1__ dummy_page; TYPE_2__* pdev; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int *,int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(struct radeon_device *VAR_7)
{
 if (VAR_7->dummy_page.page)
  return 0;
 VAR_7->dummy_page.page = FUNC_1(VAR_1 | VAR_2 | VAR_6);
 if (VAR_7->dummy_page.page == ((void*)0))
  return -VAR_0;
 VAR_7->dummy_page.addr = FUNC_4(VAR_7->pdev, VAR_7->dummy_page.page,
     0, VAR_3, VAR_4);
 if (FUNC_3(VAR_7->pdev, VAR_7->dummy_page.addr)) {
  FUNC_2(&VAR_7->pdev->dev, "Failed to DMA MAP the dummy page\n");
  FUNC_0(VAR_7->dummy_page.page);
  VAR_7->dummy_page.page = ((void*)0);
  return -VAR_0;
 }
 VAR_7->dummy_page.entry = FUNC_5(VAR_7->dummy_page.addr,
           VAR_5);
 return 0;
}
