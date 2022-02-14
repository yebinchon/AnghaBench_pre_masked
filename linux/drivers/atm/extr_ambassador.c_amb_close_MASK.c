
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_13__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef size_t u16 ;
struct TYPE_27__ {scalar_t__ traffic_class; } ;
struct TYPE_25__ {scalar_t__ traffic_class; } ;
struct TYPE_28__ {TYPE_3__ rxtp; TYPE_1__ txtp; } ;
struct atm_vcc {size_t vci; int flags; TYPE_4__ qos; int dev; } ;
struct TYPE_32__ {void* vc; } ;
struct TYPE_30__ {void* flags; void* vc; } ;
struct TYPE_26__ {void* rate; void* vc; } ;
struct TYPE_33__ {TYPE_8__ close; TYPE_6__ modify_flags; TYPE_2__ modify_rate; } ;
struct TYPE_22__ {TYPE_9__ args; void* request; } ;
typedef TYPE_11__ command ;
struct TYPE_29__ {unsigned char pool; } ;
struct TYPE_23__ {TYPE_5__ rx_info; } ;
typedef TYPE_12__ amb_vcc ;
struct TYPE_24__ {int vcc_sf; TYPE_10__* rxq; struct atm_vcc** rxer; TYPE_7__* txer; } ;
typedef TYPE_13__ amb_dev ;
struct TYPE_31__ {size_t tx_vc_bits; scalar_t__ tx_present; } ;
struct TYPE_21__ {scalar_t__ buffers_wanted; } ;


 TYPE_13__* FUNC_0 (int ) ;
 TYPE_12__* FUNC_1 (struct atm_vcc*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ,char*,char*,TYPE_12__*,struct atm_vcc*) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (TYPE_13__*,TYPE_11__*) ;
 void* FUNC_6 (size_t) ;
 int FUNC_7 (TYPE_13__*,unsigned char) ;
 int FUNC_8 (TYPE_12__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ VAR_10 ;
 int FUNC_11 () ;

__attribute__((used)) static void FUNC_12 (struct atm_vcc * VAR_11) {
  amb_dev * VAR_12 = FUNC_0 (VAR_11->dev);
  amb_vcc * VAR_13 = FUNC_1 (VAR_11);
  u16 VAR_14 = VAR_11->vci;

  FUNC_2 (VAR_4|VAR_3, "amb_close");


  FUNC_4(VAR_2,&VAR_11->flags);


  if (VAR_11->qos.txtp.traffic_class != VAR_0) {
    command VAR_15;

    FUNC_9(&VAR_12->vcc_sf);
    if (VAR_12->rxer[VAR_14]) {

      VAR_15.request = FUNC_6 (VAR_9);
      VAR_15.args.modify_rate.vc = FUNC_6 (VAR_14);
      VAR_15.args.modify_rate.rate = FUNC_6 (0);

    } else {

      VAR_15.request = FUNC_6 (VAR_6);
      VAR_15.args.close.vc = FUNC_6 (VAR_14);
    }
    VAR_12->txer[VAR_14].tx_present = 0;
    while (FUNC_5 (VAR_12, &VAR_15))
      FUNC_11();
    FUNC_10(&VAR_12->vcc_sf);
  }


  if (VAR_11->qos.rxtp.traffic_class != VAR_0) {
    command VAR_16;


    unsigned char VAR_17 = VAR_13->rx_info.pool;

    FUNC_9(&VAR_12->vcc_sf);
    if (VAR_12->txer[VAR_14].tx_present) {

      VAR_16.request = FUNC_6 (VAR_8);
      VAR_16.args.modify_flags.vc = FUNC_6 (VAR_14);
      VAR_16.args.modify_flags.flags = FUNC_6
 (VAR_12->txer[VAR_14].tx_vc_bits << VAR_7);
    } else {

      VAR_16.request = FUNC_6 (VAR_6);
      VAR_16.args.close.vc = FUNC_6 (VAR_14);
    }

    if (VAR_11 != VAR_12->rxer[VAR_14])
      FUNC_3 (VAR_5, "%s vcc=%p rxer[vci]=%p",
       "arghhh! we're going to die!",
       VAR_13, VAR_12->rxer[VAR_14]);
    VAR_12->rxer[VAR_14] = ((void*)0);
    while (FUNC_5 (VAR_12, &VAR_16))
      FUNC_11();


    VAR_12->rxq[VAR_17].buffers_wanted -= 1;
    if (VAR_12->rxq[VAR_17].buffers_wanted == VAR_10) {
      VAR_12->rxq[VAR_17].buffers_wanted = 0;
      FUNC_7 (VAR_12, VAR_17);
    }
    FUNC_10(&VAR_12->vcc_sf);
  }


  FUNC_8 (VAR_13);


  FUNC_4(VAR_1,&VAR_11->flags);

  return;
}
