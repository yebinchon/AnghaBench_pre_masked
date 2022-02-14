
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fs_vcc {int channo; struct fs_vcc* last_skb; int close_wait; } ;
struct fs_dev {int hp_txq; int ** atm_vccs; int * tx_inuse; struct fs_vcc* ntxpckts; } ;
struct atm_trafprm {int dummy; } ;
struct TYPE_2__ {struct atm_trafprm rxtp; struct atm_trafprm txtp; } ;
struct atm_vcc {TYPE_1__ qos; int flags; int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct atm_trafprm*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct fs_dev* FUNC_1 (int ) ;
 struct fs_vcc* FUNC_2 (struct atm_vcc*) ;
 scalar_t__ FUNC_3 (struct fs_dev*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int ,char*,struct fs_vcc*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct fs_vcc*) ;
 int FUNC_9 (struct fs_dev*,int *,int,int,int,int ) ;
 int FUNC_10 (int ,int) ;

__attribute__((used)) static void FUNC_11(struct atm_vcc *VAR_8)
{
 struct fs_dev *VAR_9 = FUNC_1 (VAR_8->dev);
 struct fs_vcc *VAR_10 = FUNC_2 (VAR_8);
 struct atm_trafprm * VAR_11;
 struct atm_trafprm * VAR_12;

 FUNC_6 ();

 FUNC_4(VAR_0, &VAR_8->flags);

 FUNC_5 (VAR_2, "--==**[%d]**==--", VAR_9->ntxpckts);
 if (VAR_10->last_skb) {
  FUNC_5 (VAR_3, "Waiting for skb %p to be sent.\n",
       VAR_10->last_skb);







  FUNC_10(VAR_10->close_wait, !VAR_10->last_skb);
 }

 VAR_11 = &VAR_8->qos.txtp;
 VAR_12 = &VAR_8->qos.rxtp;





 if (FUNC_0 (VAR_11)) {
  FUNC_9 (VAR_9, &VAR_9->hp_txq,
    VAR_7 | VAR_10->channo, 0,0,0);
  FUNC_4 (VAR_10->channo, VAR_9->tx_inuse);
 }

 if (FUNC_0 (VAR_12)) {
  FUNC_9 (VAR_9, &VAR_9->hp_txq,
    VAR_6 | VAR_4 | VAR_10->channo, 0,0,0);
  VAR_9->atm_vccs [VAR_10->channo] = ((void*)0);


  if (FUNC_3 (VAR_9)) {



   FUNC_9 (VAR_9, &VAR_9->hp_txq,
     VAR_5 | VAR_4,
     0x80 + VAR_10->channo, -1, 0 );
  }
 }

 FUNC_5 (VAR_1, "Free vcc: %p\n", VAR_10);
 FUNC_8 (VAR_10);

 FUNC_7 ();
}
