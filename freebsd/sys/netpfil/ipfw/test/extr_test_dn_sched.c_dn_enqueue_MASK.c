
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct TYPE_4__ {int length; int drops; int tot_pkts; int tot_bytes; } ;
struct dn_queue {TYPE_2__ ni; int mq; } ;


 int FUNC_0 (int *,struct mbuf*) ;

int
FUNC_1(struct dn_queue *VAR_0, struct mbuf* VAR_1, int VAR_2)
{
        if (VAR_2)
                goto drop;
        if (VAR_0->ni.length >= 200)
                goto drop;
        FUNC_0(&VAR_0->mq, VAR_1);
        VAR_0->ni.length++;
        VAR_0->ni.tot_bytes += VAR_1->m_pkthdr.len;
        VAR_0->ni.tot_pkts++;
        return 0;

drop:
        VAR_0->ni.drops++;
        return 1;
}
