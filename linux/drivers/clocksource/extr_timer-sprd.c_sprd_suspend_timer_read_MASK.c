
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct clocksource {int mask; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static u64 FUNC_2(struct clocksource *VAR_2)
{
 return ~(u64)FUNC_0(FUNC_1(&VAR_1) +
       VAR_0) & VAR_2->mask;
}
