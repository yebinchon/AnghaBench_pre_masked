
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pfsync_state {int creatorid; int id; } ;
struct pfsync_pkt {int dummy; } ;
struct pf_state {int state_flags; } ;
struct mbuf {scalar_t__ m_data; } ;
struct TYPE_2__ {int pfsyncs_badstate; int pfsyncs_badlen; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 struct mbuf* FUNC_0 (struct mbuf*,int,int,int*) ;
 struct pf_state* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct pf_state*,int ) ;

__attribute__((used)) static int
FUNC_3(struct pfsync_pkt *VAR_3, struct mbuf *VAR_4, int VAR_5, int VAR_6)
{
 struct mbuf *VAR_7;
 struct pfsync_state *VAR_8, *VAR_9;
 struct pf_state *VAR_10;
 int VAR_11 = VAR_6 * sizeof(*VAR_9);
 int VAR_12, VAR_13;

 VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_11, &VAR_12);
 if (VAR_7 == ((void*)0)) {
  VAR_2.pfsyncs_badlen++;
  return (-1);
 }
 VAR_8 = (struct pfsync_state *)(VAR_7->m_data + VAR_12);

 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  VAR_9 = &VAR_8[VAR_13];

  VAR_10 = FUNC_1(VAR_9->id, VAR_9->creatorid);
  if (VAR_10 == ((void*)0)) {
   VAR_2.pfsyncs_badstate++;
   continue;
  }
  VAR_10->state_flags |= VAR_0;
  FUNC_2(VAR_10, VAR_1);
 }

 return (VAR_11);
}
