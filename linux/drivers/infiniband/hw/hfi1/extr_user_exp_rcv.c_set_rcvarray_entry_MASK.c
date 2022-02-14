
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct tid_user_buf {scalar_t__ vaddr; struct page** pages; } ;
struct TYPE_5__ {unsigned int len; scalar_t__ addr; } ;
struct tid_rb_node {unsigned int npages; int freed; int phys; TYPE_1__ mmu; int rcventry; int pages; struct tid_group* grp; int dma_addr; } ;
struct tid_group {int dummy; } ;
struct page {int dummy; } ;
struct hfi1_filedata {int subctxt; int handler; struct hfi1_ctxtdata* uctxt; } ;
struct hfi1_devdata {TYPE_2__* pcidev; } ;
struct hfi1_ctxtdata {int ctxt; struct hfi1_devdata* dd; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hfi1_devdata*,char*,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,char*,int ,scalar_t__,int ,int) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (struct hfi1_devdata*,int ,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (unsigned int) ;
 int FUNC_7 (struct tid_rb_node*) ;
 struct tid_rb_node* FUNC_8 (int,int ) ;
 int FUNC_9 (int ,struct page**,int) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (TYPE_2__*,int ,unsigned int,int ) ;
 int FUNC_12 (TYPE_2__*,int ,unsigned int,int ) ;
 int FUNC_13 (struct hfi1_filedata*,TYPE_1__*) ;
 int FUNC_14 (int ,int ,int ,unsigned int,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_15(struct hfi1_filedata *VAR_7,
         struct tid_user_buf *VAR_8,
         u32 VAR_9, struct tid_group *VAR_10,
         u16 VAR_11, unsigned int VAR_12)
{
 int VAR_13;
 struct hfi1_ctxtdata *VAR_14 = VAR_7->uctxt;
 struct tid_rb_node *VAR_15;
 struct hfi1_devdata *VAR_16 = VAR_14->dd;
 dma_addr_t VAR_17;
 struct page **VAR_18 = VAR_8->pages + VAR_11;





 VAR_15 = FUNC_8(sizeof(*VAR_15) + (sizeof(struct page *) * VAR_12),
         VAR_2);
 if (!VAR_15)
  return -VAR_1;

 VAR_17 = FUNC_11(VAR_16->pcidev,
         FUNC_0(FUNC_10(VAR_18[0])),
         VAR_12 * VAR_3, VAR_4);
 if (FUNC_2(&VAR_16->pcidev->dev, VAR_17)) {
  FUNC_1(VAR_16, "Failed to DMA map Exp Rcv pages 0x%llx\n",
      VAR_17);
  FUNC_7(VAR_15);
  return -VAR_0;
 }

 VAR_15->mmu.addr = VAR_8->vaddr + (VAR_11 * VAR_3);
 VAR_15->mmu.len = VAR_12 * VAR_3;
 VAR_15->phys = FUNC_10(VAR_18[0]);
 VAR_15->npages = VAR_12;
 VAR_15->rcventry = VAR_9;
 VAR_15->dma_addr = VAR_17;
 VAR_15->grp = VAR_10;
 VAR_15->freed = 0;
 FUNC_9(VAR_15->pages, VAR_18, sizeof(struct page *) * VAR_12);

 if (!VAR_7->handler)
  VAR_13 = FUNC_13(VAR_7, &VAR_15->mmu);
 else
  VAR_13 = FUNC_4(VAR_7->handler, &VAR_15->mmu);

 if (VAR_13) {
  FUNC_3(VAR_6, "Failed to insert RB node %u 0x%lx, 0x%lx %d",
     VAR_15->rcventry, VAR_15->mmu.addr, VAR_15->phys, VAR_13);
  FUNC_12(VAR_16->pcidev, VAR_17, VAR_12 * VAR_3,
     VAR_4);
  FUNC_7(VAR_15);
  return -VAR_0;
 }
 FUNC_5(VAR_16, VAR_9, VAR_5, VAR_17, FUNC_6(VAR_12) + 1);
 FUNC_14(VAR_14->ctxt, VAR_7->subctxt, VAR_9, VAR_12,
          VAR_15->mmu.addr, VAR_15->phys, VAR_17);
 return 0;
}
