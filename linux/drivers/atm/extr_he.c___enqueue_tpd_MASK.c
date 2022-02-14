
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct he_tpdrq {unsigned int cid; int tpd; } ;
struct he_tpd {int status; int entry; TYPE_4__* vcc; scalar_t__ skb; TYPE_2__* iovec; } ;
struct he_dev {struct he_tpdrq* tpdrq_tail; int outstanding_tpds; int tpd_pool; TYPE_1__* pci_dev; struct he_tpdrq* tpdrq_head; scalar_t__ tpdrq_base; } ;
struct TYPE_8__ {TYPE_3__* stats; int (* pop ) (TYPE_4__*,scalar_t__) ;} ;
struct TYPE_7__ {int tx_err; } ;
struct TYPE_6__ {int len; scalar_t__ addr; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct he_tpd*,unsigned int,struct he_tpdrq*) ;
 int VAR_1 ;
 unsigned long FUNC_1 (struct he_tpdrq*) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,struct he_tpd*,int ) ;
 int FUNC_6 (int *,scalar_t__,int,int ) ;
 struct he_tpdrq* FUNC_7 (struct he_dev*,int ) ;
 int FUNC_8 (struct he_dev*,unsigned long,int ) ;
 int FUNC_9 (char*,unsigned int) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (TYPE_4__*,scalar_t__) ;
 int FUNC_12 () ;

__attribute__((used)) static __inline__ void
FUNC_13(struct he_dev *VAR_5, struct he_tpd *VAR_6, unsigned VAR_7)
{
 struct he_tpdrq *VAR_8;

 FUNC_0("tpdrq %p cid 0x%x -> tpdrq_tail %p\n",
     VAR_6, VAR_7, VAR_5->tpdrq_tail);


 VAR_8 = (struct he_tpdrq *) ((unsigned long) VAR_5->tpdrq_base |
     FUNC_1(VAR_5->tpdrq_tail+1));
 if (VAR_8 == VAR_5->tpdrq_head) {
  VAR_5->tpdrq_head = (struct he_tpdrq *)
   (((unsigned long)VAR_5->tpdrq_base) |
    FUNC_1(FUNC_7(VAR_5, VAR_1)));

  if (VAR_8 == VAR_5->tpdrq_head) {
   int VAR_9;

   FUNC_9("tpdrq full (cid 0x%x)\n", VAR_7);






   for (VAR_9 = 0; VAR_9 < VAR_4; ++VAR_9) {
    if (VAR_6->iovec[VAR_9].addr)
     FUNC_6(&VAR_5->pci_dev->dev,
      VAR_6->iovec[VAR_9].addr,
      VAR_6->iovec[VAR_9].len & VAR_3,
        VAR_0);
   }
   if (VAR_6->skb) {
    if (VAR_6->vcc->pop)
     VAR_6->vcc->pop(VAR_6->vcc, VAR_6->skb);
    else
     FUNC_4(VAR_6->skb);
    FUNC_3(&VAR_6->vcc->stats->tx_err);
   }
   FUNC_5(VAR_5->tpd_pool, VAR_6, FUNC_2(VAR_6->status));
   return;
  }
 }


 FUNC_10(&VAR_6->entry, &VAR_5->outstanding_tpds);
 VAR_5->tpdrq_tail->tpd = FUNC_2(VAR_6->status);
 VAR_5->tpdrq_tail->cid = VAR_7;
 FUNC_12();

 VAR_5->tpdrq_tail = VAR_8;

 FUNC_8(VAR_5, FUNC_1(VAR_5->tpdrq_tail), VAR_2);
 (void) FUNC_7(VAR_5, VAR_2);
}
