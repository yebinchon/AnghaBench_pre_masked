
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct he_vcc {int rc_index; int tx_waitq; int rx_waitq; } ;
struct he_tpd {int status; struct atm_vcc* vcc; int * skb; } ;
struct he_dev {int global_lock; TYPE_4__* cs_stper; int total_bw; } ;
struct TYPE_7__ {scalar_t__ traffic_class; } ;
struct TYPE_6__ {scalar_t__ traffic_class; } ;
struct TYPE_8__ {TYPE_2__ txtp; TYPE_1__ rxtp; } ;
struct atm_vcc {int flags; TYPE_3__ qos; int vci; int vpi; int dev; } ;
struct TYPE_10__ {int sk_wmem_alloc; } ;
struct TYPE_9__ {scalar_t__ inuse; scalar_t__ pcr; } ;



 scalar_t__ VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 struct he_dev* FUNC_1 (int ) ;
 struct he_vcc* FUNC_2 (struct atm_vcc*) ;
 int FUNC_3 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (unsigned int volatile) ;
 int VAR_13 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_14 ;
 unsigned int volatile VAR_15 ;
 struct he_tpd* FUNC_7 (struct he_dev*) ;
 int FUNC_8 (struct he_dev*,struct he_tpd*,unsigned int) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int ,int *) ;
 int VAR_16 ;
 unsigned int FUNC_11 (struct he_dev*,int ,int ) ;
 int FUNC_12 (struct he_dev*,int ) ;
 int FUNC_13 (struct he_dev*,unsigned int) ;
 unsigned int FUNC_14 (struct he_dev*,unsigned int) ;
 unsigned int FUNC_15 (struct he_dev*,unsigned int) ;
 int FUNC_16 (struct he_dev*,unsigned int,int ) ;
 int FUNC_17 (struct he_dev*,int ,unsigned int) ;
 int FUNC_18 (struct he_dev*,int,unsigned int) ;
 int FUNC_19 (struct he_dev*,int ,unsigned int) ;
 int FUNC_20 (struct he_dev*,int ,unsigned int) ;
 int FUNC_21 (char*,int,...) ;
 int FUNC_22 (struct he_vcc*) ;
 int FUNC_23 (int) ;
 int FUNC_24 (int) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *,int *) ;
 int FUNC_27 (int) ;
 int FUNC_28 (int ) ;
 TYPE_5__* FUNC_29 (struct atm_vcc*) ;
 int FUNC_30 (int *,unsigned long) ;
 int FUNC_31 (int *,unsigned long) ;
 int FUNC_32 (int) ;
 int VAR_17 ;
 int FUNC_33 () ;

