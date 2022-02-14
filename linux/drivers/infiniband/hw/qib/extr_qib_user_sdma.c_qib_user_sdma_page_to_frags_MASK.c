
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union qib_seqnum {int val; int pkt; int seq; } ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct qib_user_sdma_queue {int dummy; } ;
struct qib_user_sdma_pkt {size_t tidsmidx; int payload_size; scalar_t__ frag_size; scalar_t__ bytes_togo; size_t naddr; size_t addrlimit; size_t index; size_t tidsmcount; scalar_t__ tiddma; TYPE_2__* tidsm; TYPE_1__* addr; } ;
struct TYPE_7__ {void* pkt_flags; void* chksum; int ver_ctxt_tid_offset; } ;
struct qib_message_header {int flags; int* uwords; void** bth; TYPE_3__ iph; void** lrh; } ;
struct qib_devdata {TYPE_4__* pcidev; } ;
struct page {int dummy; } ;
typedef void* dma_addr_t ;
typedef void* __le16 ;
struct TYPE_8__ {int dev; } ;
struct TYPE_6__ {scalar_t__ length; int offset; int tid; } ;
struct TYPE_5__ {int dma_mapped; scalar_t__ length; void* addr; int dma_length; scalar_t__ kvaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int) ;
 void* FUNC_7 (int *,struct page*,scalar_t__,scalar_t__,int ) ;
 void* FUNC_8 (int *,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_9 (int *,void*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (void*,void**,scalar_t__) ;
 int FUNC_14 (struct page*) ;
 void* FUNC_15 (struct qib_user_sdma_queue*,scalar_t__,void**) ;
 int FUNC_16 (struct qib_user_sdma_pkt*,size_t,scalar_t__,scalar_t__,int,scalar_t__,scalar_t__,scalar_t__,struct page*,void*,void*,scalar_t__) ;

__attribute__((used)) static int FUNC_17(const struct qib_devdata *VAR_5,
           struct qib_user_sdma_queue *VAR_6,
           struct qib_user_sdma_pkt *VAR_7,
           struct page *VAR_8, u16 VAR_9,
           u16 VAR_10, u16 VAR_11, void *VAR_12)
{
 __le16 *VAR_13;
 void *VAR_14;
 struct qib_message_header *VAR_15;
 u16 VAR_16, VAR_17, VAR_18, VAR_19;
 u32 VAR_20;
 union qib_seqnum VAR_21;
 dma_addr_t VAR_22;
 dma_addr_t VAR_23 =
  FUNC_7(&VAR_5->pcidev->dev,
   VAR_8, VAR_10, VAR_11, VAR_0);
 int VAR_24 = 0;

 if (FUNC_9(&VAR_5->pcidev->dev, VAR_23)) {





  if (VAR_9) {
   FUNC_14(VAR_8);
  } else {

   FUNC_10(VAR_8);
   FUNC_0(VAR_8);
  }
  VAR_24 = -VAR_2;
  goto done;
 }
 VAR_10 = 0;
 VAR_19 = 1;


next_fragment:





 if (VAR_7->tiddma && VAR_11 > VAR_7->tidsm[VAR_7->tidsmidx].length)
  VAR_16 = VAR_7->tidsm[VAR_7->tidsmidx].length;
 else
  VAR_16 = VAR_11;
 VAR_18 = 0;
 if ((VAR_7->payload_size + VAR_16) >= VAR_7->frag_size) {
  VAR_16 = VAR_7->frag_size - VAR_7->payload_size;
  VAR_18 = 1;
 } else if (VAR_7->tiddma) {
  if (VAR_16 == VAR_7->tidsm[VAR_7->tidsmidx].length)
   VAR_18 = 1;
 } else {
  if (VAR_16 == VAR_7->bytes_togo)
   VAR_18 = 1;
 }


 FUNC_16(VAR_7, VAR_7->naddr,
  VAR_10, VAR_16,
  0, VAR_18,
  VAR_9, VAR_19,
  VAR_8, VAR_12,
  VAR_23, VAR_11);
 VAR_7->bytes_togo -= VAR_16;
 VAR_7->payload_size += VAR_16;
 VAR_7->naddr++;
 if (VAR_7->naddr == VAR_7->addrlimit) {
  VAR_24 = -VAR_1;
  goto done;
 }


 if (VAR_7->bytes_togo == 0) {


  if (!VAR_7->addr[VAR_7->index].addr) {
   VAR_7->addr[VAR_7->index].addr =
    FUNC_8(&VAR_5->pcidev->dev,
     VAR_7->addr[VAR_7->index].kvaddr,
     VAR_7->addr[VAR_7->index].dma_length,
     VAR_0);
   if (FUNC_9(&VAR_5->pcidev->dev,
     VAR_7->addr[VAR_7->index].addr)) {
    VAR_24 = -VAR_2;
    goto done;
   }
   VAR_7->addr[VAR_7->index].dma_mapped = 1;
  }

  goto done;
 }


 if (VAR_7->tiddma) {
  VAR_7->tidsm[VAR_7->tidsmidx].length -= VAR_16;
  if (VAR_7->tidsm[VAR_7->tidsmidx].length) {
   VAR_7->tidsm[VAR_7->tidsmidx].offset += VAR_16;
  } else {
   VAR_7->tidsmidx++;
   if (VAR_7->tidsmidx == VAR_7->tidsmcount) {
    VAR_24 = -VAR_1;
    goto done;
   }
  }
 }






 if (VAR_18 == 0)
  goto done;
 VAR_17 = VAR_7->addr[VAR_7->index].length;
 VAR_14 = FUNC_15(VAR_6, VAR_17, &VAR_22);
 if (!VAR_14) {
  VAR_24 = -VAR_2;
  goto done;
 }

 VAR_13 = (__le16 *)VAR_7->addr[VAR_7->index].kvaddr;
 FUNC_13(VAR_14, VAR_13, VAR_17);


 VAR_15 = (struct qib_message_header *)&VAR_13[4];


 VAR_13[0] = FUNC_5(FUNC_11(VAR_13[0])-(VAR_7->bytes_togo>>2));


 VAR_15->lrh[2] = FUNC_3(FUNC_11(VAR_13[0]));

 if (VAR_7->tiddma) {

  VAR_15->iph.pkt_flags =
   FUNC_5(FUNC_11(VAR_15->iph.pkt_flags)|0x2);

  VAR_15->flags &= ~(0x04|0x20);
 } else {

  VAR_15->bth[0] = FUNC_4(FUNC_2(VAR_15->bth[0])&0xFFCFFFFF);

  VAR_15->flags &= ~(0x04);
 }


 VAR_20 = FUNC_12(VAR_15->iph.ver_ctxt_tid_offset);
 VAR_15->iph.chksum = FUNC_5(VAR_3 +
  FUNC_1(VAR_15->lrh[2]) -
  ((VAR_20>>16)&0xFFFF) - (VAR_20&0xFFFF) -
  FUNC_11(VAR_15->iph.pkt_flags));



 if (!VAR_7->addr[VAR_7->index].addr) {
  VAR_7->addr[VAR_7->index].addr =
   FUNC_8(&VAR_5->pcidev->dev,
    VAR_7->addr[VAR_7->index].kvaddr,
    VAR_7->addr[VAR_7->index].dma_length,
    VAR_0);
  if (FUNC_9(&VAR_5->pcidev->dev,
    VAR_7->addr[VAR_7->index].addr)) {
   VAR_24 = -VAR_2;
   goto done;
  }
  VAR_7->addr[VAR_7->index].dma_mapped = 1;
 }


 VAR_13 = (__le16 *)VAR_14;
 VAR_15 = (struct qib_message_header *)&VAR_13[4];


 VAR_13[0] = FUNC_5(FUNC_11(VAR_13[0])-(VAR_7->payload_size>>2));


 VAR_15->lrh[2] = FUNC_3(FUNC_11(VAR_13[0]));

 if (VAR_7->tiddma) {

  VAR_15->iph.ver_ctxt_tid_offset = FUNC_6(
   (FUNC_12(VAR_15->iph.ver_ctxt_tid_offset)&0xFF000000) +
   (VAR_7->tidsm[VAR_7->tidsmidx].tid<<VAR_4) +
   (VAR_7->tidsm[VAR_7->tidsmidx].offset>>2));
 } else {

  VAR_15->uwords[2] += VAR_7->payload_size;
 }


 VAR_20 = FUNC_12(VAR_15->iph.ver_ctxt_tid_offset);
 VAR_15->iph.chksum = FUNC_5(VAR_3 +
  FUNC_1(VAR_15->lrh[2]) -
  ((VAR_20>>16)&0xFFFF) - (VAR_20&0xFFFF) -
  FUNC_11(VAR_15->iph.pkt_flags));


 VAR_21.val = FUNC_2(VAR_15->bth[2]);
 if (VAR_7->tiddma)
  VAR_21.seq++;
 else
  VAR_21.pkt++;
 VAR_15->bth[2] = FUNC_4(VAR_21.val);


 FUNC_16(VAR_7, VAR_7->naddr,
  0, VAR_17,
  1, 0,
  0, 0,
  ((void*)0), VAR_14,
  VAR_22, VAR_17);
 VAR_7->index = VAR_7->naddr;
 VAR_7->payload_size = 0;
 VAR_7->naddr++;
 if (VAR_7->naddr == VAR_7->addrlimit) {
  VAR_24 = -VAR_1;
  goto done;
 }


 if (VAR_16 != VAR_11) {
  if (VAR_19) {
   VAR_9 = 0;
   VAR_19 = 0;
   VAR_8 = ((void*)0);
   VAR_12 = ((void*)0);
  }
  VAR_11 -= VAR_16;
  VAR_10 += VAR_16;

  goto next_fragment;
 }

done:
 return VAR_24;
}
