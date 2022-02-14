
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nios2_clocksource {int timer; } ;
struct clocksource {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int *) ;
 struct nios2_clocksource* FUNC_3 (struct clocksource*) ;

__attribute__((used)) static u64 FUNC_4(struct clocksource *VAR_0)
{
 struct nios2_clocksource *VAR_1 = FUNC_3(VAR_0);
 unsigned long VAR_2;
 u32 VAR_3;

 FUNC_1(VAR_2);
 VAR_3 = FUNC_2(&VAR_1->timer);
 FUNC_0(VAR_2);


 return ~VAR_3;
}
