
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {void* len0; void* len1; void* len2; void* len3; } ;
struct TYPE_4__ {TYPE_1__ s; } ;
struct sglist_component {void* ptr0; TYPE_2__ u; void* ptr1; void* ptr2; void* ptr3; } ;
struct pci_dev {int dev; } ;
struct cpt_vf {struct pci_dev* pdev; } ;
struct buf_ptr {scalar_t__ dma_addr; int size; int vptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,char*,...) ;
 scalar_t__ FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct cpt_vf *VAR_3, struct buf_ptr *VAR_4,
     int VAR_5, u8 *VAR_6)
{
 int VAR_7 = 0, VAR_8, VAR_9;
 int VAR_10;
 struct sglist_component *VAR_11 = ((void*)0);
 struct pci_dev *VAR_12 = VAR_3->pdev;

 if (FUNC_7(!VAR_4)) {
  FUNC_2(&VAR_12->dev, "Input List pointer is NULL\n");
  return -VAR_1;
 }

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  if (FUNC_6(VAR_4[VAR_8].vptr)) {
   VAR_4[VAR_8].dma_addr = FUNC_3(&VAR_12->dev,
         VAR_4[VAR_8].vptr,
         VAR_4[VAR_8].size,
         VAR_0);
   if (FUNC_7(FUNC_4(&VAR_12->dev,
             VAR_4[VAR_8].dma_addr))) {
    FUNC_2(&VAR_12->dev, "DMA map kernel buffer failed for component: %d\n",
     VAR_8);
    VAR_7 = -VAR_2;
    goto sg_cleanup;
   }
  }
 }

 VAR_10 = VAR_5 / 4;
 VAR_11 = (struct sglist_component *)VAR_6;
 for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
  VAR_11->u.s.len0 = FUNC_0(VAR_4[VAR_8 * 4 + 0].size);
  VAR_11->u.s.len1 = FUNC_0(VAR_4[VAR_8 * 4 + 1].size);
  VAR_11->u.s.len2 = FUNC_0(VAR_4[VAR_8 * 4 + 2].size);
  VAR_11->u.s.len3 = FUNC_0(VAR_4[VAR_8 * 4 + 3].size);
  VAR_11->ptr0 = FUNC_1(VAR_4[VAR_8 * 4 + 0].dma_addr);
  VAR_11->ptr1 = FUNC_1(VAR_4[VAR_8 * 4 + 1].dma_addr);
  VAR_11->ptr2 = FUNC_1(VAR_4[VAR_8 * 4 + 2].dma_addr);
  VAR_11->ptr3 = FUNC_1(VAR_4[VAR_8 * 4 + 3].dma_addr);
  VAR_11++;
 }

 VAR_10 = VAR_5 % 4;

 switch (VAR_10) {
 case 3:
  VAR_11->u.s.len2 = FUNC_0(VAR_4[VAR_8 * 4 + 2].size);
  VAR_11->ptr2 = FUNC_1(VAR_4[VAR_8 * 4 + 2].dma_addr);

 case 2:
  VAR_11->u.s.len1 = FUNC_0(VAR_4[VAR_8 * 4 + 1].size);
  VAR_11->ptr1 = FUNC_1(VAR_4[VAR_8 * 4 + 1].dma_addr);

 case 1:
  VAR_11->u.s.len0 = FUNC_0(VAR_4[VAR_8 * 4 + 0].size);
  VAR_11->ptr0 = FUNC_1(VAR_4[VAR_8 * 4 + 0].dma_addr);
  break;
 default:
  break;
 }

 return VAR_7;

sg_cleanup:
 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  if (VAR_4[VAR_9].dma_addr) {
   FUNC_5(&VAR_12->dev, VAR_4[VAR_8].dma_addr,
      VAR_4[VAR_8].size, VAR_0);
  }

  VAR_4[VAR_9].dma_addr = 0;
 }

 return VAR_7;
}
