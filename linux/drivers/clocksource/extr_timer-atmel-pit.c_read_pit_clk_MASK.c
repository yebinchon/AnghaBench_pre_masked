
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct pit_data {int cnt; int cycle; int base; } ;
struct clocksource {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct pit_data* FUNC_2 (struct clocksource*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;

__attribute__((used)) static u64 FUNC_6(struct clocksource *VAR_1)
{
 struct pit_data *VAR_2 = FUNC_2(VAR_1);
 unsigned long VAR_3;
 u32 VAR_4;
 u32 VAR_5;

 FUNC_5(VAR_3);
 VAR_4 = VAR_2->cnt;
 VAR_5 = FUNC_3(VAR_2->base, VAR_0);
 FUNC_4(VAR_3);

 VAR_4 += FUNC_1(VAR_5) * VAR_2->cycle;
 VAR_4 += FUNC_0(VAR_5);
 return VAR_4;
}
