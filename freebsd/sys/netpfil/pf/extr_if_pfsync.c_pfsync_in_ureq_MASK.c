
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pfsync_upd_req {scalar_t__ id; scalar_t__ creatorid; } ;
struct pfsync_pkt {int dummy; } ;
struct pf_state {int state_flags; } ;
struct mbuf {scalar_t__ m_data; } ;
struct TYPE_2__ {int pfsyncs_badstate; int pfsyncs_badlen; } ;


 int VAR_0 ;
 int FUNC_0 (struct pf_state*) ;
 TYPE_1__ VAR_1 ;
 struct mbuf* FUNC_1 (struct mbuf*,int,int,int*) ;
 struct pf_state* FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (struct pf_state*) ;

__attribute__((used)) static int
FUNC_5(struct pfsync_pkt *VAR_2, struct mbuf *VAR_3, int VAR_4, int VAR_5)
{
 struct pfsync_upd_req *VAR_6, *VAR_7;
 struct mbuf *VAR_8;
 int VAR_9 = VAR_5 * sizeof(*VAR_6);
 int VAR_10, VAR_11;

 struct pf_state *VAR_12;

 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_9, &VAR_11);
 if (VAR_8 == ((void*)0)) {
  VAR_1.pfsyncs_badlen++;
  return (-1);
 }
 VAR_7 = (struct pfsync_upd_req *)(VAR_8->m_data + VAR_11);

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  VAR_6 = &VAR_7[VAR_10];

  if (VAR_6->id == 0 && VAR_6->creatorid == 0)
   FUNC_3();
  else {
   VAR_12 = FUNC_2(VAR_6->id, VAR_6->creatorid);
   if (VAR_12 == ((void*)0)) {
    VAR_1.pfsyncs_badstate++;
    continue;
   }
   if (VAR_12->state_flags & VAR_0) {
    FUNC_0(VAR_12);
    continue;
   }

   FUNC_4(VAR_12);
   FUNC_0(VAR_12);
  }
 }

 return (VAR_9);
}
