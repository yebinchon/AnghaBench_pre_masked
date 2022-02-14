
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct hfi1_devdata {TYPE_1__* pcidev; } ;
struct TYPE_5__ {size_t alloced; TYPE_3__* buffers; TYPE_3__* rcvtids; } ;
struct hfi1_ctxtdata {void* rcvhdrq; TYPE_3__* opstats; int * subctxt_rcvhdr_base; int * subctxt_rcvegrbuf; int * subctxt_uregbase; int * sc; TYPE_2__ egrbufs; int * rcvhdrtail_kvaddr; scalar_t__ rcvhdrqtailaddr_dma; scalar_t__ rcvhdrq_dma; } ;
struct TYPE_6__ {void* addr; scalar_t__ dma; int len; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,void*,scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct hfi1_ctxtdata*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct hfi1_devdata *VAR_1, struct hfi1_ctxtdata *VAR_2)
{
 u32 VAR_3;

 if (!VAR_2)
  return;

 if (VAR_2->rcvhdrq) {
  FUNC_0(&VAR_1->pcidev->dev, FUNC_2(VAR_2),
      VAR_2->rcvhdrq, VAR_2->rcvhdrq_dma);
  VAR_2->rcvhdrq = ((void*)0);
  if (VAR_2->rcvhdrtail_kvaddr) {
   FUNC_0(&VAR_1->pcidev->dev, VAR_0,
       (void *)VAR_2->rcvhdrtail_kvaddr,
       VAR_2->rcvhdrqtailaddr_dma);
   VAR_2->rcvhdrtail_kvaddr = ((void*)0);
  }
 }


 FUNC_1(VAR_2->egrbufs.rcvtids);
 VAR_2->egrbufs.rcvtids = ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_2->egrbufs.alloced; VAR_3++) {
  if (VAR_2->egrbufs.buffers[VAR_3].dma)
   FUNC_0(&VAR_1->pcidev->dev,
       VAR_2->egrbufs.buffers[VAR_3].len,
       VAR_2->egrbufs.buffers[VAR_3].addr,
       VAR_2->egrbufs.buffers[VAR_3].dma);
 }
 FUNC_1(VAR_2->egrbufs.buffers);
 VAR_2->egrbufs.alloced = 0;
 VAR_2->egrbufs.buffers = ((void*)0);

 FUNC_3(VAR_2->sc);
 VAR_2->sc = ((void*)0);

 FUNC_4(VAR_2->subctxt_uregbase);
 FUNC_4(VAR_2->subctxt_rcvegrbuf);
 FUNC_4(VAR_2->subctxt_rcvhdr_base);
 FUNC_1(VAR_2->opstats);

 VAR_2->subctxt_uregbase = ((void*)0);
 VAR_2->subctxt_rcvegrbuf = ((void*)0);
 VAR_2->subctxt_rcvhdr_base = ((void*)0);
 VAR_2->opstats = ((void*)0);
}
