
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tseg_qent {int tqe_len; int tqe_flags; int tqe_mbuf_cnt; TYPE_2__* tqe_m; int tqe_start; struct mbuf* tqe_last; } ;
struct tcphdr {int th_flags; int th_seq; } ;
struct tcpcb {int t_rcvoopack; } ;
struct mbuf {struct mbuf* m_next; } ;
struct TYPE_3__ {int len; } ;
struct TYPE_4__ {TYPE_1__ m_pkthdr; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct tcpcb*,struct tseg_qent*,int *,int ,int,int ,int ) ;
 int FUNC_3 (struct tcpcb*,int ,int,TYPE_2__*,int ,struct tseg_qent*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(struct tcpcb *VAR_4, struct tseg_qent *VAR_5,
    struct mbuf *VAR_6, struct tcphdr *VAR_7, int VAR_8,
    struct mbuf *VAR_9, int VAR_10)
{




 VAR_5->tqe_len += VAR_8;
 VAR_5->tqe_m->m_pkthdr.len += VAR_8;

 VAR_5->tqe_flags |= (VAR_7->th_flags & VAR_1);
 VAR_5->tqe_last->m_next = VAR_6;
 VAR_5->tqe_last = VAR_9;
 VAR_5->tqe_mbuf_cnt += VAR_10;
 VAR_4->t_rcvoopack++;
 FUNC_1(VAR_3);
 FUNC_0(VAR_2, VAR_8);





}
