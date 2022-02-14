
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct he_vcc {int rc_index; int tx_waitq; int rx_waitq; scalar_t__ pdu_len; int buffers; } ;
struct he_dev {int total_bw; int global_lock; TYPE_4__* cs_stper; TYPE_3__* atm_dev; } ;
struct TYPE_7__ {scalar_t__ traffic_class; } ;
struct TYPE_11__ {scalar_t__ traffic_class; } ;
struct TYPE_8__ {int aal; TYPE_1__ rxtp; TYPE_5__ txtp; } ;
struct atm_vcc {short vpi; int vci; int flags; TYPE_2__ qos; struct he_vcc* dev_data; int dev; } ;
struct TYPE_12__ {int rx_waitq; } ;
struct TYPE_10__ {int pcr; int inuse; } ;
struct TYPE_9__ {int link_rate; } ;





 scalar_t__ VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 short VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct he_dev* FUNC_0 (int ) ;
 unsigned int VAR_11 ;
 TYPE_6__* FUNC_1 (struct atm_vcc*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *) ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int FUNC_4 (int ) ;
 unsigned int VAR_19 ;
 unsigned int FUNC_5 (int ) ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 scalar_t__ FUNC_6 (unsigned int) ;
 unsigned int FUNC_7 (int ) ;
 unsigned int FUNC_8 (unsigned int) ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 int VAR_29 ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (struct he_dev*) ;
 unsigned int FUNC_15 (struct he_dev*,short,int) ;
 unsigned int FUNC_16 (struct he_dev*,unsigned int) ;
 unsigned int FUNC_17 (struct he_dev*,unsigned int) ;
 int FUNC_18 (struct he_dev*,int ,int ) ;
 int FUNC_19 (struct he_dev*,unsigned int,unsigned int) ;
 int FUNC_20 (struct he_dev*,unsigned int,unsigned int) ;
 int FUNC_21 (struct he_dev*,unsigned int,unsigned int) ;
 int FUNC_22 (struct he_dev*,unsigned int,unsigned int) ;
 int FUNC_23 (struct he_dev*,int,unsigned int) ;
 int FUNC_24 (struct he_dev*,int,unsigned int) ;
 int FUNC_25 (struct he_dev*,int,unsigned int) ;
 int FUNC_26 (struct he_dev*,int,unsigned int) ;
 int FUNC_27 (struct he_dev*,int,unsigned int) ;
 int FUNC_28 (struct he_dev*,int,unsigned int) ;
 int FUNC_29 (struct he_dev*,int ,unsigned int) ;
 int FUNC_30 (struct he_dev*,int,unsigned int) ;
 int FUNC_31 (struct he_dev*,unsigned int,unsigned int) ;
 int FUNC_32 (struct he_dev*,int,unsigned int) ;
 int FUNC_33 (struct he_dev*,int,unsigned int) ;
 int FUNC_34 (struct he_dev*,int,unsigned int) ;
 int FUNC_35 (struct he_dev*,int,unsigned int) ;
 int FUNC_36 (struct he_dev*,int ,unsigned int) ;
 int FUNC_37 (char*,...) ;
 int FUNC_38 (int *) ;
 int FUNC_39 (struct he_vcc*) ;
 struct he_vcc* FUNC_40 (int,int ) ;
 int FUNC_41 (int) ;
 int FUNC_42 (int ,int *) ;
 int FUNC_43 (int *,unsigned long) ;
 int FUNC_44 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_45(struct atm_vcc *VAR_30)
{
 unsigned long VAR_31;
 struct he_dev *VAR_32 = FUNC_0(VAR_30->dev);
 struct he_vcc *VAR_33;
 int VAR_34 = 0;
 unsigned VAR_35, VAR_36, VAR_37, VAR_38, VAR_39, VAR_40, VAR_41, VAR_42, VAR_43, VAR_44;
 short VAR_45 = VAR_30->vpi;
 int VAR_46 = VAR_30->vci;

 if (VAR_46 == VAR_2 || VAR_45 == VAR_5)
  return 0;

 FUNC_2("open vcc %p %d.%d\n", VAR_30, VAR_45, VAR_46);

 FUNC_42(VAR_3, &VAR_30->flags);

 VAR_35 = FUNC_15(VAR_32, VAR_45, VAR_46);

 VAR_33 = FUNC_40(sizeof(struct he_vcc), VAR_10);
 if (VAR_33 == ((void*)0)) {
  FUNC_37("unable to allocate he_vcc during open\n");
  return -VAR_9;
 }

 FUNC_3(&VAR_33->buffers);
 VAR_33->pdu_len = 0;
 VAR_33->rc_index = -1;

 FUNC_38(&VAR_33->rx_waitq);
 FUNC_38(&VAR_33->tx_waitq);

 VAR_30->dev_data = VAR_33;

 if (VAR_30->qos.txtp.traffic_class != VAR_0) {
  int VAR_47;

  VAR_47 = FUNC_12(&VAR_30->qos.txtp);
  if (VAR_47 == 0)
   VAR_47 = VAR_32->atm_dev->link_rate;
  if (VAR_47 < 0)
   VAR_47 = -VAR_47;

  FUNC_2("open tx cid 0x%x pcr_goal %d\n", VAR_35, VAR_47);

  switch (VAR_30->qos.aal) {
   case 130:
    VAR_40 = VAR_22;
    VAR_41 = VAR_28;
    break;
   case 131:
    VAR_40 = VAR_21;
    VAR_41 = VAR_27;
    break;
   default:
    VAR_34 = -VAR_8;
    goto open_failed;
  }

  FUNC_43(&VAR_32->global_lock, VAR_31);
  VAR_39 = FUNC_17(VAR_32, VAR_35);
  FUNC_44(&VAR_32->global_lock, VAR_31);

  if (FUNC_6(VAR_39) != 0) {
   FUNC_37("cid 0x%x not idle (tsr0 = 0x%x)\n", VAR_35, VAR_39);
   VAR_34 = -VAR_7;
   goto open_failed;
  }

  switch (VAR_30->qos.txtp.traffic_class) {
   case 128:


    VAR_39 = VAR_24 | FUNC_7(0) | VAR_40 |
     VAR_26 | VAR_25;
    break;

   case 129:



    if ((VAR_32->total_bw + VAR_47)
     > (VAR_32->atm_dev->link_rate * 9 / 10))
    {
     VAR_34 = -VAR_7;
     goto open_failed;
    }

    FUNC_43(&VAR_32->global_lock, VAR_31);


    for (VAR_43 = 0; VAR_43 < VAR_11; ++VAR_43)
     if (VAR_32->cs_stper[VAR_43].inuse == 0 ||
         VAR_32->cs_stper[VAR_43].pcr == VAR_47)
       break;

    if (VAR_43 == VAR_11) {
     VAR_34 = -VAR_7;
     FUNC_44(&VAR_32->global_lock, VAR_31);
     goto open_failed;
    }

    VAR_32->total_bw += VAR_47;

    VAR_33->rc_index = VAR_43;
    ++VAR_32->cs_stper[VAR_43].inuse;
    VAR_32->cs_stper[VAR_43].pcr = VAR_47;

    VAR_44 = FUNC_14(VAR_32) ? 66667000 : 50000000;
    VAR_42 = VAR_44 / VAR_47;

    FUNC_2("rc_index = %d period = %d\n",
        VAR_43, VAR_42);

    FUNC_18(VAR_32, FUNC_41(VAR_42/2),
       VAR_6 + VAR_43);
    FUNC_44(&VAR_32->global_lock, VAR_31);

    VAR_39 = VAR_23 | FUNC_7(0) | VAR_40 |
       FUNC_8(VAR_43);

    break;
   default:
    VAR_34 = -VAR_8;
    goto open_failed;
  }

  FUNC_43(&VAR_32->global_lock, VAR_31);

  FUNC_22(VAR_32, VAR_39, VAR_35);
  FUNC_31(VAR_32, VAR_41 | 1, VAR_35);
  FUNC_23(VAR_32, FUNC_9(FUNC_41(0)) |
     FUNC_10(FUNC_41(VAR_47)), VAR_35);
  FUNC_29(VAR_32, FUNC_11(FUNC_41(VAR_47)), VAR_35);
  FUNC_36(VAR_32, VAR_29, VAR_35);

  FUNC_30(VAR_32, 0x0, VAR_35);
  FUNC_32(VAR_32, 0x0, VAR_35);
  FUNC_33(VAR_32, 0x0, VAR_35);
  FUNC_34(VAR_32, 0x0, VAR_35);
  FUNC_35(VAR_32, 0x0, VAR_35);
  FUNC_24(VAR_32, 0x0, VAR_35);
  FUNC_25(VAR_32, 0x0, VAR_35);
  FUNC_26(VAR_32, 0x0, VAR_35);
  FUNC_27(VAR_32, 0x0, VAR_35);
  FUNC_28(VAR_32, 0x0, VAR_35);
  (void) FUNC_17(VAR_32, VAR_35);
  FUNC_44(&VAR_32->global_lock, VAR_31);
 }

 if (VAR_30->qos.rxtp.traffic_class != VAR_0) {
  unsigned VAR_48;

  FUNC_2("open rx cid 0x%x (rx_waitq %p)\n", VAR_35,
       &FUNC_1(VAR_30)->rx_waitq);

  switch (VAR_30->qos.aal) {
   case 130:
    VAR_48 = VAR_12;
    break;
   case 131:
    VAR_48 = VAR_16;
    break;
   default:
    VAR_34 = -VAR_8;
    goto open_failed;
  }

  FUNC_43(&VAR_32->global_lock, VAR_31);

  VAR_36 = FUNC_16(VAR_32, VAR_35);
  if (VAR_36 & VAR_14) {
   FUNC_44(&VAR_32->global_lock, VAR_31);

   FUNC_37("cid 0x%x not idle (rsr0 = 0x%x)\n", VAR_35, VAR_36);
   VAR_34 = -VAR_7;
   goto open_failed;
  }

  VAR_37 = FUNC_4(0) | VAR_19;
  VAR_38 = FUNC_5(0) | VAR_20;
  VAR_36 = VAR_30->qos.rxtp.traffic_class == 128 ?
    (VAR_13|VAR_15) : 0;






  FUNC_21(VAR_32, VAR_38, VAR_35);
  FUNC_20(VAR_32, VAR_37, VAR_35);


  FUNC_19(VAR_32,
   VAR_36 | VAR_17 | VAR_14 | VAR_48, VAR_35);
  (void) FUNC_16(VAR_32, VAR_35);

  FUNC_44(&VAR_32->global_lock, VAR_31);
 }

open_failed:

 if (VAR_34) {
  FUNC_39(VAR_33);
  FUNC_13(VAR_3, &VAR_30->flags);
 }
 else
  FUNC_42(VAR_4, &VAR_30->flags);

 return VAR_34;
}
