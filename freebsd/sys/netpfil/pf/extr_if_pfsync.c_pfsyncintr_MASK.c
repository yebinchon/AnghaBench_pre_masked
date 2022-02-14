
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pfsync_softc {int sc_imo; struct pfsync_bucket* sc_buckets; TYPE_1__* sc_ifp; } ;
struct pfsync_bucket {int b_flags; scalar_t__ b_len; int b_snd; int b_id; } ;
struct mbuf {int m_flags; struct mbuf* m_nextpkt; } ;
struct TYPE_4__ {int pfsyncs_oerrors; int pfsyncs_opackets; } ;
struct TYPE_3__ {int if_vnet; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct pfsync_bucket*) ;
 int FUNC_3 (struct pfsync_bucket*) ;
 scalar_t__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_4 (int *,struct mbuf*) ;
 scalar_t__ FUNC_5 (struct mbuf*,int *,int *,int ,int *,int *) ;
 int VAR_5 ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void
FUNC_7(void *VAR_6)
{
 struct pfsync_softc *VAR_7 = VAR_6;
 struct pfsync_bucket *VAR_8;
 struct mbuf *VAR_9, *VAR_10;
 int VAR_11;

 FUNC_1(VAR_7->sc_ifp->if_vnet);

 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  VAR_8 = &VAR_7->sc_buckets[VAR_11];

  FUNC_2(VAR_8);
  if ((VAR_8->b_flags & VAR_2) && VAR_8->b_len > VAR_3) {
   FUNC_6(0, VAR_8->b_id);
   VAR_8->b_flags &= ~VAR_2;
  }
  FUNC_4(&VAR_8->b_snd, VAR_9);
  FUNC_3(VAR_8);

  for (; VAR_9 != ((void*)0); VAR_9 = VAR_10) {

   VAR_10 = VAR_9->m_nextpkt;
   VAR_9->m_nextpkt = ((void*)0);






   if (VAR_9->m_flags & VAR_1)
    FUNC_5(VAR_9, ((void*)0), ((void*)0), 0, ((void*)0), ((void*)0));
   else if (FUNC_5(VAR_9, ((void*)0), ((void*)0), VAR_0, &VAR_7->sc_imo,
       ((void*)0)) == 0)
    VAR_4.pfsyncs_opackets++;
   else
    VAR_4.pfsyncs_oerrors++;
  }
 }
 FUNC_0();
}
