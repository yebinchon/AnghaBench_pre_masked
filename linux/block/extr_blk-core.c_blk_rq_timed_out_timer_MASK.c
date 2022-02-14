
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct request_queue {int timeout_work; } ;


 struct request_queue* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int *) ;
 struct request_queue* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_2)
{
 struct request_queue *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);

 FUNC_1(&VAR_3->timeout_work);
}
