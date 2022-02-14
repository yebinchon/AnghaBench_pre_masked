
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udphdr {scalar_t__ uh_sport; scalar_t__ uh_dport; int uh_sum; } ;
struct pfi_kif {int dummy; } ;
struct pf_state_peer {scalar_t__ state; } ;
struct pf_state_key_cmp {scalar_t__* port; int af; int * addr; int proto; } ;
struct pf_state_key {scalar_t__* port; int * addr; } ;
struct pf_state {int direction; struct pf_state_key** key; int timeout; int expire; struct pf_state_peer src; struct pf_state_peer dst; } ;
struct TYPE_2__ {struct udphdr* udp; } ;
struct pf_pdesc {size_t didx; size_t sidx; int af; int ip_sum; int dst; int src; TYPE_1__ hdr; } ;
struct mbuf {int dummy; } ;
typedef int key ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_2 (struct pfi_kif*,struct pf_state_key_cmp*,int,struct pf_state*,struct pf_pdesc*) ;
 int FUNC_3 (struct pf_state_key_cmp*,int) ;
 int FUNC_4 (struct mbuf*,int,int,int ) ;
 int FUNC_5 (struct mbuf*,int ,scalar_t__*,int ,int *,int *,scalar_t__,int,int ) ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_6(struct pf_state **VAR_10, int VAR_11, struct pfi_kif *VAR_12,
    struct mbuf *VAR_13, int VAR_14, void *VAR_15, struct pf_pdesc *VAR_16)
{
 struct pf_state_peer *VAR_17, *VAR_18;
 struct pf_state_key_cmp VAR_19;
 struct udphdr *VAR_20 = VAR_16->hdr.udp;

 FUNC_3(&VAR_19, sizeof(VAR_19));
 VAR_19.af = VAR_16->af;
 VAR_19.proto = VAR_0;
 if (VAR_11 == VAR_5) {
  FUNC_0(&VAR_19.addr[0], VAR_16->src, VAR_19.af);
  FUNC_0(&VAR_19.addr[1], VAR_16->dst, VAR_19.af);
  VAR_19.port[0] = VAR_20->uh_sport;
  VAR_19.port[1] = VAR_20->uh_dport;
 } else {
  FUNC_0(&VAR_19.addr[1], VAR_16->src, VAR_19.af);
  FUNC_0(&VAR_19.addr[0], VAR_16->dst, VAR_19.af);
  VAR_19.port[1] = VAR_20->uh_sport;
  VAR_19.port[0] = VAR_20->uh_dport;
 }

 FUNC_2(VAR_12, &VAR_19, VAR_11, *VAR_10, VAR_16);

 if (VAR_11 == (*VAR_10)->direction) {
  VAR_17 = &(*VAR_10)->src;
  VAR_18 = &(*VAR_10)->dst;
 } else {
  VAR_17 = &(*VAR_10)->dst;
  VAR_18 = &(*VAR_10)->src;
 }


 if (VAR_17->state < VAR_4)
  VAR_17->state = VAR_4;
 if (VAR_18->state == VAR_4)
  VAR_18->state = VAR_3;


 (*VAR_10)->expire = VAR_9;
 if (VAR_17->state == VAR_3 && VAR_18->state == VAR_3)
  (*VAR_10)->timeout = VAR_1;
 else
  (*VAR_10)->timeout = VAR_2;


 if ((*VAR_10)->key[VAR_8] != (*VAR_10)->key[VAR_7]) {
  struct pf_state_key *VAR_21 = (*VAR_10)->key[VAR_16->didx];

  if (FUNC_1(VAR_16->src, &VAR_21->addr[VAR_16->sidx], VAR_16->af) ||
      VAR_21->port[VAR_16->sidx] != VAR_20->uh_sport)
   FUNC_5(VAR_13, VAR_16->src, &VAR_20->uh_sport, VAR_16->ip_sum,
       &VAR_20->uh_sum, &VAR_21->addr[VAR_16->sidx],
       VAR_21->port[VAR_16->sidx], 1, VAR_16->af);

  if (FUNC_1(VAR_16->dst, &VAR_21->addr[VAR_16->didx], VAR_16->af) ||
      VAR_21->port[VAR_16->didx] != VAR_20->uh_dport)
   FUNC_5(VAR_13, VAR_16->dst, &VAR_20->uh_dport, VAR_16->ip_sum,
       &VAR_20->uh_sum, &VAR_21->addr[VAR_16->didx],
       VAR_21->port[VAR_16->didx], 1, VAR_16->af);
  FUNC_4(VAR_13, VAR_14, sizeof(*VAR_20), (caddr_t)VAR_20);
 }

 return (VAR_6);
}
