
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sh_tmu_channel {int dummy; } ;
struct clocksource {int dummy; } ;


 int VAR_0 ;
 struct sh_tmu_channel* FUNC_0 (struct clocksource*) ;
 int FUNC_1 (struct sh_tmu_channel*,int ) ;

__attribute__((used)) static u64 FUNC_2(struct clocksource *VAR_1)
{
 struct sh_tmu_channel *VAR_2 = FUNC_0(VAR_1);

 return FUNC_1(VAR_2, VAR_0) ^ 0xffffffff;
}
