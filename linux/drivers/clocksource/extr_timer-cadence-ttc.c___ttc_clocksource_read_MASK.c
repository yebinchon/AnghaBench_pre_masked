
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ttc_timer {scalar_t__ base_addr; } ;
struct clocksource {int dummy; } ;
struct TYPE_2__ {struct ttc_timer ttc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_1__* FUNC_1 (struct clocksource*) ;

__attribute__((used)) static u64 FUNC_2(struct clocksource *VAR_1)
{
 struct ttc_timer *VAR_2 = &FUNC_1(VAR_1)->ttc;

 return (u64)FUNC_0(VAR_2->base_addr +
    VAR_0);
}
