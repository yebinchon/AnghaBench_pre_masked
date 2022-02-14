
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct fsmheader {int id; } ;
struct fsm {TYPE_1__* fn; } ;
struct TYPE_2__ {int (* RecvResetAck ) (struct fsm*,int ) ;} ;


 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 (struct fsm*,int ) ;

__attribute__((used)) static void
FUNC_2(struct fsm *VAR_0, struct fsmheader *VAR_1, struct mbuf *VAR_2)
{
  (*VAR_0->fn->RecvResetAck)(VAR_0, VAR_1->id);
  FUNC_0(VAR_2);
}
