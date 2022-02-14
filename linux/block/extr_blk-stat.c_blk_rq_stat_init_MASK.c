
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_rq_stat {unsigned long long min; scalar_t__ batch; scalar_t__ mean; scalar_t__ nr_samples; scalar_t__ max; } ;



void FUNC_0(struct blk_rq_stat *VAR_0)
{
 VAR_0->min = -1ULL;
 VAR_0->max = VAR_0->nr_samples = VAR_0->mean = 0;
 VAR_0->batch = 0;
}
