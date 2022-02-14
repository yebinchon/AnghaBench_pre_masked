
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clone {int lock; int deferred_flush_bios; } ;
struct bio {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (int *,struct bio*) ;
 int FUNC_2 (struct clone*,struct bio*) ;
 int FUNC_3 (struct bio*) ;
 scalar_t__ FUNC_4 (struct clone*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct clone*) ;

__attribute__((used)) static void FUNC_9(struct clone *VAR_1, struct bio *VAR_2)
{
 unsigned long VAR_3;

 if (!FUNC_2(VAR_1, VAR_2)) {
  FUNC_3(VAR_2);
  return;
 }





 if (FUNC_7(FUNC_4(VAR_1) >= VAR_0)) {
  FUNC_0(VAR_2);
  return;
 }





 FUNC_5(&VAR_1->lock, VAR_3);
 FUNC_1(&VAR_1->deferred_flush_bios, VAR_2);
 FUNC_6(&VAR_1->lock, VAR_3);

 FUNC_8(VAR_1);
}
