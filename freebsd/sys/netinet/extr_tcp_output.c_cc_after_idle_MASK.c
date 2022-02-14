
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpcb {int ccv; int t_inpcb; } ;
struct TYPE_2__ {int (* after_idle ) (int ) ;} ;


 TYPE_1__* FUNC_0 (struct tcpcb*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void inline
FUNC_3(struct tcpcb *VAR_0)
{
 FUNC_1(VAR_0->t_inpcb);

 if (FUNC_0(VAR_0)->after_idle != ((void*)0))
  FUNC_0(VAR_0)->after_idle(VAR_0->ccv);
}
