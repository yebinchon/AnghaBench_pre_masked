
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mbuf {int m_len; struct mbuf* m_next; } ;
struct ipoib_rx_buf {struct mbuf* mb; int * mapping; } ;
struct TYPE_4__ {int num_sge; int wr_id; } ;
struct ipoib_dev_priv {struct ipoib_rx_buf* rx_ring; TYPE_2__ rx_wr; int qp; TYPE_1__* rx_sge; } ;
struct ib_recv_wr {int dummy; } ;
struct TYPE_3__ {int length; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,struct ib_recv_wr**) ;
 int FUNC_1 (struct ipoib_dev_priv*,struct ipoib_rx_buf*) ;
 int FUNC_2 (struct ipoib_dev_priv*,char*,int,int) ;
 int FUNC_3 (struct mbuf*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct ipoib_dev_priv *VAR_1, int VAR_2)
{
 struct ipoib_rx_buf *VAR_3;
 struct ib_recv_wr *VAR_4;
 struct mbuf *VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_3 = &VAR_1->rx_ring[VAR_2];
 for (VAR_5 = VAR_3->mb, VAR_7 = 0; VAR_5 != ((void*)0); VAR_5 = VAR_5->m_next, VAR_7++) {
  VAR_1->rx_sge[VAR_7].addr = VAR_3->mapping[VAR_7];
  VAR_1->rx_sge[VAR_7].length = VAR_5->m_len;
 }
 VAR_1->rx_wr.num_sge = VAR_7;
 VAR_1->rx_wr.wr_id = VAR_2 | VAR_0;

 VAR_6 = FUNC_0(VAR_1->qp, &VAR_1->rx_wr, &VAR_4);
 if (FUNC_4(VAR_6)) {
  FUNC_2(VAR_1, "receive failed for buf %d (%d)\n", VAR_2, VAR_6);
  FUNC_1(VAR_1, &VAR_1->rx_ring[VAR_2]);
  FUNC_3(VAR_1->rx_ring[VAR_2].mb);
  VAR_1->rx_ring[VAR_2].mb = ((void*)0);
 }

 return VAR_6;
}
