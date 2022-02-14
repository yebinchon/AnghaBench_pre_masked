
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u16 ;
struct hfi1_pportdata {int* statusp; int link_speed_enabled; int port; scalar_t__ linkup; } ;
struct hfi1_devdata {int do_drop; int num_pports; scalar_t__ first_dyn_alloc_ctxt; struct hfi1_pportdata* pport; TYPE_2__* status; void* events; scalar_t__ rcd; int rcvhdrtail_dummy_kvaddr; int rcvhdrtail_dummy_dma; TYPE_1__* pcidev; int drop_packet; int process_vnic_dma_send; int pio_inline_send; int process_dma_send; int process_pio_send; } ;
struct hfi1_ctxtdata {int * do_interrupt; } ;
struct TYPE_4__ {int port; int dev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long FUNC_0 (int) ;
 unsigned long VAR_7 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct hfi1_pportdata*) ;
 int FUNC_3 (struct hfi1_devdata*) ;
 int FUNC_4 (struct hfi1_devdata*,char*) ;
 int FUNC_5 (struct hfi1_devdata*,char*,int ) ;
 int FUNC_6 (int *,int,int *,int ) ;
 int FUNC_7 (struct hfi1_devdata*) ;
 int FUNC_8 (struct hfi1_devdata*) ;
 int VAR_8 ;
 int FUNC_9 (struct hfi1_devdata*,struct hfi1_ctxtdata*) ;
 int FUNC_10 (struct hfi1_ctxtdata*,int) ;
 struct hfi1_ctxtdata* FUNC_11 (struct hfi1_devdata*,scalar_t__) ;
 int FUNC_12 (struct hfi1_ctxtdata*) ;
 int FUNC_13 (struct hfi1_ctxtdata*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_14 (struct hfi1_devdata*) ;
 int FUNC_15 (struct hfi1_devdata*) ;
 scalar_t__ FUNC_16 (struct hfi1_devdata*) ;
 int FUNC_17 (struct hfi1_devdata*) ;
 int VAR_12 ;
 int FUNC_18 (struct hfi1_pportdata*) ;
 void* FUNC_19 (unsigned long) ;

int FUNC_20(struct hfi1_devdata *VAR_13, int VAR_14)
{
 int VAR_15 = 0, VAR_16, VAR_17 = 0;
 unsigned long VAR_18;
 u16 VAR_19;
 struct hfi1_ctxtdata *VAR_20;
 struct hfi1_pportdata *VAR_21;


 VAR_13->process_pio_send = VAR_10;
 VAR_13->process_dma_send = VAR_9;
 VAR_13->pio_inline_send = VAR_12;
 VAR_13->process_vnic_dma_send = VAR_11;

 if (FUNC_16(VAR_13)) {
  FUNC_1(&VAR_13->drop_packet, VAR_1);
  VAR_13->do_drop = 1;
 } else {
  FUNC_1(&VAR_13->drop_packet, VAR_0);
  VAR_13->do_drop = 0;
 }


 for (VAR_16 = 0; VAR_16 < VAR_13->num_pports; ++VAR_16) {
  VAR_21 = VAR_13->pport + VAR_16;
  VAR_21->linkup = 0;
 }

 if (VAR_14)
  VAR_15 = FUNC_14(VAR_13);
 else
  VAR_15 = FUNC_17(VAR_13);
 if (VAR_15)
  goto done;


 VAR_13->rcvhdrtail_dummy_kvaddr = FUNC_6(&VAR_13->pcidev->dev,
        sizeof(u64),
        &VAR_13->rcvhdrtail_dummy_dma,
        VAR_3);

 if (!VAR_13->rcvhdrtail_dummy_kvaddr) {
  FUNC_4(VAR_13, "cannot allocate dummy tail memory\n");
  VAR_15 = -VAR_2;
  goto done;
 }


 for (VAR_19 = 0; VAR_13->rcd && VAR_19 < VAR_13->first_dyn_alloc_ctxt; ++VAR_19) {






  VAR_20 = FUNC_11(VAR_13, VAR_19);
  if (!VAR_20)
   continue;

  VAR_20->do_interrupt = &VAR_8;

  VAR_17 = FUNC_9(VAR_13, VAR_20);
  if (!VAR_17)
   VAR_17 = FUNC_13(VAR_20);
  if (!VAR_17)
   VAR_17 = FUNC_10(VAR_20, VAR_14);
  if (VAR_17) {
   FUNC_4(VAR_13,
       "failed to allocate kernel ctxt's rcvhdrq and/or egr bufs\n");
   VAR_15 = VAR_17;
  }

  FUNC_12(VAR_20);
 }


 VAR_18 = FUNC_0(FUNC_3(VAR_13) * VAR_4 *
    sizeof(*VAR_13->events));
 VAR_13->events = FUNC_19(VAR_18);
 if (!VAR_13->events)
  FUNC_4(VAR_13, "Failed to allocate user events page\n");




 VAR_13->status = FUNC_19(VAR_7);
 if (!VAR_13->status)
  FUNC_4(VAR_13, "Failed to allocate dev status page\n");
 for (VAR_16 = 0; VAR_16 < VAR_13->num_pports; ++VAR_16) {
  VAR_21 = VAR_13->pport + VAR_16;
  if (VAR_13->status)

   VAR_21->statusp = &VAR_13->status->port;

  FUNC_18(VAR_21);
 }


 FUNC_7(VAR_13);

done:




 if (VAR_13->status)
  VAR_13->status->dev |= VAR_5 |
   VAR_6;
 if (!VAR_15) {

  FUNC_8(VAR_13);
  FUNC_15(VAR_13);


  for (VAR_16 = 0; VAR_16 < VAR_13->num_pports; ++VAR_16) {
   VAR_21 = VAR_13->pport + VAR_16;





   VAR_17 = FUNC_2(VAR_21);
   if (VAR_17)
    FUNC_5(VAR_13,
         "Failed to bring up port %u\n",
         VAR_21->port);





   if (VAR_21->statusp)
    *VAR_21->statusp |= VAR_5 |
       VAR_6;
   if (!VAR_21->link_speed_enabled)
    continue;
  }
 }


 return VAR_15;
}
