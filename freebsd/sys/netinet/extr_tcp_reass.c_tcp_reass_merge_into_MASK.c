
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tseg_qent {int tqe_flags; scalar_t__ tqe_len; TYPE_3__* tqe_m; scalar_t__ tqe_mbuf_cnt; TYPE_1__* tqe_last; } ;
struct tcpcb {int t_segqlen; int t_segq; } ;
struct TYPE_5__ {int len; } ;
struct TYPE_6__ {TYPE_2__ m_pkthdr; } ;
struct TYPE_4__ {TYPE_3__* m_next; } ;


 int FUNC_0 (int *,struct tseg_qent*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int FUNC_2 (struct tcpcb*,struct tseg_qent*,struct tseg_qent*,int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,struct tseg_qent*) ;

__attribute__((used)) static void
FUNC_4(struct tcpcb *VAR_5, struct tseg_qent *VAR_6,
    struct tseg_qent *VAR_7)
{
 VAR_6->tqe_last->m_next = VAR_7->tqe_m;
 VAR_6->tqe_last = VAR_7->tqe_last;
 VAR_6->tqe_len += VAR_7->tqe_len;
 VAR_6->tqe_mbuf_cnt += VAR_7->tqe_mbuf_cnt;
 VAR_6->tqe_m->m_pkthdr.len += VAR_7->tqe_len;
 VAR_6->tqe_flags |= (VAR_7->tqe_flags & VAR_1);
 FUNC_0(&VAR_5->t_segq, VAR_7, VAR_4);
 FUNC_3(VAR_3, VAR_7);
 VAR_5->t_segqlen--;

}
