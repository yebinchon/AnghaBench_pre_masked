
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct throtl_service_queue {int pending_timer; } ;
struct TYPE_2__ {int throtl_slice; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 TYPE_1__* FUNC_1 (struct throtl_service_queue*) ;
 int FUNC_2 (struct throtl_service_queue*,char*,unsigned long,int) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct throtl_service_queue *VAR_1,
       unsigned long VAR_2)
{
 unsigned long VAR_3 = VAR_0 + 8 * FUNC_1(VAR_1)->throtl_slice;
 if (FUNC_3(VAR_2, VAR_3))
  VAR_2 = VAR_3;
 FUNC_0(&VAR_1->pending_timer, VAR_2);
 FUNC_2(VAR_1, "schedule timer. delay=%lu jiffies=%lu",
     VAR_2 - VAR_0, VAR_0);
}
