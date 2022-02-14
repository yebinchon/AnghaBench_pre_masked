
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_7__ {TYPE_1__* glob; } ;
struct TYPE_8__ {TYPE_2__ bdev; } ;
struct amdgpu_device {scalar_t__ dummy_page_addr; TYPE_4__* pdev; TYPE_3__ mman; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_6__ {struct page* dummy_read_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_4__*,struct page*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_3)
{
 struct page *VAR_4 = VAR_3->mman.bdev.glob->dummy_read_page;

 if (VAR_3->dummy_page_addr)
  return 0;
 VAR_3->dummy_page_addr = FUNC_2(VAR_3->pdev, VAR_4, 0,
          VAR_1, VAR_2);
 if (FUNC_1(VAR_3->pdev, VAR_3->dummy_page_addr)) {
  FUNC_0(&VAR_3->pdev->dev, "Failed to DMA MAP the dummy page\n");
  VAR_3->dummy_page_addr = 0;
  return -VAR_0;
 }
 return 0;
}
