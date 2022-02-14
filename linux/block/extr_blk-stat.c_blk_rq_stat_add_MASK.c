
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct blk_rq_stat {int nr_samples; int batch; int max; int min; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

void FUNC_2(struct blk_rq_stat *VAR_0, u64 VAR_1)
{
 VAR_0->min = FUNC_1(VAR_0->min, VAR_1);
 VAR_0->max = FUNC_0(VAR_0->max, VAR_1);
 VAR_0->batch += VAR_1;
 VAR_0->nr_samples++;
}
