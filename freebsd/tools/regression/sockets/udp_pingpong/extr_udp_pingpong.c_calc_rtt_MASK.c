
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct test_pkt {TYPE_1__* tss; } ;
struct rtt {int e2e; int a2b_b2a; int b2a; int a2b; } ;
struct TYPE_2__ {int sent; int recvd; } ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int *,int *) ;

__attribute__((used)) static void
FUNC_2(struct test_pkt *VAR_0, struct rtt *VAR_1)
{

    FUNC_1(&VAR_0->tss[1].recvd, &VAR_0->tss[0].sent, &VAR_1->a2b);
    FUNC_1(&VAR_0->tss[0].recvd, &VAR_0->tss[1].sent, &VAR_1->b2a);
    FUNC_0(&VAR_1->a2b, &VAR_1->b2a, &VAR_1->a2b_b2a);
    FUNC_1(&VAR_0->tss[0].recvd, &VAR_0->tss[0].sent, &VAR_1->e2e);
}
