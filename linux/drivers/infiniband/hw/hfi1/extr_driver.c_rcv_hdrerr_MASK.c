
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_7__ {int qp_type; } ;
struct rvt_qp {size_t state; int remote_qpn; TYPE_3__ ibqp; int r_lock; } ;
struct rvt_dev_info {int dummy; } ;
struct ib_grh {scalar_t__ next_hdr; int version_tclass_flow; } ;
struct TYPE_5__ {struct ib_grh grh; int oth; } ;
struct TYPE_6__ {TYPE_1__ l; int oth; } ;
struct ib_header {TYPE_2__ u; } ;
struct hfi1_pportdata {struct hfi1_devdata* dd; } ;
struct hfi1_packet {int rhf; scalar_t__ etype; int * ohdr; void* ebuf; struct ib_grh* grh; struct ib_header* hdr; } ;
struct TYPE_8__ {int n_pkt_drops; } ;
struct hfi1_ibport {scalar_t__* sc_to_sl; TYPE_4__ rvp; } ;
struct hfi1_ibdev {struct rvt_dev_info rdi; } ;
struct hfi1_devdata {struct hfi1_ibdev verbs_dev; } ;
struct hfi1_ctxtdata {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;



 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;

 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct ib_header*,int) ;
 scalar_t__ FUNC_3 (struct hfi1_ibdev*) ;
 int FUNC_4 (struct hfi1_ctxtdata*,struct hfi1_packet*,struct rvt_qp*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ib_header*) ;
 scalar_t__ FUNC_8 (struct ib_header*) ;
 int FUNC_9 (struct ib_header*) ;
 int* VAR_15 ;
 int FUNC_10 (struct hfi1_pportdata*,scalar_t__,int ,int,int,scalar_t__) ;
 struct hfi1_ibport* FUNC_11 (struct hfi1_ctxtdata*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 struct rvt_qp* FUNC_17 (struct rvt_dev_info*,TYPE_4__*,int) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_20(struct hfi1_ctxtdata *VAR_16, struct hfi1_pportdata *VAR_17,
         struct hfi1_packet *VAR_18)
{
 struct ib_header *VAR_19 = VAR_18->hdr;
 u32 VAR_20 = FUNC_15(VAR_18->rhf);
 u32 VAR_21;
 struct hfi1_ibport *VAR_22 = FUNC_11(VAR_16);
 struct hfi1_devdata *VAR_23 = VAR_17->dd;
 struct hfi1_ibdev *VAR_24 = &VAR_23->verbs_dev;
 struct rvt_dev_info *VAR_25 = &VAR_24->rdi;

 if ((VAR_18->rhf & VAR_9) &&
     FUNC_3(VAR_24))
  return;

 if (VAR_18->rhf & VAR_10)
  return;

 if (VAR_18->etype == VAR_11) {
  goto drop;
 } else {
  u8 VAR_26 = FUNC_8(VAR_19);

  VAR_21 = FUNC_0(VAR_7);
  if (VAR_26 == VAR_0) {
   VAR_18->ohdr = &VAR_19->u.oth;
  } else if (VAR_26 == VAR_1) {
   VAR_18->ohdr = &VAR_19->u.l.oth;
   VAR_18->grh = &VAR_19->u.l.grh;
  } else {
   goto drop;
  }
 }

 if (VAR_18->rhf & VAR_13) {

  u32 VAR_27 = FUNC_14(VAR_18->rhf);
  u32 VAR_28 = FUNC_7(VAR_19);
  u32 VAR_29;


  if (VAR_27 < 24)
   goto drop;


  if (VAR_18->grh) {
   u32 VAR_30;
   struct ib_grh *VAR_31 = VAR_18->grh;

   if (VAR_31->next_hdr != VAR_4)
    goto drop;
   VAR_30 = FUNC_1(VAR_31->version_tclass_flow);
   if ((VAR_30 >> VAR_6) != VAR_5)
    goto drop;
  }


  VAR_29 = FUNC_6(VAR_18->ohdr);
  if (VAR_28 < VAR_21) {
   struct rvt_qp *VAR_32;
   unsigned long VAR_33;

   FUNC_12();
   VAR_32 = FUNC_17(VAR_25, &VAR_22->rvp, VAR_29);
   if (!VAR_32) {
    FUNC_13();
    goto drop;
   }





   FUNC_18(&VAR_32->r_lock, VAR_33);


   if (!(VAR_15[VAR_32->state] &
         VAR_14)) {
    VAR_22->rvp.n_pkt_drops++;
   }

   switch (VAR_32->ibqp.qp_type) {
   case 131:
    FUNC_4(VAR_16, VAR_18, VAR_32);
    break;
   default:

    break;
   }

   FUNC_19(&VAR_32->r_lock, VAR_33);
   FUNC_13();
  }
 }


 switch (VAR_20) {
 case 128:
 {
  void *VAR_34 = ((void*)0);
  u8 VAR_35;

  if (FUNC_16(VAR_18->rhf))
   VAR_34 = VAR_18->ebuf;

  if (!VAR_34)
   goto drop;

  VAR_35 = FUNC_5(VAR_18->ohdr);
  if (VAR_35 == VAR_8) {




   struct rvt_qp *VAR_36 = ((void*)0);
   u32 VAR_37, VAR_38;
   u16 VAR_39;
   u8 VAR_40, VAR_41, VAR_42;

   VAR_42 = FUNC_2(VAR_19, VAR_18->rhf);
   VAR_41 = VAR_22->sc_to_sl[VAR_42];

   VAR_37 = FUNC_6(VAR_18->ohdr);
   FUNC_12();
   VAR_36 = FUNC_17(VAR_25, &VAR_22->rvp, VAR_37);
   if (!VAR_36) {
    FUNC_13();
    goto drop;
   }

   switch (VAR_36->ibqp.qp_type) {
   case 129:
    VAR_39 = 0;
    VAR_38 = 0;
    VAR_40 = VAR_3;
    break;
   case 130:
    VAR_39 = FUNC_9(VAR_19);
    VAR_38 = VAR_36->remote_qpn;
    VAR_40 = VAR_2;
    break;
   default:
    FUNC_13();
    goto drop;
   }

   FUNC_10(VAR_17, VAR_41, VAR_39, VAR_37, VAR_38, VAR_40);
   FUNC_13();
  }

  VAR_18->rhf &= ~VAR_12;
  break;
 }
 default:
  break;
 }

drop:
 return;
}
