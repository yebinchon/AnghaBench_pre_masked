
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clone {unsigned long nr_regions; int lock; int deferred_discard_bios; int cmd; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (int *,struct bio*) ;
 int FUNC_3 (struct clone*,struct bio*,unsigned long*,unsigned long*) ;
 int FUNC_4 (struct clone*,struct bio*,int) ;
 scalar_t__ FUNC_5 (int ,unsigned long,unsigned long) ;
 scalar_t__ FUNC_6 (struct clone*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct clone*) ;

__attribute__((used)) static void FUNC_11(struct clone *VAR_1, struct bio *VAR_2)
{
 unsigned long VAR_3, VAR_4, VAR_5;

 FUNC_3(VAR_1, VAR_2, &VAR_3, &VAR_4);
 FUNC_0(VAR_4 > VAR_1->nr_regions);

 if (FUNC_9(VAR_3 == VAR_4)) {
  FUNC_1(VAR_2);
  return;
 }





 if (FUNC_5(VAR_1->cmd, VAR_3, VAR_4 - VAR_3)) {
  FUNC_4(VAR_1, VAR_2, 1);
  return;
 }






 if (FUNC_9(FUNC_6(VAR_1) >= VAR_0)) {
  FUNC_1(VAR_2);
  return;
 }




 FUNC_7(&VAR_1->lock, VAR_5);
 FUNC_2(&VAR_1->deferred_discard_bios, VAR_2);
 FUNC_8(&VAR_1->lock, VAR_5);

 FUNC_10(VAR_1);
}
