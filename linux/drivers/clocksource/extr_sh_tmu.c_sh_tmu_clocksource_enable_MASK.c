
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_tmu_channel {int cs_enabled; } ;
struct clocksource {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 struct sh_tmu_channel* FUNC_1 (struct clocksource*) ;
 int FUNC_2 (struct sh_tmu_channel*) ;

__attribute__((used)) static int FUNC_3(struct clocksource *VAR_0)
{
 struct sh_tmu_channel *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 if (FUNC_0(VAR_1->cs_enabled))
  return 0;

 VAR_2 = FUNC_2(VAR_1);
 if (!VAR_2)
  VAR_1->cs_enabled = 1;

 return VAR_2;
}
