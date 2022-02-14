
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef size_t u16 ;
struct sk_buff {int truesize; } ;
struct TYPE_12__ {size_t max_sdu; } ;
struct TYPE_13__ {TYPE_1__ rxtp; } ;
struct atm_vcc {TYPE_3__* stats; int (* push ) (struct atm_vcc*,struct sk_buff*) ;TYPE_2__ qos; } ;
struct TYPE_17__ {int length; int status; int vc; int handle; } ;
typedef TYPE_6__ rx_out ;
struct TYPE_15__ {int unused; int aborted; int toolong; int badcrc; int error; int ok; } ;
struct TYPE_16__ {TYPE_4__ rx; } ;
struct TYPE_18__ {TYPE_5__ stats; struct atm_vcc** rxer; } ;
typedef TYPE_7__ amb_dev ;
struct TYPE_14__ {int rx_drop; int rx; } ;
struct TYPE_11__ {struct atm_vcc* vcc; } ;


 size_t VAR_0 ;
 TYPE_10__* FUNC_0 (struct sk_buff*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int ,char*) ;
 size_t VAR_8 ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct atm_vcc*,int ) ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (int ) ;
 struct sk_buff* FUNC_7 (int ) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (char*,size_t,struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,size_t) ;
 int FUNC_11 (struct atm_vcc*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_12 (amb_dev * VAR_9, rx_out * VAR_10) {
  struct sk_buff * VAR_11 = FUNC_7 (VAR_10->handle);
  u16 VAR_12 = FUNC_6 (VAR_10->vc);

  u16 VAR_13 = FUNC_6 (VAR_10->status);
  u16 VAR_14 = FUNC_6 (VAR_10->length);

  FUNC_1 (VAR_2|VAR_4, "rx_complete %p %p (len=%hu)", VAR_9, VAR_10, VAR_14);


  if (!VAR_13) {
    struct atm_vcc * VAR_15 = VAR_9->rxer[VAR_12];
    VAR_9->stats.rx.ok++;

    if (VAR_15) {

      if (VAR_14 <= VAR_15->qos.rxtp.max_sdu) {

 if (FUNC_4 (VAR_15, VAR_11->truesize)) {


   FUNC_0(VAR_11)->vcc = VAR_15;
   FUNC_10 (VAR_11, VAR_14);

   FUNC_9 ("<<<", VAR_12, VAR_11);


   FUNC_5(&VAR_15->stats->rx);
   FUNC_3(VAR_11);

   VAR_15->push (VAR_15, VAR_11);
   return;

 } else {

   FUNC_1 (VAR_3|VAR_4, "dropped thanks to atm_charge (vc %hu, truesize %u)", VAR_12, VAR_11->truesize);

 }

      } else {
       FUNC_2 (VAR_6, "dropped over-size frame");

 FUNC_5(&VAR_15->stats->rx_drop);
      }

    } else {
      FUNC_1 (VAR_5|VAR_4, "got frame but RX closed for channel %hu", VAR_12);

    }

  } else {
    VAR_9->stats.rx.error++;
    if (VAR_13 & VAR_1)
      VAR_9->stats.rx.badcrc++;
    if (VAR_13 & VAR_7)
      VAR_9->stats.rx.toolong++;
    if (VAR_13 & VAR_0)
      VAR_9->stats.rx.aborted++;
    if (VAR_13 & VAR_8)
      VAR_9->stats.rx.unused++;
  }

  FUNC_8 (VAR_11);
  return;
}
