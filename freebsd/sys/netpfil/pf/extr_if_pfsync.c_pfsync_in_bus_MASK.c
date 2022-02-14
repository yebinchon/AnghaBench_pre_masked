
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pfsync_state {int dummy; } ;
struct pfsync_softc {scalar_t__ sc_ureq_sent; int sc_flags; int sc_bulkfail_tmo; int sc_bulk_tries; TYPE_1__* sc_ifp; } ;
struct pfsync_pkt {int dummy; } ;
struct pfsync_bus {int status; int endtime; } ;
struct mbuf {scalar_t__ m_data; } ;
struct TYPE_8__ {int limit; } ;
struct TYPE_7__ {int debug; } ;
struct TYPE_6__ {int pfsyncs_badlen; } ;
struct TYPE_5__ {int if_mtu; } ;


 int VAR_0 ;
 int FUNC_0 (struct pfsync_softc*) ;
 int FUNC_1 (struct pfsync_softc*) ;


 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 TYPE_4__* VAR_4 ;
 TYPE_3__ VAR_5 ;
 int VAR_6 ;
 struct pfsync_softc* VAR_7 ;
 TYPE_2__ VAR_8 ;
 int FUNC_2 (int *,int,int ,struct pfsync_softc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int VAR_9 ;
 struct mbuf* FUNC_5 (struct mbuf*,int,int,int*) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_10 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,char*) ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static int
FUNC_9(struct pfsync_pkt *VAR_12, struct mbuf *VAR_13, int VAR_14, int VAR_15)
{
 struct pfsync_softc *VAR_16 = VAR_7;
 struct pfsync_bus *VAR_17;
 struct mbuf *VAR_18;
 int VAR_19 = VAR_15 * sizeof(*VAR_17);
 int VAR_20;

 FUNC_0(VAR_16);


 if (VAR_16->sc_ureq_sent == 0) {
  FUNC_1(VAR_16);
  return (VAR_19);
 }

 VAR_18 = FUNC_5(VAR_13, VAR_14, VAR_19, &VAR_20);
 if (VAR_18 == ((void*)0)) {
  FUNC_1(VAR_16);
  VAR_8.pfsyncs_badlen++;
  return (-1);
 }
 VAR_17 = (struct pfsync_bus *)(VAR_18->m_data + VAR_20);

 switch (VAR_17->status) {
 case 128:
  FUNC_2(&VAR_16->sc_bulkfail_tmo, 4 * VAR_9 +
      VAR_4[VAR_3].limit /
      ((VAR_16->sc_ifp->if_mtu - VAR_1) /
      sizeof(struct pfsync_state)),
      VAR_10, VAR_16);
  if (VAR_5.debug >= VAR_2)
   FUNC_7("pfsync: received bulk update start\n");
  break;

 case 129:
  if (VAR_11 - FUNC_6(VAR_17->endtime) >=
      VAR_16->sc_ureq_sent) {

   VAR_16->sc_ureq_sent = 0;
   VAR_16->sc_bulk_tries = 0;
   FUNC_3(&VAR_16->sc_bulkfail_tmo);
   if (!(VAR_16->sc_flags & VAR_0) && &FUNC_4)
    FUNC_4)(-VAR_6,
        "pfsync bulk done");
   VAR_16->sc_flags |= VAR_0;
   if (VAR_5.debug >= VAR_2)
    FUNC_7("pfsync: received valid "
        "bulk update end\n");
  } else {
   if (VAR_5.debug >= VAR_2)
    FUNC_7("pfsync: received invalid "
        "bulk update end: bad timestamp\n");
  }
  break;
 }
 FUNC_1(VAR_16);

 return (VAR_19);
}