__attribute__((used)) static void
FUNC_34(struct atm_vcc *VAR_18)
{
 unsigned long VAR_19;
 FUNC_0(VAR_17, VAR_16);
 struct he_dev *VAR_20 = FUNC_1(VAR_18->dev);
 struct he_tpd *VAR_21;
 unsigned VAR_22;
 struct he_vcc *VAR_23 = FUNC_2(VAR_18);

 int VAR_24 = 0, VAR_25 = 1, VAR_26;

 FUNC_3("close vcc %p %d.%d\n", VAR_18, VAR_18->vpi, VAR_18->vci);

 FUNC_10(VAR_2, &VAR_18->flags);
 VAR_22 = FUNC_11(VAR_20, VAR_18->vpi, VAR_18->vci);

 if (VAR_18->qos.rxtp.traffic_class != VAR_0) {
  int VAR_27;

  FUNC_3("close rx cid 0x%x\n", VAR_22);





  FUNC_30(&VAR_20->global_lock, VAR_19);
  while (FUNC_12(VAR_20, VAR_6) & VAR_5) {
   FUNC_3("close cid 0x%x RCC_BUSY\n", VAR_22);
   FUNC_32(250);
  }

  FUNC_28(VAR_10);
  FUNC_9(&VAR_23->rx_waitq, &VAR_17);

  FUNC_17(VAR_20, VAR_7, VAR_22);
  (void) FUNC_13(VAR_20, VAR_22);
  FUNC_16(VAR_20, VAR_22, VAR_8);
  FUNC_31(&VAR_20->global_lock, VAR_19);

  VAR_27 = FUNC_27(30*VAR_3);

  FUNC_26(&VAR_23->rx_waitq, &VAR_17);
  FUNC_28(VAR_9);

  if (VAR_27 == 0)
   FUNC_21("close rx timeout cid 0x%x\n", VAR_22);

  FUNC_3("close rx cid 0x%x complete\n", VAR_22);

 }

 if (VAR_18->qos.txtp.traffic_class != VAR_0) {
  volatile unsigned VAR_28, VAR_29;
  int VAR_30;

  FUNC_3("close tx cid 0x%x\n", VAR_22);
  while (((VAR_26 = FUNC_25(&FUNC_29(VAR_18)->sk_wmem_alloc)) > 1) &&
         (VAR_24 < 30)) {
   FUNC_23(VAR_25);
   if (VAR_25 < 250)
    VAR_25 = VAR_25 * 2;

   ++VAR_24;
  }

  if (VAR_26 > 1)
   FUNC_21("close tx cid 0x%x tx_inuse = %d\n", VAR_22, VAR_26);



  FUNC_30(&VAR_20->global_lock, VAR_19);
  FUNC_20(VAR_20, VAR_14, VAR_22);


  switch (VAR_18->qos.txtp.traffic_class) {
   case 128:
    FUNC_18(VAR_20,
     FUNC_5(FUNC_24(200000))
     | FUNC_6(0), VAR_22);
    break;
   case 129:
    FUNC_19(VAR_20, VAR_13, VAR_22);
    break;
  }
  (void) FUNC_15(VAR_20, VAR_22);

  VAR_21 = FUNC_7(VAR_20);
  if (VAR_21 == ((void*)0)) {
   FUNC_21("close tx he_alloc_tpd failed cid 0x%x\n", VAR_22);
   goto close_tx_incomplete;
  }
  VAR_21->status |= VAR_11 | VAR_12;
  VAR_21->skb = ((void*)0);
  VAR_21->vcc = VAR_18;
  FUNC_33();

  FUNC_28(VAR_10);
  FUNC_9(&VAR_23->tx_waitq, &VAR_17);
  FUNC_8(VAR_20, VAR_21, VAR_22);
  FUNC_31(&VAR_20->global_lock, VAR_19);

  VAR_30 = FUNC_27(30*VAR_3);

  FUNC_26(&VAR_23->tx_waitq, &VAR_17);
  FUNC_28(VAR_9);

  FUNC_30(&VAR_20->global_lock, VAR_19);

  if (VAR_30 == 0) {
   FUNC_21("close tx timeout cid 0x%x\n", VAR_22);
   goto close_tx_incomplete;
  }

  while (!((VAR_28 = FUNC_15(VAR_20, VAR_22)) & VAR_15)) {
   FUNC_3("close tx cid 0x%x !TSR4_SESSION_ENDED (tsr4 = 0x%x)\n", VAR_22, VAR_28);
   FUNC_32(250);
  }

  while (FUNC_4(VAR_29 = FUNC_14(VAR_20, VAR_22)) != 0) {
   FUNC_3("close tx cid 0x%x TSR0_CONN_STATE != 0 (tsr0 = 0x%x)\n", VAR_22, VAR_29);
   FUNC_32(250);
  }

close_tx_incomplete:

  if (VAR_18->qos.txtp.traffic_class == 129) {
   int VAR_31 = VAR_23->rc_index;

   FUNC_3("cs_stper reg = %d\n", VAR_31);

   if (VAR_20->cs_stper[VAR_31].inuse == 0)
    FUNC_21("cs_stper[%d].inuse = 0!\n", VAR_31);
   else
    --VAR_20->cs_stper[VAR_31].inuse;

   VAR_20->total_bw -= VAR_20->cs_stper[VAR_31].pcr;
  }
  FUNC_31(&VAR_20->global_lock, VAR_19);

  FUNC_3("close tx cid 0x%x complete\n", VAR_22);
 }

 FUNC_22(VAR_23);

 FUNC_10(VAR_1, &VAR_18->flags);
}
