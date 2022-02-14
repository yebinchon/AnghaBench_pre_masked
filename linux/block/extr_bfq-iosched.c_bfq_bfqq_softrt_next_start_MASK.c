
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfq_queue {int service_from_backlogged; TYPE_1__* bfqd; scalar_t__ last_idle_bklogged; int soft_rt_next_start; } ;
struct bfq_data {int bfq_wr_max_softrt_rate; } ;
struct TYPE_2__ {int bfq_slice_idle; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static unsigned long FUNC_2(struct bfq_data *VAR_2,
      struct bfq_queue *VAR_3)
{
 return FUNC_0(VAR_3->soft_rt_next_start,
      VAR_3->last_idle_bklogged +
      VAR_0 * VAR_3->service_from_backlogged /
      VAR_2->bfq_wr_max_softrt_rate,
      VAR_1 + FUNC_1(VAR_3->bfqd->bfq_slice_idle) + 4);
}
