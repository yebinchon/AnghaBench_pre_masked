
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipoib_tx_buf {int skb; } ;
struct ipoib_dev_priv {int tx_tail; int tx_head; int flags; } ;
struct ipoib_cm_tx {int tx_tail; struct ipoib_tx_buf* tx_ring; TYPE_1__* qp; int dev; scalar_t__ tx_head; scalar_t__ id; } ;
struct TYPE_2__ {int qp_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct ipoib_dev_priv*,char*,int ,scalar_t__,int) ;
 int FUNC_4 (struct ipoib_dev_priv*,struct ipoib_tx_buf*) ;
 struct ipoib_dev_priv* FUNC_5 (int ) ;
 int VAR_2 ;
 int FUNC_6 (struct ipoib_dev_priv*,char*,scalar_t__) ;
 unsigned long VAR_3 ;
 int FUNC_7 (struct ipoib_cm_tx*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (int,int) ;
 int FUNC_16 (struct ipoib_tx_buf*) ;

__attribute__((used)) static void FUNC_17(struct ipoib_cm_tx *VAR_4)
{
 struct ipoib_dev_priv *VAR_5 = FUNC_5(VAR_4->dev);
 struct ipoib_tx_buf *VAR_6;
 unsigned long VAR_7;

 FUNC_3(VAR_5, "Destroy active connection 0x%x head 0x%x tail 0x%x\n",
    VAR_4->qp ? VAR_4->qp->qp_num : 0, VAR_4->tx_head, VAR_4->tx_tail);

 if (VAR_4->id)
  FUNC_1(VAR_4->id);

 if (VAR_4->tx_ring) {

  VAR_7 = VAR_3;
  while ((int) VAR_4->tx_tail - (int) VAR_4->tx_head < 0) {
   if (FUNC_13(VAR_3, VAR_7 + 5 * VAR_0)) {
    FUNC_6(VAR_5, "timing out; %d sends not completed\n",
        VAR_4->tx_head - VAR_4->tx_tail);
    goto timeout;
   }

   FUNC_15(1000, 2000);
  }
 }

timeout:

 while ((int) VAR_4->tx_tail - (int) VAR_4->tx_head < 0) {
  VAR_6 = &VAR_4->tx_ring[VAR_4->tx_tail & (VAR_2 - 1)];
  FUNC_4(VAR_5, VAR_6);
  FUNC_0(VAR_6->skb);
  FUNC_9(VAR_4->dev);
  ++VAR_4->tx_tail;
  ++VAR_5->tx_tail;
  if (FUNC_14(VAR_5->tx_head - VAR_5->tx_tail == VAR_2 >> 1) &&
      FUNC_8(VAR_4->dev) &&
      FUNC_12(VAR_1, &VAR_5->flags))
   FUNC_11(VAR_4->dev);
  FUNC_10(VAR_4->dev);
 }

 if (VAR_4->qp)
  FUNC_2(VAR_4->qp);

 FUNC_16(VAR_4->tx_ring);
 FUNC_7(VAR_4);
}
