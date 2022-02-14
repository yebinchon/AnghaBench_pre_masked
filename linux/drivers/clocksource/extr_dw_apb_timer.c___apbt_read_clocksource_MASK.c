
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct dw_apb_clocksource {int timer; } ;
struct clocksource {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct dw_apb_clocksource* FUNC_1 (struct clocksource*) ;

__attribute__((used)) static u64 FUNC_2(struct clocksource *VAR_1)
{
 u32 VAR_2;
 struct dw_apb_clocksource *VAR_3 =
  FUNC_1(VAR_1);

 VAR_2 = FUNC_0(&VAR_3->timer,
     VAR_0);

 return (u64)~VAR_2;
}
