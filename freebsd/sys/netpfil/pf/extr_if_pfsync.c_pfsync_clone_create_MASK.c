
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pfsync_softc {int sc_maxupdates; struct pfsync_bucket* sc_buckets; int sc_bulk_mtx; int sc_bulkfail_tmo; int sc_bulk_tmo; int sc_mtx; struct ifnet* sc_ifp; int sc_flags; } ;
struct pfsync_header {int dummy; } ;
struct TYPE_2__ {int ifq_maxlen; } ;
struct pfsync_bucket {int b_id; TYPE_1__ b_snd; int b_tmo; int b_deferrals; int b_upd_req_list; int * b_qs; int b_len; struct pfsync_softc* b_sc; int b_mtx; } ;
struct ifnet {int if_hdrlen; int if_mtu; int if_type; int if_output; int if_ioctl; struct pfsync_softc* if_softc; } ;
struct if_clone {int dummy; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *) ;
 struct pfsync_softc* VAR_13 ;
 int FUNC_1 (struct ifnet*,int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (struct pfsync_softc*,int ) ;
 struct ifnet* FUNC_5 (int ) ;
 int FUNC_6 (struct ifnet*) ;
 int FUNC_7 (struct ifnet*,char*,int) ;
 int VAR_14 ;
 struct pfsync_softc* FUNC_8 (int,int ,int) ;
 struct pfsync_bucket* FUNC_9 (int,int,int ,int) ;
 int VAR_15 ;
 int FUNC_10 (int *,char*,int *,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 char* VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static int
FUNC_11(struct if_clone *VAR_20, int VAR_21, caddr_t VAR_22)
{
 struct pfsync_softc *VAR_23;
 struct ifnet *VAR_24;
 struct pfsync_bucket *VAR_25;
 int VAR_26, VAR_27;

 if (VAR_21 != 0)
  return (VAR_1);

 if (! VAR_16)
  VAR_16 = VAR_15 * 2;

 VAR_23 = FUNC_8(sizeof(struct pfsync_softc), VAR_6, VAR_7 | VAR_8);
 VAR_23->sc_flags |= VAR_9;
 VAR_23->sc_maxupdates = 128;

 VAR_24 = VAR_23->sc_ifp = FUNC_5(VAR_4);
 if (VAR_24 == ((void*)0)) {
  FUNC_4(VAR_23, VAR_6);
  return (VAR_2);
 }
 FUNC_7(VAR_24, VAR_18, VAR_21);
 VAR_24->if_softc = VAR_23;
 VAR_24->if_ioctl = VAR_17;
 VAR_24->if_output = VAR_19;
 VAR_24->if_type = VAR_4;
 VAR_24->if_hdrlen = sizeof(struct pfsync_header);
 VAR_24->if_mtu = VAR_3;
 FUNC_10(&VAR_23->sc_mtx, VAR_18, ((void*)0), VAR_5);
 FUNC_10(&VAR_23->sc_bulk_mtx, "pfsync bulk", ((void*)0), VAR_5);
 FUNC_3(&VAR_23->sc_bulk_tmo, &VAR_23->sc_bulk_mtx, 0);
 FUNC_3(&VAR_23->sc_bulkfail_tmo, &VAR_23->sc_bulk_mtx, 0);

 FUNC_6(VAR_24);

 FUNC_1(VAR_24, VAR_0, VAR_10);

 VAR_23->sc_buckets = FUNC_9(VAR_16, sizeof(*VAR_23->sc_buckets),
     VAR_6, VAR_8 | VAR_7);
 for (VAR_26 = 0; VAR_26 < VAR_16; VAR_26++) {
  VAR_25 = &VAR_23->sc_buckets[VAR_26];
  FUNC_10(&VAR_25->b_mtx, "pfsync bucket", ((void*)0), VAR_5);

  VAR_25->b_id = VAR_26;
  VAR_25->b_sc = VAR_23;
  VAR_25->b_len = VAR_11;

  for (VAR_27 = 0; VAR_27 < VAR_12; VAR_27++)
   FUNC_0(&VAR_25->b_qs[VAR_27]);

  FUNC_0(&VAR_25->b_upd_req_list);
  FUNC_0(&VAR_25->b_deferrals);

  FUNC_2(&VAR_25->b_tmo, 1);

  VAR_25->b_snd.ifq_maxlen = VAR_14;
 }

 VAR_13 = VAR_23;

 return (0);
}
