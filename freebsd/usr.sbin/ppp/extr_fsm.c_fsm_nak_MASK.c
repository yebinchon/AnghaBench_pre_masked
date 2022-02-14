
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsm_opt {int dummy; } ;
struct fsm_decode {scalar_t__ nak; scalar_t__ nakend; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,struct fsm_opt const*) ;

void
FUNC_1(struct fsm_decode *VAR_1, const struct fsm_opt *VAR_2)
{
  if (!VAR_1)
    return;
  VAR_1->nakend += FUNC_0(VAR_1->nakend, VAR_0 - (VAR_1->nakend - VAR_1->nak), VAR_2);
}
