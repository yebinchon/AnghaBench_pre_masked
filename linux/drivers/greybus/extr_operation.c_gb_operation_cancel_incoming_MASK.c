
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_operation {int waiters; int response; int work; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (struct gb_operation*) ;
 int FUNC_6 (struct gb_operation*) ;
 int FUNC_7 (struct gb_operation*) ;
 int FUNC_8 (struct gb_operation*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;

void FUNC_11(struct gb_operation *VAR_1, int VAR_2)
{
 if (FUNC_0(!FUNC_6(VAR_1)))
  return;

 if (!FUNC_7(VAR_1)) {




  FUNC_3(&VAR_1->work);
  if (!FUNC_8(VAR_1, VAR_2))
   FUNC_4(VAR_1->response);
 }
 FUNC_9(VAR_1->response);

 FUNC_2(&VAR_1->waiters);
 FUNC_10(VAR_0,
     !FUNC_5(VAR_1));
 FUNC_1(&VAR_1->waiters);
}
