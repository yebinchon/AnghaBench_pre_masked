
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t u16 ;
struct atm_trafprm {int traffic_class; } ;
struct atm_qos {int aal; struct atm_trafprm rxtp; struct atm_trafprm txtp; } ;
struct atm_vcc {short vpi; int vci; int flags; void* dev_data; struct atm_qos qos; int dev; } ;
typedef int rounding ;
struct TYPE_9__ {size_t channel; int tx_rate; scalar_t__ aal; unsigned int tx_bucket_bits; int rx_rate; void* tx_xbr_bits; void* tx_scr_bits; void* tx_pcr_bits; } ;
typedef TYPE_1__ hrz_vcc ;
struct TYPE_10__ {int tx_avail; int rx_avail; struct atm_vcc** rxer; int rate_lock; } ;
typedef TYPE_2__ hrz_dev ;


 void* VAR_0 ;





 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 short VAR_5 ;
 unsigned int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_2__* FUNC_0 (int ) ;
 void* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int ,char*) ;
 void* VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_3 (struct atm_trafprm*,int) ;
 int FUNC_4 (struct atm_trafprm*) ;
 int FUNC_5 (scalar_t__,struct atm_trafprm*,int ) ;
 int FUNC_6 (TYPE_2__*,size_t) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (int,int ) ;
 int FUNC_9 (TYPE_2__*,int,int ,void**,int *) ;
 int FUNC_10 (TYPE_2__*,int,int ,int,void**,int*) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (size_t*,short,int) ;

