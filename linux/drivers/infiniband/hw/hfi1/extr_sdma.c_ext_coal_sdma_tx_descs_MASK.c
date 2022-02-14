
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sdma_txreq {int coalesce_buf; int coalesce_idx; int tlen; int packet_len; int desc_limit; } ;
struct page {int dummy; } ;
struct hfi1_devdata {TYPE_1__* pcidev; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct hfi1_devdata*,struct sdma_txreq*) ;
 int FUNC_2 (struct hfi1_devdata*,struct sdma_txreq*) ;
 int FUNC_3 (struct hfi1_devdata*,int ,struct sdma_txreq*,int ,int) ;
 int FUNC_4 (int *,int,int,int ) ;
 int FUNC_5 (int *,int ) ;
 void* FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (int,void*,int) ;
 int FUNC_9 (int,int ,int) ;
 scalar_t__ FUNC_10 (int ) ;

int FUNC_11(struct hfi1_devdata *VAR_7, struct sdma_txreq *VAR_8,
      int VAR_9, void *VAR_10, struct page *VAR_11,
      unsigned long VAR_12, u16 VAR_13)
{
 int VAR_14, VAR_15;
 dma_addr_t VAR_16;

 VAR_15 = FUNC_2(VAR_7, VAR_8);
 if (VAR_15) {
  FUNC_1(VAR_7, VAR_8);
  return VAR_15;
 }


 if (VAR_8->coalesce_buf) {
  if (VAR_9 == VAR_4) {
   FUNC_1(VAR_7, VAR_8);
   return -VAR_1;
  }

  if (VAR_9 == VAR_5) {
   VAR_10 = FUNC_6(VAR_11);
   VAR_10 += VAR_12;
  } else if (FUNC_0(!VAR_10)) {
   FUNC_1(VAR_7, VAR_8);
   return -VAR_1;
  }

  FUNC_8(VAR_8->coalesce_buf + VAR_8->coalesce_idx, VAR_10, VAR_13);
  VAR_8->coalesce_idx += VAR_13;
  if (VAR_9 == VAR_5)
   FUNC_7(VAR_11);


  if (VAR_8->tlen - VAR_8->coalesce_idx)
   return 0;


  VAR_14 = VAR_8->packet_len & (sizeof(u32) - 1);
  if (VAR_14) {
   VAR_14 = sizeof(u32) - VAR_14;
   FUNC_9(VAR_8->coalesce_buf + VAR_8->coalesce_idx, 0, VAR_14);

   VAR_8->packet_len += VAR_14;
   VAR_8->tlen += VAR_14;
  }


  VAR_16 = FUNC_4(&VAR_7->pcidev->dev,
          VAR_8->coalesce_buf,
          VAR_8->tlen,
          VAR_0);

  if (FUNC_10(FUNC_5(&VAR_7->pcidev->dev, VAR_16))) {
   FUNC_1(VAR_7, VAR_8);
   return -VAR_2;
  }


  VAR_8->desc_limit = VAR_3;
  return FUNC_3(VAR_7, VAR_6, VAR_8,
      VAR_16, VAR_8->tlen);
 }

 return 1;
}
