
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct clocksource {int dummy; } ;
struct TYPE_2__ {unsigned long itc_lastcycle; int itc_jitter; } ;


 unsigned long FUNC_0 (unsigned long*,unsigned long,unsigned long) ;
 unsigned long FUNC_1 () ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static u64 FUNC_4(struct clocksource *VAR_1)
{
 unsigned long VAR_2, VAR_3, VAR_4;

 if (!VAR_0.itc_jitter)
  return FUNC_1();

 VAR_2 = VAR_0.itc_lastcycle;
 VAR_3 = FUNC_1();
 if (VAR_2 && FUNC_2(VAR_2, VAR_3))
  return VAR_2;







 VAR_4 = FUNC_0(&VAR_0.itc_lastcycle, VAR_2, VAR_3);
 if (FUNC_3(VAR_4 != VAR_2))
  return VAR_4;

 return VAR_3;
}
