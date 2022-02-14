
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bio {int dummy; } ;
struct bfq_queue {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ioc; } ;
struct bfq_io_cq {int ioprio; TYPE_2__ icq; } ;
struct bfq_data {int dummy; } ;
struct TYPE_3__ {int ioprio; } ;


 int VAR_0 ;
 struct bfq_queue* FUNC_0 (struct bfq_data*,struct bio*,int ,struct bfq_io_cq*) ;
 int FUNC_1 (struct bfq_queue*) ;
 int FUNC_2 (struct bfq_queue*,struct bfq_io_cq*) ;
 int FUNC_3 (struct bfq_io_cq*,struct bfq_queue*,int) ;
 struct bfq_data* FUNC_4 (struct bfq_io_cq*) ;
 struct bfq_queue* FUNC_5 (struct bfq_io_cq*,int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct bfq_io_cq *VAR_1, struct bio *VAR_2)
{
 struct bfq_data *VAR_3 = FUNC_4(VAR_1);
 struct bfq_queue *VAR_4;
 int VAR_5 = VAR_1->icq.ioc->ioprio;





 if (FUNC_7(!VAR_3) || FUNC_6(VAR_1->ioprio == VAR_5))
  return;

 VAR_1->ioprio = VAR_5;

 VAR_4 = FUNC_5(VAR_1, 0);
 if (VAR_4) {

  FUNC_1(VAR_4);
  VAR_4 = FUNC_0(VAR_3, VAR_2, VAR_0, VAR_1);
  FUNC_3(VAR_1, VAR_4, 0);
 }

 VAR_4 = FUNC_5(VAR_1, 1);
 if (VAR_4)
  FUNC_2(VAR_4, VAR_1);
}
