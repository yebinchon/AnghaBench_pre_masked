
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct blk_rq_stat {int max; int min; int mean; scalar_t__ nr_samples; } ;


 int FUNC_0 (struct seq_file*,char*,scalar_t__,int ,int ,int ) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_0, struct blk_rq_stat *VAR_1)
{
 if (VAR_1->nr_samples) {
  FUNC_0(VAR_0, "samples=%d, mean=%llu, min=%llu, max=%llu",
      VAR_1->nr_samples, VAR_1->mean, VAR_1->min, VAR_1->max);
 } else {
  FUNC_1(VAR_0, "samples=0");
 }
}
