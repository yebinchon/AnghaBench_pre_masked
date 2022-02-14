
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_tmu_channel {TYPE_1__* tmu; } ;
struct TYPE_2__ {int has_clockevent; int has_clocksource; } ;


 int FUNC_0 (struct sh_tmu_channel*,char const*) ;
 int FUNC_1 (struct sh_tmu_channel*,char const*) ;

__attribute__((used)) static int FUNC_2(struct sh_tmu_channel *VAR_0, const char *VAR_1,
      bool VAR_2, bool VAR_3)
{
 if (VAR_2) {
  VAR_0->tmu->has_clockevent = 1;
  FUNC_0(VAR_0, VAR_1);
 } else if (VAR_3) {
  VAR_0->tmu->has_clocksource = 1;
  FUNC_1(VAR_0, VAR_1);
 }

 return 0;
}
