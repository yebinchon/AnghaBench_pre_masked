
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int tcp_seq ;
struct tseg_qent {int tqe_mbuf_cnt; int tqe_len; int tqe_flags; struct mbuf* tqe_m; int tqe_start; struct mbuf* tqe_last; } ;
struct tcpcb {int t_segqmbuflen; int t_rcvoopack; } ;
struct TYPE_2__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct mbuf*) ;
 int FUNC_4 (struct tcpcb*,struct tseg_qent*,int *,int ,int,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(struct tcpcb *VAR_4, struct tseg_qent *VAR_5, struct mbuf *VAR_6,
    tcp_seq VAR_7, int VAR_8, struct mbuf *VAR_9, int VAR_10, uint8_t VAR_11)
{




 int VAR_12;




 FUNC_3(VAR_5->tqe_m);
 FUNC_0(VAR_4->t_segqmbuflen >= VAR_5->tqe_mbuf_cnt,
  ("Tp:%p seg queue goes negative", VAR_4));
 VAR_4->t_segqmbuflen -= VAR_5->tqe_mbuf_cnt;
 VAR_5->tqe_mbuf_cnt = VAR_10;
 VAR_5->tqe_m = VAR_6;
 VAR_5->tqe_last = VAR_9;
 VAR_5->tqe_start = VAR_7;
 if (VAR_8 > VAR_5->tqe_len)
  VAR_12 = VAR_8 - VAR_5->tqe_len;
 else
  VAR_12 = 0;
 VAR_4->t_rcvoopack++;
 FUNC_2(VAR_3);
 FUNC_1(VAR_2, VAR_12);
 VAR_5->tqe_len = VAR_8;
 VAR_5->tqe_flags = (VAR_11 & VAR_1);
 VAR_5->tqe_m->m_pkthdr.len = VAR_5->tqe_len;
 VAR_4->t_segqmbuflen += VAR_10;

}
