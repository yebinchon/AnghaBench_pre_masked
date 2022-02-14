
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int len; } ;
struct mbuf {TYPE_5__ m_pkthdr; struct mbuf* m_nextpkt; } ;
struct TYPE_7__ {scalar_t__ length; } ;
struct TYPE_8__ {int q_time; TYPE_1__ ni; } ;
struct fq_pie_si {TYPE_2__ main_q; } ;
struct TYPE_9__ {scalar_t__ accu_prob; } ;
struct TYPE_10__ {struct mbuf* head; } ;
struct fq_pie_flow {TYPE_3__ pst; TYPE_4__ mq; } ;
struct TYPE_12__ {int curr_time; } ;


 int FUNC_0 (struct mbuf*) ;
 TYPE_6__ VAR_0 ;
 int FUNC_1 (struct fq_pie_flow*,struct fq_pie_si*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct fq_pie_flow *VAR_1, struct fq_pie_si *VAR_2)
{
 struct mbuf *VAR_3 = VAR_1->mq.head;

 if (VAR_3 == ((void*)0))
  return;
 VAR_1->mq.head = VAR_3->m_nextpkt;

 FUNC_1(VAR_1, VAR_2, -VAR_3->m_pkthdr.len, 1);

 if (VAR_2->main_q.ni.length == 0)
   VAR_2->main_q.q_time = VAR_0.curr_time;

 VAR_1->pst.accu_prob = 0;

 FUNC_0(VAR_3);
}