__attribute__((used)) static int FUNC_15 (struct atm_vcc *VAR_31)
{
  int VAR_32;
  u16 VAR_33;

  struct atm_qos * VAR_34;
  struct atm_trafprm * VAR_35;
  struct atm_trafprm * VAR_36;

  hrz_dev * VAR_37 = FUNC_0(VAR_31->dev);
  hrz_vcc VAR_38;
  hrz_vcc * VAR_39;
  short VAR_40 = VAR_31->vpi;
  int VAR_41 = VAR_31->vci;
  FUNC_1 (VAR_10|VAR_12, "hrz_open %x %x", VAR_40, VAR_41);
  VAR_32 = FUNC_14 (&VAR_33, VAR_40, VAR_41);
  if (VAR_32) {
    FUNC_1 (VAR_13|VAR_12, "VPI/VCI out of range: %hd/%d", VAR_40, VAR_41);
    return VAR_32;
  }

  VAR_38.channel = VAR_33;

  VAR_38.tx_rate = 0x0;

  VAR_34 = &VAR_31->qos;


  switch (VAR_34->aal) {
    case 134:

      FUNC_1 (VAR_11|VAR_12, "AAL0");
      VAR_38.aal = VAR_23;
      break;
    case 133:

      FUNC_1 (VAR_11|VAR_12, "AAL3/4");
      VAR_38.aal = VAR_24;
      break;
    case 132:
      FUNC_1 (VAR_11|VAR_12, "AAL5");
      VAR_38.aal = VAR_25;
      break;
    default:
      FUNC_1 (VAR_11|VAR_12, "Bad AAL!");
      return -VAR_16;
  }
  FUNC_1 (VAR_11, "TX:");

  VAR_35 = &VAR_34->txtp;


  VAR_38.tx_rate = 0;

  VAR_38.tx_xbr_bits = VAR_19;
  VAR_38.tx_pcr_bits = VAR_8;





  if (VAR_35->traffic_class != VAR_1) {
    VAR_32 = FUNC_5 (VAR_38.aal, VAR_35, VAR_27);
    if (VAR_32) {
      FUNC_1 (VAR_11, "TX max_sdu check failed");
      return VAR_32;
    }

    switch (VAR_35->traffic_class) {
      case 129: {


 VAR_38.tx_rate = 0;
 FUNC_9 (VAR_37, 1<<30, VAR_29, &VAR_38.tx_pcr_bits, ((void*)0));
 VAR_38.tx_xbr_bits = VAR_0;
 break;
      }
      case 130: {
 int VAR_42 = FUNC_4 (VAR_35);
 rounding VAR_43;
 if (!VAR_42) {





   VAR_43 = VAR_28;


   FUNC_1 (VAR_11, "snatching all remaining TX bandwidth");
   VAR_42 = VAR_37->tx_avail;
 } else if (VAR_42 < 0) {
   VAR_43 = VAR_28;
   VAR_42 = -VAR_42;
 } else {
   VAR_43 = VAR_30;
 }
 VAR_32 = FUNC_10 (VAR_37, VAR_42, VAR_43, 10,
       &VAR_38.tx_pcr_bits, &VAR_38.tx_rate);
 if (VAR_32) {
   FUNC_1 (VAR_11, "could not make rate from TX PCR");
   return VAR_32;
 }

 VAR_32 = FUNC_3 (VAR_35, VAR_38.tx_rate);
 if (VAR_32) {
   FUNC_1 (VAR_11, "TX PCR failed consistency check");
   return VAR_32;
 }
 VAR_38.tx_xbr_bits = VAR_7;
 break;
      }
      default: {
 FUNC_1 (VAR_11, "unsupported TX traffic class");
 return -VAR_16;
      }
    }
  }



  FUNC_1 (VAR_11, "RX:");

  VAR_36 = &VAR_34->rxtp;


  VAR_38.rx_rate = 0;

  if (VAR_36->traffic_class != VAR_1) {
    VAR_32 = FUNC_5 (VAR_38.aal, VAR_36, VAR_26);
    if (VAR_32) {
      FUNC_1 (VAR_11, "RX max_sdu check failed");
      return VAR_32;
    }
    switch (VAR_36->traffic_class) {
      case 129: {

 break;
      }







      case 130: {
 int VAR_44 = FUNC_4 (VAR_36);
 if (!VAR_44) {


   FUNC_1 (VAR_11, "snatching all remaining RX bandwidth");
   VAR_44 = VAR_37->rx_avail;
 } else if (VAR_44 < 0) {
   VAR_44 = -VAR_44;
 }
 VAR_38.rx_rate = VAR_44;

 VAR_32 = FUNC_3 (VAR_36, VAR_38.rx_rate);
 if (VAR_32) {
   FUNC_1 (VAR_11, "RX PCR failed consistency check");
   return VAR_32;
 }
 break;
      }
      default: {
 FUNC_1 (VAR_11, "unsupported RX traffic class");
 return -VAR_16;
      }
    }
  }



  if (VAR_38.aal != VAR_25) {
    FUNC_1 (VAR_11, "AAL not supported");
    return -VAR_16;
  }


  VAR_39 = FUNC_8 (sizeof(hrz_vcc), VAR_18);
  if (!VAR_39) {
    FUNC_2 (VAR_20, "out of memory!");
    return -VAR_17;
  }
  *VAR_39 = VAR_38;


  VAR_32 = 0;
  FUNC_12 (&VAR_37->rate_lock);

  if (VAR_38.tx_rate > VAR_37->tx_avail) {
    FUNC_1 (VAR_11, "not enough TX PCR left");
    VAR_32 = -VAR_14;
  }

  if (VAR_38.rx_rate > VAR_37->rx_avail) {
    FUNC_1 (VAR_11, "not enough RX PCR left");
    VAR_32 = -VAR_14;
  }

  if (!VAR_32) {

    VAR_37->tx_avail -= VAR_38.tx_rate;
    VAR_37->rx_avail -= VAR_38.rx_rate;
    FUNC_1 (VAR_11|VAR_12, "reserving %u TX PCR and %u RX PCR",
     VAR_38.tx_rate, VAR_38.rx_rate);
  }


  FUNC_13 (&VAR_37->rate_lock);
  if (VAR_32) {
    FUNC_1 (VAR_11|VAR_12, "insufficient cell rate resources");
    FUNC_7 (VAR_39);
    return VAR_32;
  }



  FUNC_11(VAR_3,&VAR_31->flags);



  if (VAR_36->traffic_class != VAR_1) {
    if (VAR_37->rxer[VAR_33]) {
      FUNC_1 (VAR_9|VAR_12, "VC already open for RX");
      VAR_32 = -VAR_15;
    }
    if (!VAR_32)
      VAR_32 = FUNC_6 (VAR_37, VAR_33);
    if (VAR_32) {
      FUNC_7 (VAR_39);
      return VAR_32;
    }

    VAR_37->rxer[VAR_33] = VAR_31;
  }


  VAR_31->dev_data = (void *) VAR_39;


  FUNC_11(VAR_4,&VAR_31->flags);

  return 0;
}
