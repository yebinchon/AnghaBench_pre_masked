
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct bfq_data {int peak_rate_samples; int tot_sectors_dispatched; scalar_t__ sequential_samples; int last_rq_max_size; int first_dispatch; int last_dispatch; } ;


 int FUNC_0 (struct bfq_data*,char*,int,scalar_t__,int ) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct bfq_data *VAR_0,
           struct request *VAR_1)
{
 if (VAR_1 != ((void*)0)) {
  VAR_0->last_dispatch = VAR_0->first_dispatch = FUNC_2();
  VAR_0->peak_rate_samples = 1;
  VAR_0->sequential_samples = 0;
  VAR_0->tot_sectors_dispatched = VAR_0->last_rq_max_size =
   FUNC_1(VAR_1);
 } else
  VAR_0->peak_rate_samples = 0;

 FUNC_0(VAR_0,
  "reset_rate_computation at end, sample %u/%u tot_sects %llu",
  VAR_0->peak_rate_samples, VAR_0->sequential_samples,
  VAR_0->tot_sectors_dispatched);
}
