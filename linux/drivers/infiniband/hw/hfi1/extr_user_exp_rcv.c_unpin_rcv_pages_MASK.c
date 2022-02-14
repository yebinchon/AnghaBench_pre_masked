
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tid_user_buf {struct page** pages; } ;
struct TYPE_3__ {int len; } ;
struct tid_rb_node {struct page** pages; TYPE_1__ mmu; int dma_addr; } ;
struct page {int dummy; } ;
struct hfi1_filedata {unsigned int tid_n_pinned; int mm; TYPE_2__* uctxt; } ;
struct hfi1_devdata {int pcidev; } ;
struct TYPE_4__ {struct hfi1_devdata* dd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct page**,unsigned int,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct hfi1_filedata *VAR_1,
       struct tid_user_buf *VAR_2,
       struct tid_rb_node *VAR_3,
       unsigned int VAR_4,
       unsigned int VAR_5,
       bool VAR_6)
{
 struct page **VAR_7;
 struct hfi1_devdata *VAR_8 = VAR_1->uctxt->dd;

 if (VAR_6) {
  FUNC_1(VAR_8->pcidev, VAR_3->dma_addr,
     VAR_3->mmu.len, VAR_0);
  VAR_7 = &VAR_3->pages[VAR_4];
 } else {
  VAR_7 = &VAR_2->pages[VAR_4];
 }
 FUNC_0(VAR_1->mm, VAR_7, VAR_5, VAR_6);
 VAR_1->tid_n_pinned -= VAR_5;
}
