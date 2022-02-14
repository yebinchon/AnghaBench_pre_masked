
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clone {int lock; int deferred_flush_completions; } ;
struct bio {int bi_opf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (int *,struct bio*) ;
 scalar_t__ FUNC_3 (struct clone*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct clone*) ;

__attribute__((used)) static void FUNC_8(struct clone *VAR_2, struct bio *VAR_3)
{
 unsigned long VAR_4;
 if (!(VAR_3->bi_opf & VAR_1)) {
  FUNC_0(VAR_3);
  return;
 }





 if (FUNC_6(FUNC_3(VAR_2) >= VAR_0)) {
  FUNC_1(VAR_3);
  return;
 }





 FUNC_4(&VAR_2->lock, VAR_4);
 FUNC_2(&VAR_2->deferred_flush_completions, VAR_3);
 FUNC_5(&VAR_2->lock, VAR_4);

 FUNC_7(VAR_2);
}
