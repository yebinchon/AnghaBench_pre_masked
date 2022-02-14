
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct sh_cmt_channel {int lock; scalar_t__ match_value; scalar_t__ total_cycles; } ;
struct clocksource {int dummy; } ;


 struct sh_cmt_channel* FUNC_0 (struct clocksource*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (struct sh_cmt_channel*,scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static u64 FUNC_5(struct clocksource *VAR_0)
{
 struct sh_cmt_channel *VAR_1 = FUNC_0(VAR_0);
 unsigned long VAR_2;
 u32 VAR_3;
 u64 VAR_4;
 u32 VAR_5;

 FUNC_1(&VAR_1->lock, VAR_2);
 VAR_4 = VAR_1->total_cycles;
 VAR_5 = FUNC_3(VAR_1, &VAR_3);

 if (FUNC_4(VAR_3))
  VAR_5 += VAR_1->match_value + 1;
 FUNC_2(&VAR_1->lock, VAR_2);

 return VAR_4 + VAR_5;
}
