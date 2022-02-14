
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fsm; } ;
struct TYPE_4__ {TYPE_1__ ccp; } ;
struct mp {scalar_t__ active; int peer; struct mbuf* inbufs; TYPE_2__ link; int server; } ;
struct mbuf {struct mbuf* m_nextpkt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mbuf*) ;
 int FUNC_2 (struct mp*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct mp *VAR_0)
{
  if (VAR_0->active) {
    struct mbuf *VAR_1;


    FUNC_2(VAR_0);


    FUNC_3(&VAR_0->server);


    FUNC_0(&VAR_0->link.ccp.fsm);


    while (VAR_0->inbufs) {
      VAR_1 = VAR_0->inbufs->m_nextpkt;
      FUNC_1(VAR_0->inbufs);
      VAR_0->inbufs = VAR_1;
    }

    FUNC_4(&VAR_0->peer);
    VAR_0->active = 0;
  }
}
