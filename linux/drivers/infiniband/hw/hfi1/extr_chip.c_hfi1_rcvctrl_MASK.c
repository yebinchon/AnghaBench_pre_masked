
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u16 ;
struct hfi1_devdata {int rcvhdrtail_dummy_dma; scalar_t__ rcv_intr_timeout_csr; } ;
struct TYPE_2__ {int alloced; int rcvtid_size; } ;
struct hfi1_ctxtdata {scalar_t__ ctxt; int rcvhdrq_dma; int rcvhdrqtailaddr_dma; int seq_cnt; int eager_base; int expected_count; int expected_base; scalar_t__ rcvavail_timeout; scalar_t__ rcvhdrtail_kvaddr; TYPE_1__ egrbufs; int rcvhdrq; scalar_t__ head; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int FUNC_0 (struct hfi1_devdata*,char*,scalar_t__,int,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,scalar_t__,int) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ VAR_51 ;
 int FUNC_4 (struct hfi1_ctxtdata*) ;
 int FUNC_5 (struct hfi1_devdata*,scalar_t__,int ) ;
 int FUNC_6 (struct hfi1_devdata*,scalar_t__,int ) ;
 int FUNC_7 (struct hfi1_devdata*,scalar_t__,scalar_t__,int) ;
 int FUNC_8 (struct hfi1_devdata*,int ,scalar_t__) ;
 int FUNC_9 (struct hfi1_devdata*,scalar_t__,int ,int) ;
 int FUNC_10 (struct hfi1_devdata*,scalar_t__,int ,int) ;

void FUNC_11(struct hfi1_devdata *VAR_52, unsigned int VAR_53,
    struct hfi1_ctxtdata *VAR_54)
{
 u64 VAR_55, VAR_56;
 int VAR_57 = 0;
 u16 VAR_58;

 if (!VAR_54)
  return;

 VAR_58 = VAR_54->ctxt;

 FUNC_2(VAR_19, "ctxt %d op 0x%x", VAR_58, VAR_53);

 VAR_55 = FUNC_5(VAR_52, VAR_58, VAR_22);

