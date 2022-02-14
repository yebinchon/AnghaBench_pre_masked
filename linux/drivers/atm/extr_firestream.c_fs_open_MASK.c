
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fs_vcc {short channo; int flags; short atm_hdr; unsigned short* TMC; scalar_t__* rtag; scalar_t__ spec; int close_wait; int * last_skb; } ;
struct fs_transmit_config {short channo; int flags; short atm_hdr; unsigned short* TMC; scalar_t__* rtag; scalar_t__ spec; int close_wait; int * last_skb; } ;
struct fs_dev {int channo; short channel_mask; int hp_txq; struct atm_vcc** atm_vccs; TYPE_1__* rx_fp; int * tx_inuse; } ;
struct atm_trafprm {scalar_t__ max_sdu; } ;
struct TYPE_5__ {int aal; struct atm_trafprm rxtp; struct atm_trafprm txtp; } ;
struct atm_vcc {short vpi; int vci; int flags; TYPE_2__ qos; struct fs_vcc* dev_data; TYPE_3__* dev; } ;
struct TYPE_6__ {int number; } ;
struct TYPE_4__ {scalar_t__ bufsize; } ;





 short VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct atm_trafprm*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 short VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct fs_dev* FUNC_1 (TYPE_3__*) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (struct fs_dev*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
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
 int FUNC_3 (struct atm_trafprm*) ;
 int FUNC_4 (int,int *) ;
 int VAR_31 ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct fs_vcc*) ;
 struct fs_vcc* FUNC_10 (int,int ) ;
 int FUNC_11 (int,int,unsigned short*,int *) ;
 int FUNC_12 (struct fs_vcc*,int) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (int,int *) ;
 int FUNC_15 (struct fs_dev*,int *,int,int,short,int ) ;
 scalar_t__ FUNC_16 (size_t,int *) ;
 int FUNC_17 (struct fs_vcc*) ;

