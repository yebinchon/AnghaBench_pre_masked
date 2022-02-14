
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipoib_tx_buf {int mb; } ;
struct ipoib_dev_priv {unsigned int tx_outstanding; int flags; int tx_tail; int ca; struct ipoib_tx_buf* tx_ring; struct ifnet* dev; } ;
struct ifnet {int if_drv_flags; } ;
struct ib_wc {unsigned int wr_id; int vendor_err; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ifnet*,int ,int) ;
 int FUNC_1 (struct ipoib_dev_priv*,char*,unsigned int,int ) ;
 int FUNC_2 (int ,struct ipoib_tx_buf*) ;
 unsigned int VAR_5 ;
 int FUNC_3 (struct ipoib_dev_priv*,char*,unsigned int,unsigned int,...) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct ipoib_dev_priv *VAR_6, struct ib_wc *VAR_7)
{
 struct ifnet *VAR_8 = VAR_6->dev;
 unsigned int VAR_9 = VAR_7->wr_id;
 struct ipoib_tx_buf *VAR_10;

 FUNC_1(VAR_6, "send completion: id %d, status: %d\n",
         VAR_9, VAR_7->status);

 if (FUNC_6(VAR_9 >= VAR_5)) {
  FUNC_3(VAR_6, "send completion event with wrid %d (> %d)\n",
      VAR_9, VAR_5);
  return;
 }

 VAR_10 = &VAR_6->tx_ring[VAR_9];

 FUNC_2(VAR_6->ca, VAR_10);

 FUNC_0(VAR_8, VAR_2, 1);

 FUNC_4(VAR_10->mb);

 ++VAR_6->tx_tail;
 if (FUNC_6(--VAR_6->tx_outstanding == VAR_5 >> 1) &&
     (VAR_8->if_drv_flags & VAR_3) &&
     FUNC_5(VAR_4, &VAR_6->flags))
  VAR_8->if_drv_flags &= ~VAR_3;

 if (VAR_7->status != VAR_0 &&
     VAR_7->status != VAR_1)
  FUNC_3(VAR_6, "failed send event "
      "(status=%d, wrid=%d vend_err %x)\n",
      VAR_7->status, VAR_9, VAR_7->vendor_err);
}
