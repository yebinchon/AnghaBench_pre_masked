
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tseg_qent {int tqe_start; int tqe_len; int tqe_mbuf_cnt; struct mbuf* tqe_m; } ;
struct tcphdr {int th_seq; } ;
struct tcpcb {int t_rcvoopack; } ;
struct TYPE_2__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; struct mbuf* m_next; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct mbuf*,int) ;
 int FUNC_4 (struct tcpcb*,struct tseg_qent*,int *,int,int,int ,int) ;
 int FUNC_5 (struct tcpcb*,int,int,struct mbuf*,int ,struct tseg_qent*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_6(struct tcpcb *VAR_4, struct tseg_qent *VAR_5, struct mbuf *VAR_6, struct tcphdr *VAR_7,
    int VAR_8, struct mbuf *VAR_9, int VAR_10)
{
 int VAR_11;




 if (FUNC_0((VAR_7->th_seq + VAR_8), VAR_5->tqe_start)) {

  VAR_11 = (VAR_7->th_seq + VAR_8) - VAR_5->tqe_start;



  FUNC_3(VAR_5->tqe_m, VAR_11);
  VAR_5->tqe_len -= VAR_11;
  VAR_5->tqe_start += VAR_11;
 }

 VAR_9->m_next = VAR_5->tqe_m;
 VAR_5->tqe_m = VAR_6;
 VAR_5->tqe_len += VAR_8;
 VAR_5->tqe_start = VAR_7->th_seq;
 VAR_5->tqe_m->m_pkthdr.len = VAR_5->tqe_len;
 VAR_5->tqe_mbuf_cnt += VAR_10;
 VAR_4->t_rcvoopack++;
 FUNC_2(VAR_3);
 FUNC_1(VAR_2, VAR_8);





}
