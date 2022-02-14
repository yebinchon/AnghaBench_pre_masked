
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u64 ;
struct scmi_clk {TYPE_2__* info; } ;
struct clk_hw {int dummy; } ;
struct TYPE_3__ {unsigned long min_rate; unsigned long max_rate; int step_size; } ;
struct TYPE_4__ {TYPE_1__ range; scalar_t__ rate_discrete; } ;


 int FUNC_0 (unsigned long,int) ;
 struct scmi_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_2(struct clk_hw *VAR_0, unsigned long VAR_1,
    unsigned long *VAR_2)
{
 u64 VAR_3, VAR_4, VAR_5;
 struct scmi_clk *VAR_6 = FUNC_1(VAR_0);







 if (VAR_6->info->rate_discrete)
  return VAR_1;

 VAR_3 = VAR_6->info->range.min_rate;
 VAR_4 = VAR_6->info->range.max_rate;
 if (VAR_1 <= VAR_3)
  return VAR_3;
 else if (VAR_1 >= VAR_4)
  return VAR_4;

 VAR_5 = VAR_1 - VAR_3;
 VAR_5 += VAR_6->info->range.step_size - 1;
 FUNC_0(VAR_5, VAR_6->info->range.step_size);

 return VAR_5 * VAR_6->info->range.step_size + VAR_3;
}
