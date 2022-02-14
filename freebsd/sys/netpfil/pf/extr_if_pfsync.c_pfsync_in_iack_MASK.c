
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pfsync_pkt {int dummy; } ;
struct pfsync_ins_ack {int creatorid; int id; } ;
struct pf_state {int state_flags; } ;
struct mbuf {scalar_t__ m_data; } ;
struct TYPE_2__ {int pfsyncs_badlen; } ;


 int VAR_0 ;
 int FUNC_0 (struct pf_state*) ;
 TYPE_1__ VAR_1 ;
 struct mbuf* FUNC_1 (struct mbuf*,int,int,int*) ;
 struct pf_state* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct pf_state*,int ) ;

__attribute__((used)) static int
FUNC_4(struct pfsync_pkt *VAR_2, struct mbuf *VAR_3, int VAR_4, int VAR_5)
{
 struct pfsync_ins_ack *VAR_6, *VAR_7;
 struct pf_state *VAR_8;

 struct mbuf *VAR_9;
 int VAR_10 = VAR_5 * sizeof(*VAR_6);
 int VAR_11, VAR_12;

 VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_10, &VAR_11);
 if (VAR_9 == ((void*)0)) {
  VAR_1.pfsyncs_badlen++;
  return (-1);
 }
 VAR_7 = (struct pfsync_ins_ack *)(VAR_9->m_data + VAR_11);

 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  VAR_6 = &VAR_7[VAR_12];

  VAR_8 = FUNC_2(VAR_6->id, VAR_6->creatorid);
  if (VAR_8 == ((void*)0))
   continue;

  if (VAR_8->state_flags & VAR_0) {
   FUNC_3(VAR_8, 0);
  }
  FUNC_0(VAR_8);
 }





 return (VAR_5 * sizeof(struct pfsync_ins_ack));
}
