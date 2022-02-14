
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int poll_cb; int queue_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct request_queue *VAR_1)
{




 if (!FUNC_2(VAR_0, &VAR_1->queue_flags) ||
     FUNC_1(VAR_1->poll_cb))
  return;

 FUNC_0(VAR_1->poll_cb, 100);
}
