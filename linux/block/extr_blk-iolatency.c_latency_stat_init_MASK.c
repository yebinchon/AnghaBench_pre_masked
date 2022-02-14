
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ missed; scalar_t__ total; } ;
struct latency_stat {int rqs; TYPE_1__ ps; } ;
struct iolatency_grp {scalar_t__ ssd; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct iolatency_grp *VAR_0,
         struct latency_stat *VAR_1)
{
 if (VAR_0->ssd) {
  VAR_1->ps.total = 0;
  VAR_1->ps.missed = 0;
 } else
  FUNC_0(&VAR_1->rqs);
}
