
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct mbuf {int m_len; struct mbuf* m_next; } ;
struct ipoib_tx_buf {int * mapping; struct mbuf* mb; } ;
struct TYPE_6__ {int num_sge; unsigned int wr_id; int opcode; } ;
struct TYPE_5__ {int hlen; TYPE_3__ wr; void* header; scalar_t__ mss; struct ib_ah* ah; int remote_qpn; } ;
struct ipoib_dev_priv {TYPE_2__ tx_wr; int qp; TYPE_1__* tx_sge; } ;
struct ib_send_wr {int dummy; } ;
struct ib_ah {int dummy; } ;
struct TYPE_4__ {int length; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_3__*,struct ib_send_wr**) ;

__attribute__((used)) static inline int
FUNC_1(struct ipoib_dev_priv *VAR_2, unsigned int VAR_3,
    struct ib_ah *VAR_4, u32 VAR_5, struct ipoib_tx_buf *VAR_6, void *VAR_7,
    int VAR_8)
{
 struct ib_send_wr *VAR_9;
 struct mbuf *VAR_10 = VAR_6->mb;
 u64 *VAR_11 = VAR_6->mapping;
 struct mbuf *VAR_12;
 int VAR_13;

 for (VAR_12 = VAR_10, VAR_13 = 0; VAR_12 != ((void*)0); VAR_12 = VAR_12->m_next, VAR_13++) {
  VAR_2->tx_sge[VAR_13].addr = VAR_11[VAR_13];
  VAR_2->tx_sge[VAR_13].length = VAR_12->m_len;
 }
 VAR_2->tx_wr.wr.num_sge = VAR_13;
 VAR_2->tx_wr.wr.wr_id = VAR_3;
 VAR_2->tx_wr.remote_qpn = VAR_5;
 VAR_2->tx_wr.ah = VAR_4;

 if (VAR_7) {
  VAR_2->tx_wr.mss = 0;
  VAR_2->tx_wr.header = VAR_7;
  VAR_2->tx_wr.hlen = VAR_8;
  VAR_2->tx_wr.wr.opcode = VAR_0;
 } else
  VAR_2->tx_wr.wr.opcode = VAR_1;

 return FUNC_0(VAR_2->qp, &VAR_2->tx_wr.wr, &VAR_9);
}
