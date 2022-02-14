
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct tcpcb {scalar_t__ t_state; int snd_cwnd; scalar_t__ t_maxseg; int ccv; int t_inpcb; } ;
struct TYPE_2__ {int (* after_idle ) (int ) ;} ;


 TYPE_1__* FUNC_0 (struct tcpcb*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct tcpcb*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void
FUNC_6(struct tcpcb *VAR_3)
{
 uint32_t VAR_4;

 FUNC_1(VAR_3->t_inpcb);






 if (FUNC_0(VAR_3)->after_idle != ((void*)0))
  FUNC_0(VAR_3)->after_idle(VAR_3->ccv);

 if (VAR_3->snd_cwnd == 1)
  VAR_4 = VAR_3->t_maxseg;
 else
  VAR_4 = FUNC_4(FUNC_5(VAR_3));






 if (VAR_3->snd_cwnd < VAR_4) {
  VAR_3->snd_cwnd = VAR_4;
 }
}
