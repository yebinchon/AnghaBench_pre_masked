
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qib_devdata {int rcvhdrcnt; int rcvhdrentsize; int flags; TYPE_1__* pcidev; int first_user_ctxt; } ;
struct qib_ctxtdata {int node_id; unsigned int rcvhdrq_size; int * rcvhdrq; int rcvhdrq_phys; int * user_event_mask; int ctxt; int * rcvhdrtail_kvaddr; int rcvhdrqtailaddr_phys; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 unsigned int FUNC_0 (int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *,unsigned int,int *,int) ;
 int FUNC_3 (int *,unsigned int,int *,int ) ;
 int FUNC_4 (int *,int ,unsigned int) ;
 int FUNC_5 (struct qib_devdata*,char*,unsigned int,...) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (unsigned int) ;

int FUNC_9(struct qib_devdata *VAR_6, struct qib_ctxtdata *VAR_7)
{
 unsigned VAR_8;
 int VAR_9;

 if (!VAR_7->rcvhdrq) {
  dma_addr_t VAR_10;
  gfp_t VAR_11;

  VAR_8 = FUNC_0(VAR_6->rcvhdrcnt * VAR_6->rcvhdrentsize *
       sizeof(u32), VAR_3);
  VAR_11 = (VAR_7->ctxt >= VAR_6->first_user_ctxt) ?
   VAR_2 : VAR_1;

  VAR_9 = FUNC_1(&VAR_6->pcidev->dev);
  FUNC_6(&VAR_6->pcidev->dev, VAR_7->node_id);
  VAR_7->rcvhdrq = FUNC_2(
   &VAR_6->pcidev->dev, VAR_8, &VAR_7->rcvhdrq_phys,
   VAR_11 | VAR_5);
  FUNC_6(&VAR_6->pcidev->dev, VAR_9);

  if (!VAR_7->rcvhdrq) {
   FUNC_5(VAR_6,
    "attempt to allocate %d bytes for ctxt %u rcvhdrq failed\n",
    VAR_8, VAR_7->ctxt);
   goto bail;
  }

  if (VAR_7->ctxt >= VAR_6->first_user_ctxt) {
   VAR_7->user_event_mask = FUNC_8(VAR_3);
   if (!VAR_7->user_event_mask)
    goto bail_free_hdrq;
  }

  if (!(VAR_6->flags & VAR_4)) {
   FUNC_6(&VAR_6->pcidev->dev, VAR_7->node_id);
   VAR_7->rcvhdrtail_kvaddr = FUNC_2(
    &VAR_6->pcidev->dev, VAR_3, &VAR_10,
    VAR_11);
   FUNC_6(&VAR_6->pcidev->dev, VAR_9);
   if (!VAR_7->rcvhdrtail_kvaddr)
    goto bail_free;
   VAR_7->rcvhdrqtailaddr_phys = VAR_10;
  }

  VAR_7->rcvhdrq_size = VAR_8;
 }


 FUNC_4(VAR_7->rcvhdrq, 0, VAR_7->rcvhdrq_size);
 if (VAR_7->rcvhdrtail_kvaddr)
  FUNC_4(VAR_7->rcvhdrtail_kvaddr, 0, VAR_3);
 return 0;

bail_free:
 FUNC_5(VAR_6,
  "attempt to allocate 1 page for ctxt %u rcvhdrqtailaddr failed\n",
  VAR_7->ctxt);
 FUNC_7(VAR_7->user_event_mask);
 VAR_7->user_event_mask = ((void*)0);
bail_free_hdrq:
 FUNC_3(&VAR_6->pcidev->dev, VAR_8, VAR_7->rcvhdrq,
     VAR_7->rcvhdrq_phys);
 VAR_7->rcvhdrq = ((void*)0);
bail:
 return -VAR_0;
}
