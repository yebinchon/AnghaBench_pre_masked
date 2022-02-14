
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int queue_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct request_queue*) ;
 int FUNC_1 (int ,struct request_queue*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct request_queue*,int ) ;

void FUNC_4(struct request_queue *VAR_2, bool VAR_3, bool VAR_4)
{
 if (VAR_3)
  FUNC_1(VAR_1, VAR_2);
 else
  FUNC_0(VAR_1, VAR_2);
 if (VAR_4)
  FUNC_1(VAR_0, VAR_2);
 else
  FUNC_0(VAR_0, VAR_2);

 FUNC_3(VAR_2, FUNC_2(VAR_1, &VAR_2->queue_flags));
}
