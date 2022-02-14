
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int poll_cb; int queue_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct request_queue*) ;
 int FUNC_1 (struct request_queue*,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static bool FUNC_3(struct request_queue *VAR_1)
{
 if (FUNC_2(VAR_0, &VAR_1->queue_flags) ||
     FUNC_0(VAR_0, VAR_1))
  return 1;
 FUNC_1(VAR_1, VAR_1->poll_cb);
 return 0;
}
