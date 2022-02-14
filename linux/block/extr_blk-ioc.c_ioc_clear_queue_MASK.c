
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int queue_lock; int icq_list; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct request_queue *VAR_1)
{
 FUNC_0(VAR_0);

 FUNC_3(&VAR_1->queue_lock);
 FUNC_2(&VAR_1->icq_list, &VAR_0);
 FUNC_4(&VAR_1->queue_lock);

 FUNC_1(&VAR_0);
}
