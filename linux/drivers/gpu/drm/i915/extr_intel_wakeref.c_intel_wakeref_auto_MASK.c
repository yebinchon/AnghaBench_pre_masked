
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_wakeref_auto {int timer; int lock; int count; int rpm; int wakeref; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct intel_wakeref_auto *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3;

 if (!VAR_2) {
  if (FUNC_2(&VAR_1->timer))
   FUNC_9(&VAR_1->timer);
  return;
 }


 FUNC_1(VAR_1->rpm);

 if (!FUNC_5(&VAR_1->count)) {
  FUNC_7(&VAR_1->lock, VAR_3);
  if (!FUNC_5(&VAR_1->count)) {
   FUNC_0(VAR_1->wakeref);
   VAR_1->wakeref = FUNC_3(VAR_1->rpm);
   FUNC_6(&VAR_1->count, 1);
  }
  FUNC_8(&VAR_1->lock, VAR_3);
 }






 if (FUNC_4(&VAR_1->timer, VAR_0 + VAR_2))
  FUNC_9(&VAR_1->timer);
}
