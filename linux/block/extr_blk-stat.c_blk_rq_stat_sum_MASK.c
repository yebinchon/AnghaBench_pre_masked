
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_rq_stat {int nr_samples; int mean; scalar_t__ batch; int max; int min; } ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct blk_rq_stat *VAR_0, struct blk_rq_stat *VAR_1)
{
 if (!VAR_1->nr_samples)
  return;

 VAR_0->min = FUNC_2(VAR_0->min, VAR_1->min);
 VAR_0->max = FUNC_1(VAR_0->max, VAR_1->max);

 VAR_0->mean = FUNC_0(VAR_1->batch + VAR_0->mean * VAR_0->nr_samples,
    VAR_0->nr_samples + VAR_1->nr_samples);

 VAR_0->nr_samples += VAR_1->nr_samples;
}
