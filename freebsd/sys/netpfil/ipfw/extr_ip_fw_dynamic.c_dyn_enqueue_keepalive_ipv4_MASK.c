
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcphdr {int dummy; } ;
struct mbufq {int dummy; } ;
struct mbuf {int dummy; } ;
struct ip {int dummy; } ;
struct dyn_ipv4_state {int dport; int sport; TYPE_1__* data; int dst; int src; } ;
struct TYPE_2__ {int state; scalar_t__ ack_fwd; scalar_t__ ack_rev; int fibnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mbuf*,int ,int ,scalar_t__,scalar_t__,int ,int ) ;
 struct mbuf* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct mbuf*) ;
 scalar_t__ FUNC_4 (struct mbufq*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_5(struct mbufq *VAR_3, const struct dyn_ipv4_state *VAR_4)
{
 struct mbuf *VAR_5;

 if ((VAR_4->data->state & VAR_0) == 0 && VAR_4->data->ack_fwd > 0) {
  VAR_5 = FUNC_1(sizeof(struct ip) + sizeof(struct tcphdr),
      VAR_4->data->fibnum);
  if (VAR_5 != ((void*)0)) {
   FUNC_0(VAR_5, VAR_4->dst, VAR_4->src,
       VAR_4->data->ack_fwd - 1, VAR_4->data->ack_rev,
       VAR_4->dport, VAR_4->sport);
   if (FUNC_4(VAR_3, VAR_5)) {
    FUNC_3(VAR_5);
    FUNC_2(VAR_2, "ipfw: limit for IPv4 "
        "keepalive queue is reached.\n");
    return;
   }
  }
 }

 if ((VAR_4->data->state & VAR_1) == 0 && VAR_4->data->ack_rev > 0) {
  VAR_5 = FUNC_1(sizeof(struct ip) + sizeof(struct tcphdr),
      VAR_4->data->fibnum);
  if (VAR_5 != ((void*)0)) {
   FUNC_0(VAR_5, VAR_4->src, VAR_4->dst,
       VAR_4->data->ack_rev - 1, VAR_4->data->ack_fwd,
       VAR_4->sport, VAR_4->dport);
   if (FUNC_4(VAR_3, VAR_5)) {
    FUNC_3(VAR_5);
    FUNC_2(VAR_2, "ipfw: limit for IPv4 "
        "keepalive queue is reached.\n");
    return;
   }
  }
 }
}