 if ((VAR_53 & VAR_2) &&
     !(VAR_55 & VAR_28)) {

  FUNC_9(VAR_52, VAR_58, VAR_40,
    VAR_54->rcvhdrq_dma);
  if (VAR_54->rcvhdrtail_kvaddr)
   FUNC_9(VAR_52, VAR_58, VAR_43,
     VAR_54->rcvhdrqtailaddr_dma);
  VAR_54->seq_cnt = 1;


  VAR_54->head = 0;







  FUNC_3(VAR_54->rcvhdrq, 0, FUNC_4(VAR_54));


  VAR_54->rcvavail_timeout = VAR_52->rcv_intr_timeout_csr;


  VAR_55 |= VAR_28;


  VAR_55 &= ~VAR_27;
  VAR_55 |= ((u64)FUNC_1(VAR_54->egrbufs.rcvtid_size)
    & VAR_25)
     << VAR_26;


  FUNC_10(VAR_52, VAR_58, VAR_41, 0);
  VAR_57 = 1;


  FUNC_10(VAR_52, VAR_58, VAR_39, 0);


  VAR_56 = (((u64)(VAR_54->egrbufs.alloced >> VAR_44)
   & VAR_37)
         << VAR_38) |
   (((VAR_54->eager_base >> VAR_44)
     & VAR_35)
    << VAR_36);
  FUNC_9(VAR_52, VAR_58, VAR_34, VAR_56);







  VAR_56 = (((VAR_54->expected_count >> VAR_44)
     & VAR_48)
    << VAR_49) |
        (((VAR_54->expected_base >> VAR_44)
     & VAR_46)
    << VAR_47);
  FUNC_9(VAR_52, VAR_58, VAR_45, VAR_56);
  if (VAR_58 == VAR_0)
   FUNC_8(VAR_52, VAR_50, VAR_0);
 }
 if (VAR_53 & VAR_1) {
  FUNC_8(VAR_52, VAR_50, 0);





  if (VAR_52->rcvhdrtail_dummy_dma) {
   FUNC_9(VAR_52, VAR_58, VAR_43,
     VAR_52->rcvhdrtail_dummy_dma);

   VAR_55 |= VAR_31;
  }

  VAR_55 &= ~VAR_28;
 }
 if (VAR_53 & VAR_4) {
  FUNC_7(VAR_52, VAR_17 + VAR_54->ctxt,
         VAR_17 + VAR_54->ctxt, 1);
  VAR_55 |= VAR_29;
 }
 if (VAR_53 & VAR_3) {
  FUNC_7(VAR_52, VAR_17 + VAR_54->ctxt,
         VAR_17 + VAR_54->ctxt, 0);
  VAR_55 &= ~VAR_29;
 }
 if ((VAR_53 & VAR_12) && VAR_54->rcvhdrtail_kvaddr)
  VAR_55 |= VAR_31;
 if (VAR_53 & VAR_11) {

  if (!(VAR_53 & VAR_1))
   VAR_55 &= ~VAR_31;
 }
 if (VAR_53 & VAR_14)
  VAR_55 |= VAR_32;
 if (VAR_53 & VAR_13)
  VAR_55 &= ~VAR_32;
 if (VAR_53 & VAR_10) {




  VAR_55 &= ~VAR_27;
  VAR_55 |= VAR_30;
 }
 if (VAR_53 & VAR_9)
  VAR_55 &= ~VAR_30;
 if (VAR_53 & VAR_8)
  VAR_55 |= VAR_24;
 if (VAR_53 & VAR_7)
  VAR_55 &= ~VAR_24;
 if (VAR_53 & VAR_6)
  VAR_55 |= VAR_23;
 if (VAR_53 & VAR_5)
  VAR_55 &= ~VAR_23;
 if (VAR_53 & VAR_16)
  FUNC_7(VAR_52, VAR_18 + VAR_54->ctxt,
         VAR_18 + VAR_54->ctxt, 1);
 if (VAR_53 & VAR_15)
  FUNC_7(VAR_52, VAR_18 + VAR_54->ctxt,
         VAR_18 + VAR_54->ctxt, 0);

 FUNC_2(VAR_19, "ctxt %d rcvctrl 0x%llx\n", VAR_58, VAR_55);
 FUNC_9(VAR_52, VAR_58, VAR_22, VAR_55);


 if (VAR_57 &&
     (VAR_55 & VAR_24)) {
  VAR_56 = FUNC_5(VAR_52, VAR_58, VAR_33);
  if (VAR_56 != 0) {
   FUNC_0(VAR_52, "ctxt %d status %lld (blocked)\n",
        VAR_58, VAR_56);
   FUNC_6(VAR_52, VAR_58, VAR_41);
   FUNC_10(VAR_52, VAR_58, VAR_41, 0x10);
   FUNC_10(VAR_52, VAR_58, VAR_41, 0x00);
   FUNC_6(VAR_52, VAR_58, VAR_41);
   VAR_56 = FUNC_5(VAR_52, VAR_58, VAR_33);
   FUNC_0(VAR_52, "ctxt %d status %lld (%s blocked)\n",
        VAR_58, VAR_56, VAR_56 == 0 ? "not" : "still");
  }
 }

 if (VAR_57) {





  FUNC_9(VAR_52, VAR_58, VAR_20,
    (u64)VAR_54->rcvavail_timeout <<
    VAR_21);


  VAR_56 = (u64)VAR_51 << VAR_42;
  FUNC_10(VAR_52, VAR_58, VAR_41, VAR_56);
 }

 if (VAR_53 & (VAR_11 | VAR_1))





  FUNC_9(VAR_52, VAR_58, VAR_43,
    VAR_52->rcvhdrtail_dummy_dma);
}