__attribute__((used)) static int FUNC_18(struct atm_vcc *VAR_32)
{
 struct fs_dev *VAR_33;
 struct fs_vcc *VAR_34;
 struct fs_transmit_config *VAR_35;
 struct atm_trafprm * VAR_36;
 struct atm_trafprm * VAR_37;


 int VAR_38;
 int VAR_39;
 int VAR_40;
 unsigned short VAR_41;
 short VAR_42 = VAR_32->vpi;
 int VAR_43 = VAR_32->vci;

 FUNC_6 ();

 VAR_33 = FUNC_1(VAR_32->dev);
 FUNC_5 (VAR_10, "fs: open on dev: %p, vcc at %p\n",
      VAR_33, VAR_32);

 if (VAR_43 != VAR_4 && VAR_42 != VAR_0)
  FUNC_14(VAR_1, &VAR_32->flags);

 if ((VAR_32->qos.aal != 128) &&
     (VAR_32->qos.aal != 129))
   return -VAR_6;

 FUNC_5 (VAR_10, "fs: (itf %d): open %d.%d\n",
      VAR_32->dev->number, VAR_32->vpi, VAR_32->vci);



 VAR_34 = FUNC_10(sizeof(struct fs_vcc), VAR_12);
 FUNC_5 (VAR_9, "Alloc VCC: %p(%zd)\n", VAR_34, sizeof(struct fs_vcc));
 if (!VAR_34) {
  FUNC_4(VAR_1, &VAR_32->flags);
  return -VAR_7;
 }

 VAR_32->dev_data = VAR_34;
 VAR_34->last_skb = ((void*)0);

 FUNC_8 (&VAR_34->close_wait);

 VAR_36 = &VAR_32->qos.txtp;
 VAR_37 = &VAR_32->qos.rxtp;

 if (!FUNC_16(VAR_2, &VAR_32->flags)) {
  if (FUNC_2(VAR_33)) {

   for (VAR_40=33;VAR_40;VAR_40--, VAR_33->channo++) {

    if (VAR_33->channo >= 32)
     VAR_33->channo = 0;

    if (FUNC_0(VAR_37) && VAR_33->atm_vccs[VAR_33->channo])
     continue;

    if (FUNC_0(VAR_36) && FUNC_16 (VAR_33->channo, VAR_33->tx_inuse))
     continue;

    break;
   }
   if (!VAR_40) {
    FUNC_13 ("No more free channels for FS50..\n");
    return -VAR_5;
   }
   VAR_34->channo = VAR_33->channo;
   VAR_33->channo &= VAR_33->channel_mask;

  } else {
   VAR_34->channo = (VAR_42 << VAR_8) | (VAR_43);
   if (((FUNC_0(VAR_37) && VAR_33->atm_vccs[VAR_34->channo])) ||
       ( FUNC_0(VAR_36) && FUNC_16 (VAR_34->channo, VAR_33->tx_inuse))) {
    FUNC_13 ("Channel is in use for FS155.\n");
    return -VAR_5;
   }
  }
  FUNC_5 (VAR_10, "OK. Allocated channel %x(%d).\n",
       VAR_34->channo, VAR_34->channo);
 }

 if (FUNC_0 (VAR_36)) {
  VAR_35 = FUNC_10 (sizeof (struct fs_transmit_config), VAR_12);
  FUNC_5 (VAR_9, "Alloc tc: %p(%zd)\n",
       VAR_35, sizeof (struct fs_transmit_config));
  if (!VAR_35) {
   FUNC_5 (VAR_10, "fs: can't alloc transmit_config.\n");
   return -VAR_7;
  }







  switch (VAR_32->qos.aal) {
  case 129:
  case 130:
    VAR_35->flags = 0
      | VAR_28
      | VAR_27
      | (1 << 28)
      | VAR_30
      | VAR_26;
    break;
  case 128:
    VAR_35->flags = 0
   | VAR_25
   | VAR_27
   | VAR_29
   | VAR_26;
    break;
  default:
   FUNC_13 ("Unknown aal: %d\n", VAR_32->qos.aal);
   VAR_35->flags = 0;
  }


  VAR_35->atm_hdr = (VAR_42 << 20) | (VAR_43 << 4);
  VAR_41 = 0;
  {
   int VAR_44 = FUNC_3 (VAR_36);

   FUNC_5 (VAR_10, "pcr = %d.\n", VAR_44);



   if (FUNC_2(VAR_33)) {
    if (VAR_44 > 51840000/53/8) VAR_44 = 51840000/53/8;
   } else {
    if (VAR_44 > 155520000/53/8) VAR_44 = 155520000/53/8;
   }
   if (!VAR_44) {

    VAR_41 = FUNC_2(VAR_33)?0x61BE:0x64c9;
   } else {
    int VAR_45;
    if (VAR_44 < 0) {
     VAR_45 = VAR_23;
     VAR_44 = -VAR_44;
    } else {
     VAR_45 = VAR_24;
    }
    VAR_38 = FUNC_11 (VAR_44, VAR_45, &VAR_41, ((void*)0));
    if (VAR_38) {
     FUNC_9(VAR_35);
     return VAR_38;
    }
   }
   FUNC_5 (VAR_10, "pcr = %d.\n", VAR_44);
  }

  VAR_35->TMC[0] = VAR_41 | 0x4000;
  VAR_35->TMC[1] = 0;
  VAR_35->TMC[2] = 0;
  VAR_35->TMC[3] = 0;

  VAR_35->spec = 0;
  VAR_35->rtag[0] = 0;

  VAR_35->rtag[1] = 0;
  VAR_35->rtag[2] = 0;

  if (VAR_31 & VAR_10) {
   FUNC_5 (VAR_10, "TX config record:\n");
   FUNC_12 (VAR_35, sizeof (*VAR_35));
  }
  FUNC_15 (VAR_33, &VAR_33->hp_txq,
    VAR_14 | VAR_15 | VAR_34->channo,
    FUNC_17 (VAR_35), 0, 0);

  FUNC_15 (VAR_33, &VAR_33->hp_txq,
    VAR_18 | VAR_15 | VAR_34->channo,
    0, 0, 0);
  FUNC_14 (VAR_34->channo, VAR_33->tx_inuse);
 }

 if (FUNC_0 (VAR_37)) {
  VAR_33->atm_vccs[VAR_34->channo] = VAR_32;

  for (VAR_39 = 0;VAR_39 < VAR_11; VAR_39++)
   if (VAR_32->qos.rxtp.max_sdu <= VAR_33->rx_fp[VAR_39].bufsize) break;
  if (VAR_39 >= VAR_11) {
   FUNC_5 (VAR_10, "No free pool fits sdu: %d.\n",
        VAR_32->qos.rxtp.max_sdu);



   VAR_33->atm_vccs[VAR_34->channo] = ((void*)0);
   FUNC_9 (VAR_34);
   return -VAR_6;
  }

  switch (VAR_32->qos.aal) {
  case 130:
  case 129:
   FUNC_15 (VAR_33, &VAR_33->hp_txq,
     VAR_13 | VAR_15 | VAR_34->channo,
     VAR_22 |
     VAR_20 * VAR_39 |
     VAR_21, 0, 0);
   break;
  case 128:
   FUNC_15 (VAR_33, &VAR_33->hp_txq,
     VAR_13 | VAR_15 | VAR_34->channo,
     VAR_19 |
     VAR_20 * VAR_39 |
     VAR_21, 0, 0);
   break;
  };
  if (FUNC_2 (VAR_33)) {
   FUNC_15 (VAR_33, &VAR_33->hp_txq,
     VAR_16 | VAR_15,
     0x80 + VAR_34->channo,
     (VAR_42 << 16) | VAR_43, 0 );
  }
  FUNC_15 (VAR_33, &VAR_33->hp_txq,
    VAR_17 | VAR_15 | VAR_34->channo,
    0, 0, 0);
 }


 FUNC_14(VAR_3, &VAR_32->flags);

 FUNC_7 ();
 return 0;
}
