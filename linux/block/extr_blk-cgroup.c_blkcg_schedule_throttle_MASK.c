
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct TYPE_3__ {int flags; int use_memdelay; struct request_queue* throttle_queue; } ;


 int VAR_0 ;
 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct request_queue*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(struct request_queue *VAR_2, bool VAR_3)
{
 if (FUNC_3(VAR_1->flags & VAR_0))
  return;

 if (!FUNC_0(VAR_2))
  return;

 if (VAR_1->throttle_queue)
  FUNC_1(VAR_1->throttle_queue);
 VAR_1->throttle_queue = VAR_2;
 if (VAR_3)
  VAR_1->use_memdelay = VAR_3;
 FUNC_2(VAR_1);
}
