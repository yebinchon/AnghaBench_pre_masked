
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct hfi1_packet {scalar_t__ rhqoff; scalar_t__ rsize; int rhf; int * rhf_addr; } ;
struct hfi1_devdata {scalar_t__ do_drop; int drop_packet; } ;
struct hfi1_ctxtdata {scalar_t__ seq_cnt; int rhf_offset; scalar_t__ head; int ctxt; int flags; TYPE_1__* ppd; scalar_t__ rcvhdrq; struct hfi1_devdata* dd; } ;
typedef int __le32 ;
struct TYPE_2__ {scalar_t__ host_link_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (struct hfi1_devdata*,char*) ;
 int FUNC_3 (struct hfi1_packet*) ;
 scalar_t__ FUNC_4 (struct hfi1_ctxtdata*) ;
 int FUNC_5 (struct hfi1_ctxtdata*,struct hfi1_packet*) ;
 int FUNC_6 (struct hfi1_ctxtdata*,struct hfi1_packet*) ;
 int FUNC_7 (struct hfi1_packet*,int) ;
 int FUNC_8 (struct hfi1_packet*) ;
 int FUNC_9 (int,struct hfi1_packet*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (struct hfi1_ctxtdata*,struct hfi1_packet*,struct hfi1_devdata*) ;
 int FUNC_13 (struct hfi1_devdata*,int ) ;
 int FUNC_14 (struct hfi1_devdata*,int ) ;
 int FUNC_15 (struct hfi1_packet*,int) ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 (int) ;

int FUNC_18(struct hfi1_ctxtdata *VAR_7, int VAR_8)
{
 struct hfi1_devdata *VAR_9 = VAR_7->dd;
 u32 VAR_10;
 int VAR_11, VAR_12 = VAR_6;
 struct hfi1_packet VAR_13;
 int VAR_14 = 0;


 VAR_11 = (VAR_7->ctxt == VAR_3) ? 0 : 1;

 FUNC_5(VAR_7, &VAR_13);

 if (!FUNC_0(VAR_7->flags, VAR_0)) {
  u32 VAR_15 = FUNC_10(VAR_13.rhf);

  if (VAR_15 != VAR_7->seq_cnt) {
   VAR_12 = VAR_5;
   goto bail;
  }
  VAR_10 = 0;
 } else {
  VAR_10 = FUNC_4(VAR_7);
  if (VAR_13.rhqoff == VAR_10) {
   VAR_12 = VAR_5;
   goto bail;
  }
  FUNC_16();





  if (VAR_7->ctxt == VAR_3) {
   u32 VAR_16 = FUNC_10(VAR_13.rhf);

   if (VAR_16 != VAR_7->seq_cnt)
    VAR_14 = 1;
  }
 }

 FUNC_6(VAR_7, &VAR_13);

 while (VAR_12 == VAR_6) {
  if (FUNC_17(VAR_9->do_drop &&
        FUNC_1(&VAR_9->drop_packet, VAR_1) ==
        VAR_2)) {
   VAR_9->do_drop = 0;


   VAR_13.rhqoff += VAR_13.rsize;
   VAR_13.rhf_addr = (__le32 *)VAR_7->rcvhdrq +
       VAR_13.rhqoff +
       VAR_7->rhf_offset;
   VAR_13.rhf = FUNC_11(VAR_13.rhf_addr);

  } else if (VAR_14) {
   VAR_12 = FUNC_15(&VAR_13, VAR_8);
   VAR_14 = 0;
  } else {

   if (FUNC_17(VAR_7->ppd->host_link_state ==
         VAR_4) &&
       FUNC_12(VAR_7, &VAR_13, VAR_9))
    goto bail;
   VAR_12 = FUNC_7(&VAR_13, VAR_8);
  }

  if (!FUNC_0(VAR_7->flags, VAR_0)) {
   u32 VAR_17 = FUNC_10(VAR_13.rhf);

   if (++VAR_7->seq_cnt > 13)
    VAR_7->seq_cnt = 1;
   if (VAR_17 != VAR_7->seq_cnt)
    VAR_12 = VAR_5;
   if (VAR_11) {
    FUNC_2(VAR_9, "Switching to NO_DMA_RTAIL\n");
    FUNC_14(VAR_9, VAR_7->ctxt);
    VAR_11 = 0;
   }
  } else {
   if (VAR_13.rhqoff == VAR_10)
    VAR_12 = VAR_5;




   if (VAR_7->ctxt == VAR_3) {
    u32 VAR_18 = FUNC_10(VAR_13.rhf);

    if (++VAR_7->seq_cnt > 13)
     VAR_7->seq_cnt = 1;
    if (!VAR_12 && (VAR_18 != VAR_7->seq_cnt))
     VAR_14 = 1;
   }

   if (VAR_11) {
    FUNC_2(VAR_9,
         "Switching to DMA_RTAIL\n");
    FUNC_13(VAR_9, VAR_7->ctxt);
    VAR_11 = 0;
   }
  }

  FUNC_9(VAR_12, &VAR_13);
 }

 FUNC_8(&VAR_13);
 VAR_7->head = VAR_13.rhqoff;

bail:




 FUNC_3(&VAR_13);
 return VAR_12;
}
