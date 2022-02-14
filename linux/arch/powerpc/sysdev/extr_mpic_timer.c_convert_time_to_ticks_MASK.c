
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ time64_t ;
struct timer_group_priv {scalar_t__ timerfreq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct timer_group_priv *VAR_2,
  time64_t VAR_3, u64 *VAR_4)
{
 u64 VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2->timerfreq);

 if (VAR_3 > VAR_5)
  return -VAR_0;

 *VAR_4 = (u64)VAR_3 * (u64)VAR_2->timerfreq;

 return 0;
}
