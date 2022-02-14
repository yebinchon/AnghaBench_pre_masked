
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {struct mbuf* m_next; } ;
struct llan_softc {int tx_dma_map; int tx_dma_tag; int io_lock; } ;
struct ifnet {int if_drv_flags; int if_snd; struct llan_softc* if_softc; } ;
typedef scalar_t__ bus_addr_t ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,struct mbuf*) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,struct mbuf*,int ,struct llan_softc*,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_4 ;
 struct mbuf* FUNC_5 (struct mbuf*,int ,int) ;
 int FUNC_6 (struct mbuf*) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void
FUNC_8(struct ifnet *VAR_5)
{
 struct llan_softc *VAR_6 = VAR_5->if_softc;
 bus_addr_t VAR_7;
 int VAR_8;
 struct mbuf *VAR_9, *VAR_10;

 FUNC_7(&VAR_6->io_lock, VAR_2);
 VAR_7 = 0;

 if ((VAR_5->if_drv_flags & (VAR_1 | VAR_0)) !=
     VAR_1)
  return;

 while (!FUNC_2(&VAR_5->if_snd)) {
  FUNC_1(&VAR_5->if_snd, VAR_9);

  if (VAR_9 == ((void*)0))
   break;

  FUNC_0(VAR_5, VAR_9);

  for (VAR_10 = VAR_9, VAR_8 = 0; VAR_10 != ((void*)0); VAR_10 = VAR_10->m_next)
   VAR_8++;
  if (VAR_8 > 6) {
   VAR_10 = FUNC_5(VAR_9, VAR_3, 6);
   if (VAR_10 == ((void*)0)) {
    FUNC_6(VAR_9);
    continue;
   }
  }

  FUNC_3(VAR_6->tx_dma_tag, VAR_6->tx_dma_map,
   VAR_9, VAR_4, VAR_6, 0);
  FUNC_4(VAR_6->tx_dma_tag, VAR_6->tx_dma_map);
  FUNC_6(VAR_9);
 }
}
