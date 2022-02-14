
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; TYPE_3__* rcvif; } ;
struct mbuf {int m_len; TYPE_1__ m_pkthdr; } ;
struct llan_xfer {struct mbuf* rx_mbuf; } ;
struct llan_softc {size_t rx_dma_slot; int rx_valid_val; int rx_buf_len; int io_lock; TYPE_2__* rx_buf; int unit; TYPE_3__* ifp; } ;
struct TYPE_7__ {int (* if_input ) (TYPE_3__*,struct mbuf*) ;} ;
struct TYPE_6__ {int control; int length; scalar_t__ offset; scalar_t__ handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_1 (struct llan_softc*,struct llan_xfer*) ;
 int FUNC_2 (struct mbuf*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (TYPE_3__*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_3)
{
 struct llan_softc *VAR_4 = VAR_3;
 struct llan_xfer *VAR_5;
 struct mbuf *VAR_6;

 FUNC_3(&VAR_4->io_lock);
restart:
 FUNC_5(VAR_0, VAR_4->unit, 0);

 while ((VAR_4->rx_buf[VAR_4->rx_dma_slot].control >> 7) == VAR_4->rx_valid_val) {
  VAR_5 = (struct llan_xfer *)VAR_4->rx_buf[VAR_4->rx_dma_slot].handle;
  VAR_6 = VAR_5->rx_mbuf;
  FUNC_2(VAR_6, VAR_4->rx_buf[VAR_4->rx_dma_slot].offset - 8);
  VAR_6->m_len = VAR_4->rx_buf[VAR_4->rx_dma_slot].length;


  if (FUNC_1(VAR_4, VAR_5) != 0) {
   FUNC_0(VAR_4->ifp, VAR_1, 1);
   continue;
  }

  FUNC_0(VAR_4->ifp, VAR_2, 1);
  FUNC_2(VAR_6, VAR_4->rx_buf[VAR_4->rx_dma_slot].offset);
  VAR_6->m_len = VAR_4->rx_buf[VAR_4->rx_dma_slot].length;
  VAR_6->m_pkthdr.rcvif = VAR_4->ifp;
  VAR_6->m_pkthdr.len = VAR_6->m_len;
  VAR_4->rx_dma_slot++;

  if (VAR_4->rx_dma_slot >= VAR_4->rx_buf_len/sizeof(VAR_4->rx_buf[0])) {
   VAR_4->rx_dma_slot = 0;
   VAR_4->rx_valid_val = !VAR_4->rx_valid_val;
  }

  FUNC_4(&VAR_4->io_lock);
  (*VAR_4->ifp->if_input)(VAR_4->ifp, VAR_6);
  FUNC_3(&VAR_4->io_lock);
 }

 FUNC_5(VAR_0, VAR_4->unit, 1);






 if ((VAR_4->rx_buf[VAR_4->rx_dma_slot].control >> 7) == VAR_4->rx_valid_val)
  goto restart;

 FUNC_4(&VAR_4->io_lock);
}
