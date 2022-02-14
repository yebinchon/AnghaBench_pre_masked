
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ state; } ;
struct pfsync_state {scalar_t__ timeout; TYPE_2__ dst; TYPE_2__ src; int creatorid; int id; } ;
struct pfsync_softc {int dummy; } ;
struct pfsync_pkt {int flags; } ;
struct TYPE_12__ {scalar_t__ state; } ;
struct pf_state {int state_flags; scalar_t__ timeout; void* pfsync_time; void* expire; TYPE_5__ dst; TYPE_5__ src; TYPE_1__** key; } ;
struct mbuf {scalar_t__ m_data; } ;
struct TYPE_14__ {scalar_t__ debug; } ;
struct TYPE_13__ {int pfsyncs_stale; int pfsyncs_badstate; int pfsyncs_badval; int pfsyncs_badlen; } ;
struct TYPE_10__ {scalar_t__ proto; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct pf_state*) ;
 scalar_t__ VAR_5 ;
 TYPE_9__ VAR_6 ;
 struct pfsync_softc* VAR_7 ;
 TYPE_8__ VAR_8 ;
 struct mbuf* FUNC_1 (struct mbuf*,int,int,int*) ;
 struct pf_state* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_5__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_5__*) ;
 int FUNC_5 (struct pfsync_softc*) ;
 scalar_t__ FUNC_6 (struct pfsync_state*,int ) ;
 int FUNC_7 (struct pf_state*,int) ;
 int FUNC_8 (struct pf_state*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_9 (struct pf_state*) ;
 int FUNC_10 (char*) ;
 void* VAR_9 ;

__attribute__((used)) static int
FUNC_11(struct pfsync_pkt *VAR_10, struct mbuf *VAR_11, int VAR_12, int VAR_13)
{
 struct pfsync_softc *VAR_14 = VAR_7;
 struct pfsync_state *VAR_15, *VAR_16;
 struct pf_state *VAR_17;
 int VAR_18;

 struct mbuf *VAR_19;
 int VAR_20 = VAR_13 * sizeof(*VAR_16);
 int VAR_21, VAR_22;

 VAR_19 = FUNC_1(VAR_11, VAR_12, VAR_20, &VAR_21);
 if (VAR_19 == ((void*)0)) {
  VAR_8.pfsyncs_badlen++;
  return (-1);
 }
 VAR_15 = (struct pfsync_state *)(VAR_19->m_data + VAR_21);

 for (VAR_22 = 0; VAR_22 < VAR_13; VAR_22++) {
  VAR_16 = &VAR_15[VAR_22];


  if (VAR_16->timeout >= VAR_2 ||
      VAR_16->src.state > VAR_5 ||
      VAR_16->dst.state > VAR_5) {
   if (VAR_6.debug >= VAR_3) {
    FUNC_10("pfsync_input: PFSYNC_ACT_UPD: "
        "invalid value\n");
   }
   VAR_8.pfsyncs_badval++;
   continue;
  }

  VAR_17 = FUNC_2(VAR_16->id, VAR_16->creatorid);
  if (VAR_17 == ((void*)0)) {

   if (FUNC_6(VAR_16, VAR_10->flags))
    VAR_8.pfsyncs_badstate++;
   continue;
  }

  if (VAR_17->state_flags & VAR_1) {
   FUNC_7(VAR_17, 1);
  }

  if (VAR_17->key[VAR_4]->proto == VAR_0)
   VAR_18 = FUNC_8(VAR_17, &VAR_16->src, &VAR_16->dst);
  else {
   VAR_18 = 0;





   if (VAR_17->src.state > VAR_16->src.state)
    VAR_18++;
   else
    FUNC_3(&VAR_16->src, &VAR_17->src);
   if (VAR_17->dst.state > VAR_16->dst.state)
    VAR_18++;
   else
    FUNC_3(&VAR_16->dst, &VAR_17->dst);
  }
  if (VAR_18 < 2) {
   FUNC_4(&VAR_16->dst, &VAR_17->dst);
   FUNC_3(&VAR_16->dst, &VAR_17->dst);
   VAR_17->expire = VAR_9;
   VAR_17->timeout = VAR_16->timeout;
  }
  VAR_17->pfsync_time = VAR_9;

  if (VAR_18) {
   VAR_8.pfsyncs_stale++;

   FUNC_9(VAR_17);
   FUNC_0(VAR_17);
   FUNC_5(VAR_14);
   continue;
  }
  FUNC_0(VAR_17);
 }

 return (VAR_20);
}
