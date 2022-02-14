
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {struct page* scratch_page; int scratch_page_dma; int pcidev; scalar_t__ needs_dmar; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct page* FUNC_0 (int) ;
 TYPE_1__ VAR_7 ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct page*,int ,int ,int ) ;
 int FUNC_4 (struct page*,int) ;

__attribute__((used)) static int FUNC_5(void)
{
 struct page *VAR_8;
 dma_addr_t VAR_9;

 VAR_8 = FUNC_0(VAR_3 | VAR_2 | VAR_6);
 if (VAR_8 == ((void*)0))
  return -VAR_1;
 FUNC_4(VAR_8, 1);

 if (VAR_7.needs_dmar) {
  VAR_9 = FUNC_3(VAR_7.pcidev, VAR_8, 0,
        VAR_4, VAR_5);
  if (FUNC_2(VAR_7.pcidev, VAR_9))
   return -VAR_0;

  VAR_7.scratch_page_dma = VAR_9;
 } else
  VAR_7.scratch_page_dma = FUNC_1(VAR_8);

 VAR_7.scratch_page = VAR_8;

 return 0;
}
