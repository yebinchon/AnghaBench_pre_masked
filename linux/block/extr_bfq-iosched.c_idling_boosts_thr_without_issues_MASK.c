
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_queue {int dummy; } ;
struct bfq_data {scalar_t__ wr_busy_queues; int hw_tag; int queue; } ;


 int FUNC_0 (struct bfq_queue*) ;
 scalar_t__ FUNC_1 (struct bfq_queue*) ;
 scalar_t__ FUNC_2 (struct bfq_queue*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(struct bfq_data *VAR_0,
          struct bfq_queue *VAR_1)
{
 bool VAR_2 =
  !FUNC_3(VAR_0->queue) && !VAR_0->hw_tag,
  VAR_3,
  VAR_4;

 VAR_3 = !FUNC_0(VAR_1) &&
  FUNC_1(VAR_1) && FUNC_2(VAR_1);
 VAR_4 = VAR_2 ||
  ((!FUNC_3(VAR_0->queue) || !VAR_0->hw_tag) &&
   VAR_3);
 return VAR_4 &&
  VAR_0->wr_busy_queues == 0;
}
