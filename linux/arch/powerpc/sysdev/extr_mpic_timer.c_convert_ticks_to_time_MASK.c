
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ time64_t ;
struct timer_group_priv {int timerfreq; } ;


 scalar_t__ FUNC_0 (scalar_t__ const,int ) ;

__attribute__((used)) static void FUNC_1(struct timer_group_priv *VAR_0,
  const u64 VAR_1, time64_t *VAR_2)
{
 *VAR_2 = (u64)FUNC_0(VAR_1, VAR_0->timerfreq);
}
