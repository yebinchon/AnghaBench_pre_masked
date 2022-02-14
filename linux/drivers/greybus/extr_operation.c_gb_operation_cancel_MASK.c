
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_operation {int waiters; int request; int work; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct gb_operation*) ;
 int FUNC_5 (struct gb_operation*) ;
 scalar_t__ FUNC_6 (struct gb_operation*,int) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;

void FUNC_10(struct gb_operation *VAR_2, int VAR_3)
{
 if (FUNC_0(FUNC_5(VAR_2)))
  return;

 if (FUNC_6(VAR_2, VAR_3)) {
  FUNC_3(VAR_2->request);
  FUNC_7(VAR_1, &VAR_2->work);
 }
 FUNC_8(VAR_2->request);

 FUNC_2(&VAR_2->waiters);
 FUNC_9(VAR_0,
     !FUNC_4(VAR_2));
 FUNC_1(&VAR_2->waiters);
}
