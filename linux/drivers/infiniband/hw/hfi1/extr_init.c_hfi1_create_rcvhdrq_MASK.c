
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct hfi1_devdata {int rcvhdrtail_dummy_dma; TYPE_1__* pcidev; int first_dyn_alloc_ctxt; } ;
struct hfi1_ctxtdata {int rcvhdrq_cnt; int * rcvhdrq; int rcvhdrq_dma; int ctxt; int rcvhdrqentsize; void* rcvhdrtail_kvaddr; int rcvhdrqtailaddr_dma; int flags; scalar_t__ is_vnic; } ;
typedef int gfp_t ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (struct hfi1_devdata*,char*,unsigned int,...) ;
 void* FUNC_3 (int *,unsigned int,int *,int) ;
 int FUNC_4 (int *,unsigned int,int *,int ) ;
 int FUNC_5 (int ) ;
 unsigned int FUNC_6 (struct hfi1_ctxtdata*) ;
 int FUNC_7 (struct hfi1_devdata*,int ,int ,int) ;

int FUNC_8(struct hfi1_devdata *VAR_18, struct hfi1_ctxtdata *VAR_19)
{
 unsigned VAR_20;
 u64 VAR_21;

 if (!VAR_19->rcvhdrq) {
  gfp_t VAR_22;

  VAR_20 = FUNC_6(VAR_19);

  if (VAR_19->ctxt < VAR_18->first_dyn_alloc_ctxt || VAR_19->is_vnic)
   VAR_22 = VAR_3;
  else
   VAR_22 = VAR_4;
  VAR_19->rcvhdrq = FUNC_3(&VAR_18->pcidev->dev, VAR_20,
        &VAR_19->rcvhdrq_dma,
        VAR_22 | VAR_17);

  if (!VAR_19->rcvhdrq) {
   FUNC_2(VAR_18,
       "attempt to allocate %d bytes for ctxt %u rcvhdrq failed\n",
       VAR_20, VAR_19->ctxt);
   goto bail;
  }

  if (FUNC_0(VAR_19->flags, VAR_1) ||
      FUNC_1(VAR_19->flags, VAR_1)) {
   VAR_19->rcvhdrtail_kvaddr = FUNC_3(&VAR_18->pcidev->dev,
            VAR_6,
            &VAR_19->rcvhdrqtailaddr_dma,
            VAR_22);
   if (!VAR_19->rcvhdrtail_kvaddr)
    goto bail_free;
  }
 }






 VAR_21 = ((u64)(VAR_19->rcvhdrq_cnt >> VAR_5)
   & VAR_8)
  << VAR_9;
 FUNC_7(VAR_18, VAR_19->ctxt, VAR_7, VAR_21);
 VAR_21 = (FUNC_5(VAR_19->rcvhdrqentsize)
   & VAR_11)
  << VAR_12;
 FUNC_7(VAR_18, VAR_19->ctxt, VAR_10, VAR_21);
 VAR_21 = ((u64)VAR_0 & VAR_14)
  << VAR_15;
 FUNC_7(VAR_18, VAR_19->ctxt, VAR_13, VAR_21);





 FUNC_7(VAR_18, VAR_19->ctxt, VAR_16,
   VAR_18->rcvhdrtail_dummy_dma);

 return 0;

bail_free:
 FUNC_2(VAR_18,
     "attempt to allocate 1 page for ctxt %u rcvhdrqtailaddr failed\n",
     VAR_19->ctxt);
 FUNC_4(&VAR_18->pcidev->dev, VAR_20, VAR_19->rcvhdrq,
     VAR_19->rcvhdrq_dma);
 VAR_19->rcvhdrq = ((void*)0);
bail:
 return -VAR_2;
}
