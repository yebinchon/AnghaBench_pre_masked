
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int service; } ;
struct bfq_queue {TYPE_1__ entity; } ;
struct bfq_data {int bfq_max_budget; int queue; int last_budget_start; int last_idling_start; } ;
typedef int ktime_t ;
typedef enum bfqq_expiration { ____Placeholder_bfqq_expiration } bfqq_expiration ;


 int FUNC_0 (struct bfq_queue*) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bfq_queue*) ;
 int FUNC_2 (struct bfq_data*,struct bfq_queue*,char*,int) ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static bool FUNC_7(struct bfq_data *VAR_4, struct bfq_queue *VAR_5,
     bool VAR_6, enum bfqq_expiration VAR_7,
     unsigned long *VAR_8)
{
 ktime_t VAR_9;
 u32 VAR_10;
 bool VAR_11 = FUNC_0(VAR_5);

 if (!FUNC_1(VAR_5))
  return 0;

 if (VAR_6)
  VAR_9 = VAR_4->last_idling_start;
 else
  VAR_9 = FUNC_4();
 VAR_9 = FUNC_5(VAR_9, VAR_4->last_budget_start);
 VAR_10 = FUNC_6(VAR_9);


 if (VAR_10 < 1000) {
  if (FUNC_3(VAR_4->queue))




   *VAR_8 = VAR_0 / VAR_1;
  else
   *VAR_8 = VAR_3 / VAR_1;

  return VAR_11;
 }

 *VAR_8 = VAR_10 / VAR_2;





 if (VAR_10 > 20000) {
  VAR_11 = VAR_5->entity.service < VAR_4->bfq_max_budget / 2;
 }

 FUNC_2(VAR_4, VAR_5, "bfq_bfqq_is_slow: slow %d", VAR_11);

 return VAR_11;
}
