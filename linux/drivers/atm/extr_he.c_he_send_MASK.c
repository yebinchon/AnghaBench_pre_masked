
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


struct sk_buff {int len; int data; } ;
struct he_tpd {int status; int length0; struct sk_buff* skb; struct atm_vcc* vcc; void* address0; TYPE_2__* iovec; } ;
struct he_dev {int global_lock; TYPE_3__* pci_dev; } ;
struct TYPE_7__ {scalar_t__ aal; } ;
struct atm_vcc {TYPE_4__* stats; int (* pop ) (struct atm_vcc*,struct sk_buff*) ;TYPE_1__ qos; int vci; int vpi; int dev; } ;
typedef int skb_frag_t ;
struct TYPE_12__ {struct atm_vcc* vcc; } ;
struct TYPE_11__ {int nr_frags; int * frags; } ;
struct TYPE_10__ {int tx; int tx_err; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_8__ {int len; void* addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 TYPE_6__* FUNC_0 (struct sk_buff*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct he_dev* FUNC_1 (int ) ;
 int VAR_10 ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct he_tpd* FUNC_4 (struct he_dev*) ;
 int FUNC_5 (struct he_dev*,struct he_tpd*,unsigned int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct sk_buff*) ;
 void* FUNC_8 (int *,int ,int,int ) ;
 unsigned int FUNC_9 (struct he_dev*,int ,int ) ;
 int FUNC_10 (char*,...) ;
 void* FUNC_11 (int *,int *,int ,int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*,int) ;
 TYPE_5__* FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,unsigned long) ;
 int FUNC_18 (struct atm_vcc*,struct sk_buff*) ;
 int FUNC_19 (struct atm_vcc*,struct sk_buff*) ;
 int FUNC_20 (struct atm_vcc*,struct sk_buff*) ;
 int FUNC_21 (struct atm_vcc*,struct sk_buff*) ;
 int FUNC_22 () ;

__attribute__((used)) static int
FUNC_23(struct atm_vcc *VAR_16, struct sk_buff *VAR_17)
{
 unsigned long VAR_18;
 struct he_dev *VAR_19 = FUNC_1(VAR_16->dev);
 unsigned VAR_20 = FUNC_9(VAR_19, VAR_16->vpi, VAR_16->vci);
 struct he_tpd *VAR_21;






 FUNC_2("send %d.%d\n", VAR_16->vpi, VAR_16->vci);

 if ((VAR_17->len > 0xffff) ||
     ((VAR_16->qos.aal == VAR_0) && (VAR_17->len != VAR_1))) {
  FUNC_10("buffer too large (or small) -- %d bytes\n", VAR_17->len );
  if (VAR_16->pop)
   VAR_16->pop(VAR_16, VAR_17);
  else
   FUNC_7(VAR_17);
  FUNC_6(&VAR_16->stats->tx_err);
  return -VAR_8;
 }


 if (FUNC_15(VAR_17)->nr_frags) {
  FUNC_10("no scatter/gather support\n");
  if (VAR_16->pop)
   VAR_16->pop(VAR_16, VAR_17);
  else
   FUNC_7(VAR_17);
  FUNC_6(&VAR_16->stats->tx_err);
  return -VAR_8;
 }

 FUNC_16(&VAR_19->global_lock, VAR_18);

 VAR_21 = FUNC_4(VAR_19);
 if (VAR_21 == ((void*)0)) {
  if (VAR_16->pop)
   VAR_16->pop(VAR_16, VAR_17);
  else
   FUNC_7(VAR_17);
  FUNC_6(&VAR_16->stats->tx_err);
  FUNC_17(&VAR_19->global_lock, VAR_18);
  return -VAR_9;
 }

 if (VAR_16->qos.aal == VAR_2)
  VAR_21->status |= FUNC_3(VAR_15);
 else {
  char *VAR_22 = (void *) (VAR_17->data + 3);
  int VAR_23, VAR_24;

  VAR_24 = (*VAR_22 & VAR_5) >> VAR_6;
  VAR_23 = (*VAR_22 & VAR_4);
  VAR_21->status |= FUNC_3(VAR_24);
  if (VAR_23)
   VAR_21->status |= VAR_11;

  FUNC_14(VAR_17, VAR_1 - VAR_3);
 }
 VAR_21->address0 = FUNC_8(&VAR_19->pci_dev->dev, VAR_17->data, VAR_17->len, VAR_7);
 VAR_21->length0 = VAR_17->len | VAR_13;

 VAR_21->status |= VAR_12;

 VAR_21->vcc = VAR_16;
 VAR_21->skb = VAR_17;
 FUNC_22();
 FUNC_0(VAR_17)->vcc = VAR_16;

 FUNC_5(VAR_19, VAR_21, VAR_20);
 FUNC_17(&VAR_19->global_lock, VAR_18);

 FUNC_6(&VAR_16->stats->tx);

 return 0;
}
