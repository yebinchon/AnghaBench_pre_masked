
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r5conf {TYPE_1__* mddev; scalar_t__ retry_read_aligned; int wait_for_quiescent; int active_stripes; int wait_for_stripe; scalar_t__ hash_locks; struct list_head* inactive_list; int empty_inactive_list_nr; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {int thread; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct list_head*) ;
 int FUNC_3 (struct list_head*) ;
 int FUNC_4 (struct list_head*,struct list_head*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,unsigned long) ;
 int FUNC_7 (scalar_t__,unsigned long) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct r5conf *VAR_1,
      struct list_head *VAR_2,
      int VAR_3)
{
 int VAR_4;
 bool VAR_5 = 0;
 unsigned long VAR_6;

 if (VAR_3 == VAR_0) {
  VAR_4 = VAR_0;
  VAR_3 = VAR_0 - 1;
 } else
  VAR_4 = 1;
 while (VAR_4) {
  struct list_head *VAR_7 = &VAR_2[VAR_4 - 1];





  if (!FUNC_3(VAR_7)) {
   FUNC_6(VAR_1->hash_locks + VAR_3, VAR_6);
   if (FUNC_2(VAR_1->inactive_list + VAR_3) &&
       !FUNC_2(VAR_7))
    FUNC_0(&VAR_1->empty_inactive_list_nr);
   FUNC_4(VAR_7, VAR_1->inactive_list + VAR_3);
   VAR_5 = 1;
   FUNC_7(VAR_1->hash_locks + VAR_3, VAR_6);
  }
  VAR_4--;
  VAR_3--;
 }

 if (VAR_5) {
  FUNC_8(&VAR_1->wait_for_stripe);
  if (FUNC_1(&VAR_1->active_stripes) == 0)
   FUNC_8(&VAR_1->wait_for_quiescent);
  if (VAR_1->retry_read_aligned)
   FUNC_5(VAR_1->mddev->thread);
 }
}
