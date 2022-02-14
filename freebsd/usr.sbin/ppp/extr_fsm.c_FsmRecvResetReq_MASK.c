
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct fsmheader {int id; } ;
struct fsm {int link; TYPE_1__* fn; } ;
struct TYPE_2__ {scalar_t__ (* RecvResetReq ) (struct fsm*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fsm*,int ,int ,int *,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mbuf*) ;
 scalar_t__ FUNC_3 (struct fsm*) ;

__attribute__((used)) static void
FUNC_4(struct fsm *VAR_2, struct fsmheader *VAR_3, struct mbuf *VAR_4)
{
  if ((*VAR_2->fn->RecvResetReq)(VAR_2)) {





    FUNC_1(VAR_2->link);
    FUNC_0(VAR_2, VAR_0, VAR_3->id, ((void*)0), 0, VAR_1);
  }
  FUNC_2(VAR_4);
}
